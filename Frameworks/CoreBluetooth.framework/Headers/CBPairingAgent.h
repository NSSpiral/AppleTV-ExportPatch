/* Runtime dump - CBPairingAgent
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBPairingAgent : NSObject
{
    <CBPairingAgentDelegate> * _delegate;
    <CBPairingAgentParentDelegate> * _parentManager;
    char _useOOBMode;
}

@property (weak, nonatomic) <CBPairingAgentDelegate> * delegate;
@property (nonatomic) char useOOBMode;

- (void)setOrphan;
- (CBPairingAgent *)initWithParentManager:(<CBPairingAgentParentDelegate> *)arg0;
- (void)handlePairingMessage:(unsigned short)arg0 args:(struct OpaqueJSValue * *)arg1;
- (void)updateRegistration;
- (void)handlePairingRequested:(id)arg0;
- (void)handlePairingCompleted:(id)arg0;
- (void)handleUnpaired:(id)arg0;
- (char)isPeerCloudPaired:(id)arg0;
- (void)pairPeer:(NSObject *)arg0;
- (void)setUseOOBMode:(char)arg0;
- (NSObject *)retrieveOOBDataForPeer:(NSObject *)arg0;
- (void)setOOBPairingEnabled:(char)arg0 forPeer:(NSObject *)arg1;
- (char)useOOBMode;
- (void)setDelegate:(<CBPairingAgentDelegate> *)arg0;
- (<CBPairingAgentDelegate> *)delegate;
- (char)isPeerPaired:(id)arg0;
- (void)unpairPeer:(NSObject *)arg0;
- (void)respondToPairingRequest:(NSURLRequest *)arg0 type:(int)arg1 accept:(char)arg2 data:(NSData *)arg3;
- (id)retrievePairedPeers;

@end
