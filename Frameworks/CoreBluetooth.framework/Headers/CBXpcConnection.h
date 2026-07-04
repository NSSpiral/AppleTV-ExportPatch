/* Runtime dump - CBXpcConnection
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBXpcConnection : NSObject
{
    <CBXpcConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSMutableDictionary * _options;
    int _type;
    char _appIsBackgrounded;
    NSObject<OS_dispatch_semaphore> * _xpcSendBarrier;
    NSObject<OS_xpc_object> * _xpcConnection;
    char _isFinalizing;
}

@property (readonly, nonatomic) char setupOnUIThread;

- (void)sendMsg:(unsigned short)arg0 args:(struct OpaqueJSValue * *)arg1;
- (id)sendSyncMsg:(unsigned short)arg0 args:(struct OpaqueJSValue * *)arg1;
- (CBXpcConnection *)initWithDelegate:(<CBXpcConnectionDelegate> *)arg0 queue:(NSObject *)arg1 options:(NSMutableDictionary *)arg2 sessionType:(int)arg3;
- (char)isSetupOnUIThread;
- (void)handleMsg:(unsigned short)arg0 args:(struct OpaqueJSValue * *)arg1;
- (void)applicationWillEnterForegroundNotification;
- (void)handleConnectionEvent:(NSObject *)arg0;
- (void)checkOut;
- (void)sendAsyncMsg:(unsigned short)arg0 args:(struct OpaqueJSValue * *)arg1;
- (NSDictionary *)allocXpcDictionaryWithNSDictionary:(NSDictionary *)arg0;
- (id)allocXpcMsg:(unsigned short)arg0 args:(struct OpaqueJSValue * *)arg1;
- (void)sendBarrier;
- (NSDictionary *)nsDictionaryFromXpcDictionary:(NSDictionary *)arg0 extraCapacity:(unsigned int)arg1;
- (void)handleFinalized;
- (void)handleReset;
- (void)handleInvalid;
- (NSArray *)allocXpcArrayWithNSArray:(NSArray *)arg0;
- (NSObject *)allocXpcObjectWithNSObject:(NSObject *)arg0;
- (NSArray *)nsArrayWithXpcArray:(NSArray *)arg0;
- (NSObject *)nsObjectWithXpcObject:(NSObject<OS_xpc_object> *)arg0;
- (void)dealloc;
- (void)disconnect;
- (void)applicationDidEnterBackgroundNotification;
- (void)checkIn;

@end
