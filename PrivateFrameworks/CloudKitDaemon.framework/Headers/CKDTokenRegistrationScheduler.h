/* Runtime dump - CKDTokenRegistrationScheduler
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDTokenRegistrationScheduler : NSObject <CKDSystemAvailabilityWatcher>
{
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _callbackBlocks;
    NSMutableDictionary * _callbackTimers;
    NSObject<OS_dispatch_source> * _scheduleTimer;
    NSMutableSet * _requests;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) NSMutableDictionary * callbackBlocks;
@property (retain, nonatomic) NSMutableDictionary * callbackTimers;
@property (retain, nonatomic) NSObject<OS_dispatch_source> * scheduleTimer;
@property (retain, nonatomic) NSMutableSet * requests;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CKDTokenRegistrationScheduler *)sharedScheduler;

- (void)dealloc;
- (CKDTokenRegistrationScheduler *)init;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)systemAvailabilityChanged:(char)arg0;
- (void)unregisterTokenForAppContainerTuple:(id)arg0;
- (void)unregisterAllTokensWithCompletionHandler:(id /* block */)arg0;
- (void)forceTokenRefreshForAllClients;
- (void)ensureTokenRefreshForAppContainerTuple:(id)arg0 apsEnvironmentString:(NSString *)arg1 useAPSPublicToken:(char)arg2 darkWakeEnabled:(char)arg3 completionBlock:(id /* block */)arg4;
- (void)_scheduleTokenRefresh;
- (void)handlePushTokenDidUpdate:(NSDate *)arg0;
- (void)handlePublicPushTokenDidUpdate:(NSDate *)arg0;
- (void)refreshAllClientsNow;
- (NSMutableSet *)requests;
- (NSObject<OS_dispatch_source> *)scheduleTimer;
- (void)scheduleTokenRefresh;
- (NSMutableDictionary *)callbackTimers;
- (NSMutableDictionary *)callbackBlocks;
- (void)_refreshToken:(NSString *)arg0 appContainerTuple:(CKDAppContainerTuple *)arg1 apsEnvironmentString:(NSString *)arg2 usesAPSPublicToken:(int)arg3 darkWakeEnabled:(char)arg4 completionBlock:(id /* block */)arg5;
- (void)_removeToken:(NSString *)arg0 appContainerTuple:(CKDAppContainerTuple *)arg1 apsEnvironmentString:(NSString *)arg2 usesAPSPublicToken:(int)arg3 darkWakeEnabled:(char)arg4 completionBlock:(id /* block */)arg5;
- (void)tokenRefreshChanged;
- (void)setCallbackBlocks:(NSMutableDictionary *)arg0;
- (void)setCallbackTimers:(NSMutableDictionary *)arg0;
- (void)setScheduleTimer:(NSObject<OS_dispatch_source> *)arg0;
- (void)setRequests:(NSMutableSet *)arg0;

@end
