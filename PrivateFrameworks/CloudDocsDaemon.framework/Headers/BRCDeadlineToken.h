/* Runtime dump - BRCDeadlineToken
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDeadlineToken : NSObject
{
    long long _deadline;
    NSObject<OS_dispatch_source> * _latch;
    BRCDeadlineScheduler * _scheduler;
    char _isResumed;
}

- (void)cancel;
- (void)dealloc;
- (NSString *)description;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
- (BRCDeadlineToken *)initWithScheduler:(BRCDeadlineScheduler *)arg0;
- (void)setTargetQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setBottomQueue:(NSObject *)arg0;
- (void)setEventHandler:(SCNEventHandler *)arg0;
- (void)scheduleAt:(long long)arg0;

@end
