/* Runtime dump - UIKeyboardScheduledTask
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardScheduledTask : NSObject
{
    id _task;
    UIKeyboardTaskQueue * _taskQueue;
    NSTimer * _timer;
    _UIActionWhenIdle * _deferredAction;
    id _enqueuedTask;
    double _timeInterval;
}

@property (readonly, nonatomic) id task;
@property (readonly, nonatomic) double timeInterval;
@property (readonly, nonatomic) char repeats;
@property (readonly, nonatomic) UIKeyboardTaskQueue * taskQueue;
@property (retain, nonatomic) NSTimer * timer;
@property (retain, nonatomic) _UIActionWhenIdle * deferredAction;
@property (copy, nonatomic) id enqueuedTask;

- (void)dealloc;
- (void)invalidate;
- (char)isValid;
- (void)timerFired:(id)arg0;
- (double)timeInterval;
- (UIKeyboardTaskQueue *)taskQueue;
- (void)resetTimer;
- (UIKeyboardScheduledTask *)initWithTaskQueue:(UIKeyboardTaskQueue *)arg0 timeInterval:(double)arg1 repeats:(char)arg2 task:(NSObject *)arg3;
- (void)setTimer:(NSTimer *)arg0;
- (NSTimer *)timer;
- (_UIActionWhenIdle *)deferredAction;
- (NSURLSessionTask *)enqueuedTask;
- (void)handleDeferredTimerFiredEvent;
- (void)setDeferredAction:(_UIActionWhenIdle *)arg0;
- (NSURLSessionTask *)task;
- (void)setEnqueuedTask:(NSObject *)arg0;
- (char)repeats;

@end
