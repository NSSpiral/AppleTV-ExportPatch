/* Runtime dump - AXHATimer
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHATimer : NSObject
{
    char _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    char _active;
    char _accessQueueIsExternal;
    NSString * _label;
    int _state;
    AXHAAccessQueue * _accessQueue;
    NSObject<OS_dispatch_source> * _dispatchTimer;
}

@property (copy) NSString * label;
@property (nonatomic) char automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (nonatomic) char active;
@property (readonly, nonatomic) char pending;
@property (retain, nonatomic) AXHAAccessQueue * accessQueue;
@property (nonatomic) int state;
@property (nonatomic) char accessQueueIsExternal;
@property (retain, nonatomic) NSObject<OS_dispatch_source> * dispatchTimer;

+ (NSOperationQueue *)timerTargettingMainAccessQueue;

- (AXHAAccessQueue *)accessQueue;
- (void)setAccessQueue:(AXHAAccessQueue *)arg0;
- (void)cancel;
- (void)dealloc;
- (AXHATimer *)init;
- (NSString *)description;
- (int)state;
- (char)isActive;
- (void)setState:(int)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void)setActive:(char)arg0;
- (AXHATimer *)initWithTargetAccessQueue:(NSObject *)arg0;
- (void)setAccessQueueIsExternal:(char)arg0;
- (void)_reallyCancel;
- (void)afterDelay:(double)arg0 processWritingBlock:(id /* block */)arg1;
- (void)_afterDelay:(double)arg0 processBlock:(id /* block */)arg1 shouldTreatAsWritingBlock:(/* block */ id)arg2;
- (char)automaticallyCancelPendingBlockUponSchedulingNewBlock;
- (char)accessQueueIsExternal;
- (void)_didFinishProcessingBlock;
- (void)setDispatchTimer:(NSObject<OS_dispatch_source> *)arg0;
- (void)_warnAboutAsynchronousScheduling;
- (void)_performEnqueuedWritingBlock:(id /* block */)arg0 asynchronousExecutionWarningHandler:(/* block */ id)arg1;
- (void)_warnAboutAsynchronousCancelling;
- (NSObject<OS_dispatch_source> *)dispatchTimer;
- (void)afterDelay:(double)arg0 processBlock:(id /* block */)arg1;
- (void)afterDelay:(double)arg0 processReadingBlock:(id /* block */)arg1;
- (void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(char)arg0;
- (char)isPending;

@end
