/* Runtime dump - BRCDeadlineScheduler
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDeadlineScheduler : NSObject <BRCLifeCycle>
{
    NSObject<OS_dispatch_queue> * _queue;
    BRCMinHeap * _minHeap;
    NSString * _name;
    NSObject<OS_dispatch_source> * _source;
    NSObject<OS_dispatch_source> * _delay;
    long long _leeway;
    long long _lastSchedule;
    char _isResumed;
    char _isCancelled;
    id _computeNextAdmissibleDateForScheduling;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (nonatomic) long long coalescingLeeway;
@property (copy, nonatomic) id computeNextAdmissibleDateForScheduling;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char isCancelled;

- (void)cancel;
- (void)dealloc;
- (void)suspend;
- (char)isCancelled;
- (void)resume;
- (void)close;
- (void).cxx_destruct;
- (void)signal;
- (BRCDeadlineScheduler *)initWithName:(NSString *)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)_close;
- (void)setIsCancelled:(char)arg0;
- (void)_schedule;
- (void)setCoalescingLeeway:(long long)arg0;
- (void)setComputeNextAdmissibleDateForScheduling:(id)arg0;
- (void)_addToken:(NSString *)arg0 deadline:(long long)arg1;
- (char)_isSleepingRequiredForDeadline:(long long)arg0 now:(long long)arg1;
- (long long)coalescingLeeway;
- (id)computeNextAdmissibleDateForScheduling;

@end
