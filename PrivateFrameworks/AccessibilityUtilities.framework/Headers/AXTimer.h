/* Runtime dump - AXTimer
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXTimer : NSObject <AXTimer>
{
    char _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    char _active;
    char _accessQueueIsExternal;
    NSString * _label;
    int _state;
    AXAccessQueue * _accessQueue;
    NSObject<OS_dispatch_source> * _dispatchTimer;
}

@property (copy) NSString * label;
@property (nonatomic) char automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (nonatomic) char active;
@property (nonatomic) int state;
@property (retain, nonatomic) AXAccessQueue * accessQueue;
@property (nonatomic) char accessQueueIsExternal;
@property (retain, nonatomic) NSObject<OS_dispatch_source> * dispatchTimer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char pending;

+ (void)initialize;
+ (NSOperationQueue *)timerTargettingMainAccessQueue;

- (AXAccessQueue *)accessQueue;
- (void)setAccessQueue:(AXAccessQueue *)arg0;
- (void)cancel;
- (void)dealloc;
- (AXTimer *)init;
- (NSString *)description;
- (int)state;
- (char)isActive;
- (void)setState:(int)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void)setActive:(char)arg0;
- (AXTimer *)initWithTargetAccessQueue:(NSObject *)arg0;
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
