/* Runtime dump - BRBackgroundTaskManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface BRBackgroundTaskManager : BRSingleton
{
    double _lastUserActivity;
    NSTimer * _backgroundProcessSuppressionTimer;
    NSTimer * _heavyBackgroundProcessSuppresionTimer;
}

+ (BRBackgroundTaskManager *)singleton;
+ (void)holdOffBackgroundTasks;
+ (char)okToDoBackgroundProcessing;
+ (void)setSingleton:(NSObject *)arg0;
+ (double)timeSinceLastUserAction;

- (void)_updateActivity:(id)arg0;
- (void)_holdOffBackgroundTasks;
- (char)_okToDoBackgroundProcessing;
- (double)_timeSinceLastUserAction;
- (void)_timeOrTimeZoneChangeNotification:(NSNotification *)arg0;
- (void)_sendStopBackgroundProcessingNotification;
- (void)_setOKToDoBackgroundProcessing:(id)arg0;
- (void)_holdOffHeavyBackgroundTasks;
- (void)_sendStopHeavyBackgroundProcessingNotification;
- (void)_setOKToDoHeavyBackgroundProcessing:(id)arg0;
- (void)_sendResumeBackgroundProcessingNotification;
- (void)_sendResumeHeavyBackgroundProcessingNotification;
- (void)dealloc;
- (BRBackgroundTaskManager *)init;

@end
