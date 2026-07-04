/* Runtime dump - SFCompanionManager
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionManager : NSObject <SFCompanionServiceManagerClient, SFCompanionXPCManagerObserver>
{
    NSString * _identifier;
    <SFCompanionServiceManagerProtocol> * _managerProxy;
    NSString * _deviceID;
    NSString * _deviceIP;
    NSString * _deviceName;
    NSMutableDictionary * _services;
    NSMutableDictionary * _streamHandlers;
    NSObject<OS_dispatch_semaphore> * _managerSemaphore;
}

@property (copy) NSString * identifier;
@property (retain) <SFCompanionServiceManagerProtocol> * managerProxy;
@property (copy) NSString * deviceID;
@property (copy) NSString * deviceIP;
@property (copy) NSString * deviceName;
@property (retain) NSMutableDictionary * services;
@property (retain) NSMutableDictionary * streamHandlers;
@property NSObject<OS_dispatch_semaphore> * managerSemaphore;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)serviceManager;

- (void)dealloc;
- (SFCompanionManager *)init;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (NSString *)deviceID;
- (NSString *)deviceName;
- (void)setDeviceID:(NSString *)arg0;
- (NSMutableDictionary *)services;
- (void)setServices:(NSMutableDictionary *)arg0;
- (void)xpcManagerConnectionInterrupted;
- (void)xpcManagerDidInvalidate:(NSDate *)arg0;
- (NSString *)streamDataForIdentifier:(NSString *)arg0;
- (void)getStreamsForData:(NSData *)arg0 withStreamHandler:(id /* block */)arg1;
- (void)supportStreamsWithIdentifier:(NSString *)arg0 withStreamHandler:(id /* block */)arg1;
- (void)disableStreamSupportForIdentifier:(NSString *)arg0;
- (void)streamToService:(NSObject *)arg0 withFileHandle:(NSFileHandle *)arg1 acceptReply:(id /* block */)arg2;
- (void)retrieveManagerProxy;
- (void)signalSemaphore;
- (<SFCompanionServiceManagerProtocol> *)managerProxy;
- (NSString *)serviceForIdentifier:(NSString *)arg0;
- (void)setManagerProxy:(<SFCompanionServiceManagerProtocol> *)arg0;
- (void)setDeviceIP:(NSString *)arg0;
- (void)streamsFromFileHandle:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (NSString *)deviceIP;
- (NSMutableDictionary *)streamHandlers;
- (void)setStreamHandlers:(NSMutableDictionary *)arg0;
- (NSObject<OS_dispatch_semaphore> *)managerSemaphore;
- (void)setManagerSemaphore:(NSObject<OS_dispatch_semaphore> *)arg0;
- (void)setDeviceName:(NSString *)arg0;

@end
