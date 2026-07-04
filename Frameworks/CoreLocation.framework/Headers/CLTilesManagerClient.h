/* Runtime dump - CLTilesManagerClient
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLTilesManagerClient : NSObject
{
    NSObject<OS_xpc_object> * fXpcConnection;
    NSObject<OS_dispatch_queue> * fQueue;
    NSDictionary * fNotificationHandlers;
}

+ (void)initialize;
+ (CLTilesManagerClient *)sharedClient;

- (void)onNotificationReceived:(id)arg0;
- (void)sendNotificationRegistrationMessage:(NSString *)arg0 isRegister:(char)arg1;
- (void)reconnect;
- (char)executeAsynchronousQuery:(NSObject *)arg0 onQueue:(/* block */ id)arg1 responseBlock:(id /* block */)arg2;
- (char)precacheHint:(id)arg0 onQueue:(/* block */ id)arg1 responseBlock:(id /* block */)arg2;
- (char)registerTo:(GEOPlaceDataCacheRegister *)arg0 onQueue:(/* block */ id)arg1 block:(id /* block */)arg2;
- (char)unregisterFrom:(NSObject *)arg0;
- (void)dealloc;
- (CLTilesManagerClient *)init;

@end
