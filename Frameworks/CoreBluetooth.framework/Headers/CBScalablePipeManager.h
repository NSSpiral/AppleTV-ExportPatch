/* Runtime dump - CBScalablePipeManager
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBScalablePipeManager : NSObject <CBXpcConnectionDelegate>
{
    <CBScalablePipeManagerDelegate> * _delegate;
    CBXpcConnection * _connection;
    int _state;
    NSMutableSet * _identifiers;
    NSHashTable * _pipes;
}

@property (readonly) int state;
@property (readonly) NSSet * identifiers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)isMsgAllowedWhenOff:(int)arg0;
- (char)sendMsg:(int)arg0 args:(struct OpaqueJSValue * *)arg1;
- (void)handleStateUpdated:(id)arg0;
- (void)xpcConnectionDidReset:(NSSet *)arg0;
- (void)xpcConnectionIsInvalid:(id)arg0;
- (void)xpcConnection:(NSURLConnection *)arg0 didReceiveMsg:(unsigned short)arg1 args:(struct OpaqueJSValue * *)arg2;
- (void)xpcConnectionDidFinalize:(id)arg0;
- (void)orphanPipes;
- (NSString *)pipeForName:(NSString *)arg0 identifier:(NSString *)arg1;
- (void)handleEndpointAdded:(id)arg0;
- (void)handleEndpointRemoved:(id)arg0;
- (void)handlePipeConnected:(id)arg0;
- (void)handlePipeDisconnected:(id)arg0;
- (void)handleDataAvailable:(id)arg0;
- (void)handleHostStateUpdated:(id)arg0;
- (void)registerEndpoint:(NSObject *)arg0 type:(int)arg1 priority:(int)arg2;
- (void)unregisterEndpoint:(NSObject *)arg0;
- (void)unregisterAllEndpoints;
- (void)release;
- (void)dealloc;
- (int)state;
- (CBScalablePipeManager *)initWithDelegate:(<CBScalablePipeManagerDelegate> *)arg0 queue:(NSObject *)arg1;
- (CBScalablePipeManager *)initWithDelegate:(<CBScalablePipeManagerDelegate> *)arg0;
- (NSSet *)identifiers;

@end
