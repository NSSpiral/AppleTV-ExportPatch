/* Runtime dump - ATVBackgroundTaskManager
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVBackgroundTaskManager : NSObject

+ (ATVBackgroundTaskManager *)sharedInstance;

- (void)unregisterBackgroundTask:(NSObject *)arg0;
- (void)registerBackgroundTask:(NSObject *)arg0;
- (void)enableBackgroundTasksOfType:(int)arg0;
- (void)disableBackgroundTasksOfType:(int)arg0;
- (char)tasksEnabledOfType:(int)arg0;
- (void)updateTasksForTimeChange;
- (void)performFinishedForTask:(NSObject *)arg0;

@end
