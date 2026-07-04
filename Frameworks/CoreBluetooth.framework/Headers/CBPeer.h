/* Runtime dump - CBPeer
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBPeer : NSObject <NSCopying>
{
    struct __CFUUID * _UUID;
    NSUUID * _identifier;
    unsigned int _mtuLength;
    int _pairingState;
    int _hostState;
    char _isLinkEncrypted;
}

@property (readonly, nonatomic) struct __CFUUID * UUID;
@property (readonly, nonatomic) NSUUID * identifier;
@property (nonatomic) unsigned int mtuLength;
@property (nonatomic) int pairingState;
@property (nonatomic) int hostState;
@property (nonatomic) char isLinkEncrypted;

- (CBPeer *)initWithInfo:(NSDictionary *)arg0;
- (void)handleMsg:(int)arg0 args:(struct OpaqueJSValue * *)arg1;
- (void)setHostState:(int)arg0;
- (void)handleHostStateUpdated:(id)arg0;
- (void)setMtuLength:(unsigned int)arg0;
- (void)setIsLinkEncrypted:(char)arg0;
- (void)handleMTUChanged:(NSNotification *)arg0;
- (void)handleLinkEncryptionChanged:(NSNotification *)arg0;
- (int)pairingState;
- (void)setPairingState:(int)arg0;
- (int)hostState;
- (char)isLinkEncrypted;
- (void)dealloc;
- (NSUUID *)identifier;
- (CBPeer *)copyWithZone:(struct _NSZone *)arg0;
- (struct __CFUUID *)UUID;
- (unsigned int)mtuLength;

@end
