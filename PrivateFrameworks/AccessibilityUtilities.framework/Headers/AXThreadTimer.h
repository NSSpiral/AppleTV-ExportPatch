/* Runtime dump - AXThreadTimer
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXThreadTimer : NSObject <AXTimer>
{
    NSThread * _thread;
    id _cancelBlock;
    char _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    AXThreadTimerTask * _task;
}

@property (readonly, nonatomic) char cancelled;
@property (nonatomic) char automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (retain, nonatomic) AXThreadTimerTask * task;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char active;
@property (readonly, nonatomic) char pending;

- (void)setTask:(AXThreadTimerTask *)arg0;
- (void)cancel;
- (void)dealloc;
- (char)isActive;
- (char)isCancelled;
- (AXThreadTimerTask *)task;
- (char)automaticallyCancelPendingBlockUponSchedulingNewBlock;
- (void)afterDelay:(double)arg0 processBlock:(id /* block */)arg1;
- (void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(char)arg0;
- (void)afterDelay:(double)arg0 processBlock:(id /* block */)arg1 cancelBlock:(/* block */ id)arg2;
- (void)_runAfterDelay:(id)arg0;
- (AXThreadTimer *)initWithThread:(NSThread *)arg0;
- (char)isPending;

@end
