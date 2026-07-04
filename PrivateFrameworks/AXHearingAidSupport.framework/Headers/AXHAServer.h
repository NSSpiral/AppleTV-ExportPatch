/* Runtime dump - AXHAServer
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHAServer : NSObject <AXHARemoteUpdateProtocol>
{
    char _hearingAidReachable;
    NSArray * _availableHearingAids;
    NSArray * _availableControllers;
    <AXHAServerDelegate> * _delegate;
    NSMutableDictionary * _updates;
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property (retain, nonatomic) NSArray * availableHearingAids;
@property (retain, nonatomic) NSArray * availableControllers;
@property (nonatomic) char hearingAidReachable;
@property (nonatomic) <AXHAServerDelegate> * delegate;
@property (retain, nonatomic) NSMutableDictionary * updates;
@property (retain, nonatomic) NSObject<OS_xpc_object> * xpcConnection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (AXHAServer *)sharedInstance;

- (void)setUpdates:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (void)setDelegate:(<AXHAServerDelegate> *)arg0;
- (AXHAServer *)init;
- (<AXHAServerDelegate> *)delegate;
- (char)hearingAidReachable;
- (void)writeValue:(id)arg0 forProperty:(int)arg1 forDeviceID:(NSString *)arg2;
- (void)updateProperty:(int)arg0 forDeviceID:(NSString *)arg1;
- (NSArray *)availableControllers;
- (void)sendMessageWithPayload:(NSData *)arg0 andIdentifier:(unsigned long long)arg1;
- (void)setAvailableHearingAids:(NSArray *)arg0;
- (void)setAvailableControllers:(NSArray *)arg0;
- (void)terminateConnection;
- (NSArray *)availableHearingAids;
- (void)handleMessageWithPayload:(NSData *)arg0 forIdentifier:(unsigned long long)arg1;
- (void)availableDevicesDidUpdate:(NSDate *)arg0;
- (void)deviceDidUpdateProperty:(NSObject *)arg0;
- (void)liveListenDidUpdate:(NSDate *)arg0;
- (void)setHearingAidReachable:(char)arg0;
- (void)setupServerIfNecessary;
- (void)registerUpdateBlock:(void *)arg0 forIdentier:(unsigned long long)arg1 withListener:(BSActionListener *)arg2;
- (void)startServerWithDelegate:(<AXHAServerDelegate> *)arg0;
- (void)unregisterUpdateListener:(id)arg0;
- (void)registerListener:(id)arg0 forAvailableDeviceHandler:(id /* block */)arg1;
- (void)registerListener:(id)arg0 forPropertyUpdateHandler:(id /* block */)arg1;
- (void)connectToControllerWithID:(int)arg0;
- (void)requestHearingAidConnection;
- (void)cancelHearingAidConnectionRequest;
- (void)registerListener:(id)arg0 forLiveListenLevelsHandler:(id /* block */)arg1;
- (void)startLiveListen;
- (void)stopLiveListen;
- (void)resetConnection;
- (NSObject<OS_xpc_object> *)xpcConnection;
- (void)setXpcConnection:(NSObject<OS_xpc_object> *)arg0;
- (NSMutableDictionary *)updates;

@end
