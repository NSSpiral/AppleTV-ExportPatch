/* Runtime dump - BRCFSSchedulerBase
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSSchedulerBase : NSObject <BRCLifeCycle>
{
    BRCAccountSession * _session;
    BRCDeadlineToken * _schedulerToken;
    NSObject<OS_dispatch_queue> * _schedulerQueue;
    NSString * _name;
    PQLNameInjection * _tableName;
    char _hasActiveWork;
    char _hasWork;
    char _isCancelled;
    NSObject<OS_dispatch_group> * _hasWorkGroup;
}

@property (retain) NSObject<OS_dispatch_group> * hasWorkGroup;
@property (readonly) char closed;
@property (nonatomic) char hasWork;
@property (nonatomic) char hasActiveWork;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char isCancelled;

- (void)cancel;
- (void)suspend;
- (char)isCancelled;
- (void)resume;
- (void)close;
- (void).cxx_destruct;
- (void)_close;
- (void)setIsCancelled:(char)arg0;
- (NSObject<OS_dispatch_group> *)hasWorkGroup;
- (char)closed;
- (void)_schedule;
- (void)_signalForNextWork:(long long)arg0;
- (void)_describe:(id)arg0 zone:(NSObject *)arg1 now:(long long)arg2 context:(NSObject *)arg3;
- (long long)_updateStamps:(struct throttle_stamps *)arg0 throttle:(EKTravelEngineThrottle *)arg1 now:(long long)arg2;
- (void)setHasActiveWork:(char)arg0;
- (void)setHasWork:(char)arg0;
- (void)setHasWorkGroup:(NSObject<OS_dispatch_group> *)arg0;
- (NSObject *)_initWithSession:(BRCAccountSession *)arg0 name:(NSString *)arg1 tableName:(PQLNameInjection *)arg2;
- (char)_canRetryThrottleID:(long long)arg0 zone:(NSObject *)arg1;
- (NSObject *)descriptionForThrottleID:(long long)arg0 zone:(NSObject *)arg1 now:(long long)arg2 context:(NSObject *)arg3;
- (NSObject *)descriptionForZone:(NSObject *)arg0 now:(long long)arg1 context:(NSObject *)arg2;
- (void)_computeStamps:(struct throttle_stamps *)arg0 throttleID:(long long)arg1 zone:(NSObject *)arg2 throttle:(EKTravelEngineThrottle *)arg3 hasBeenTried:(char)arg4;
- (void)updateThrottleID:(long long)arg0 zone:(NSObject *)arg1 state:(int)arg2;
- (void)_deleteThrottleID:(long long)arg0 zone:(NSObject *)arg1;
- (void)deleteThrottlesForZone:(NSObject *)arg0;
- (void)deleteExpiredThrottles;
- (void)_scheduleDone:(long long)arg0 nextWork:(long long)arg1;
- (char)hasActiveWork;
- (char)hasWork;

@end
