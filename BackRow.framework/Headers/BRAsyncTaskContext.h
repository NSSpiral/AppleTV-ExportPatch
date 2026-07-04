/* Runtime dump - BRAsyncTaskContext
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRAsyncTaskContext : NSObject
{
    int _maxRunningTasks;
    int _numRunningTasks;
    NSMutableArray * _taskQueue;
    NSMutableArray * _allTasks;
    NSString * _name;
}

+ (void)initialize;
+ (BRAsyncTaskContext *)defaultContext;

- (BRAsyncTaskContext *)initWithMaxTasks:(int)arg0 name:(NSString *)arg1;
- (void)_taskComplete:(id)arg0;
- (void)scheduleTask:(NSObject *)arg0;
- (void)_threadDeath:(id)arg0;
- (void)_cancelAllTasks;
- (BRAsyncTaskContext *)initWithMaxTasks:(int)arg0;
- (void)_addManagerObserverForTask:(NSObject *)arg0;
- (void)_removeManagerObserverForTask:(NSObject *)arg0;
- (void)_scheduleNextTask:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)cancelTask:(NSObject *)arg0;
- (void)cancelTaskWithIdentifier:(NSString *)arg0;

@end
