/* Runtime dump - UIKeyboardTaskQueue
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardTaskQueue : NSObject
{
    char _executingOnMainThread;
    NSConditionLock * _lock;
    NSMutableArray * _tasks;
    NSMutableArray * _deferredTasks;
    UIKeyboardTaskExecutionContext * _executionContext;
    id _mainThreadContinuation;
}

@property (retain, nonatomic) UIKeyboardTaskExecutionContext * executionContext;

- (void)dealloc;
- (UIKeyboardTaskQueue *)init;
- (void)lock;
- (void)unlock;
- (void)performTask:(NSObject *)arg0;
- (char)isMainThreadExecutingTask;
- (void)waitUntilAllTasksAreFinished;
- (void)addTask:(NSObject *)arg0;
- (void)addDeferredTask:(NSObject *)arg0;
- (NSURLSessionTask *)scheduleTask:(NSObject *)arg0 timeInterval:(/* block */ id)arg1 repeats:(double)arg2;
- (UIKeyboardTaskExecutionContext *)executionContext;
- (void)setExecutionContext:(UIKeyboardTaskExecutionContext *)arg0;
- (void)finishExecution;
- (void)performTaskOnMainThread:(NSObject *)arg0 waitUntilDone:(/* block */ id)arg1;
- (void)continueExecutionOnMainThread;
- (char)tryLockWhenReadyForMainThread;
- (void)performDeferredTaskIfIdle;
- (void)lockWhenReadyForMainThread;
- (void)promoteDeferredTaskIfIdle;

@end
