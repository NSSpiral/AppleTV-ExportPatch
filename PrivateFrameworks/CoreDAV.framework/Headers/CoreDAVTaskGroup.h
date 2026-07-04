/* Runtime dump - CoreDAVTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVTaskGroup : NSObject <CoreDAVSubmittable>
{
    <CoreDAVTaskManager> * _taskManager;
    <CoreDAVAccountInfoProvider> * _accountInfoProvider;
    double _timeoutInterval;
    NSMutableSet * _outstandingTasks;
    char _isCancelling;
    char _isTearingDown;
    char _isFinished;
    <CoreDAVTaskGroupDelegate> * _delegate;
    id _progressBlock;
    id _completionBlock;
    NSError * _error;
    id _context;
}

@property (nonatomic) <CoreDAVTaskGroupDelegate> * delegate;
@property (nonatomic) double timeoutInterval;
@property (copy, nonatomic) id progressBlock;
@property (copy, nonatomic) id completionBlock;
@property (retain, nonatomic) id context;
@property (retain, nonatomic) NSError * error;
@property (nonatomic) <CoreDAVTaskManager> * taskManager;
@property (nonatomic) <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property (readonly, nonatomic) NSMutableSet * outstandingTasks;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<CoreDAVTaskGroupDelegate> *)arg0;
- (<CoreDAVTaskGroupDelegate> *)delegate;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (NSString *)context;
- (void)setContext:(NSObject *)arg0;
- (NSError *)error;
- (void)setTimeoutInterval:(double)arg0;
- (void)setAccountInfoProvider:(<CoreDAVAccountInfoProvider> *)arg0;
- (<CoreDAVAccountInfoProvider> *)accountInfoProvider;
- (CoreDAVTaskGroup *)initWithAccountInfoProvider:(<CoreDAVAccountInfoProvider> *)arg0 taskManager:(<CoreDAVTaskManager> *)arg1;
- (void)taskGroupWillCancelWithError:(NSError *)arg0;
- (void)bailWithError:(NSError *)arg0;
- (void)finishCoreDAVTaskGroupWithError:(NSError *)arg0 delegateCallbackBlock:(id /* block */)arg1;
- (void)startTaskGroup;
- (void)submitWithTaskManager:(<CoreDAVTaskManager> *)arg0;
- (void)finishEarlyWithError:(NSError *)arg0;
- (void)cancelTaskGroup;
- (void)syncAway;
- (void)_tearDownAllTasks;
- (void)finishCoreDAVTaskGroupWithError:(NSError *)arg0;
- (NSMutableSet *)outstandingTasks;
- (double)timeoutInterval;
- (<CoreDAVTaskManager> *)taskManager;
- (void)setTaskManager:(<CoreDAVTaskManager> *)arg0;
- (void)setError:(NSError *)arg0;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg0;

@end
