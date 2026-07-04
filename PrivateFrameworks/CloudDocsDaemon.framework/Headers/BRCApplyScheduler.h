/* Runtime dump - BRCApplyScheduler
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCApplyScheduler : BRCFSSchedulerBase <BRCModule>
{
    BRCCountedSet * _coordinatedWriters;
    NSMutableSet * _watchingFaults;
    char _applyCountReachedMax;
    NSObject<OS_dispatch_group> * _writerGroup;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_group> * writerGroup;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char isCancelled;

- (void).cxx_destruct;
- (void)_close;
- (BRCApplyScheduler *)initWithAccountSession:(NSObject *)arg0;
- (void)_schedule;
- (void)_describe:(id)arg0 zone:(NSObject *)arg1 now:(long long)arg2 context:(NSObject *)arg3;
- (void)updateThrottleID:(long long)arg0 zone:(NSObject *)arg1 state:(int)arg2;
- (void)deleteExpiredThrottles;
- (char)_scheduleOne:(id)arg0;
- (void)_handleWatchingFaults;
- (void)_retriedThrottleID:(long long)arg0 zone:(NSObject *)arg1 kind:(unsigned int)arg2;
- (unsigned int)_writeCoordinationCount;
- (void)rescheduleSuspendedThrottlesForZone:(NSObject *)arg0 state:(int)arg1;
- (void)updateThrottleID:(long long)arg0 zone:(NSObject *)arg1 state:(int)arg2 kind:(unsigned int)arg3;
- (void)createThrottleID:(long long)arg0 zone:(NSObject *)arg1 itemID:(unsigned long long)arg2 state:(int)arg3 kind:(unsigned int)arg4;
- (void)didCreateMissingParentID:(NSObject *)arg0 zone:(NSObject *)arg1;
- (void)didReparentOrKillItemID:(NSObject *)arg0 parentItemID:(BRCItemID *)arg1 zone:(NSObject *)arg2;
- (void)repopulateThrottlesForZone:(NSObject *)arg0;
- (void)monitorFaultingForContainer:(NSObject *)arg0;
- (char)startWriteCoordinationInZone:(NSObject *)arg0;
- (void)endWriteCoordinationInZone:(NSObject *)arg0;
- (void)didSyncDownZone:(NSObject *)arg0 requestID:(unsigned long long)arg1 upToRank:(long long)arg2 caughtUpWithServer:(char)arg3;
- (NSObject<OS_dispatch_group> *)writerGroup;

@end
