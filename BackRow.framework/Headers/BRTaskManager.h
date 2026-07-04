/* Runtime dump - BRTaskManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface BRTaskManager : BRSingleton
{
    NSMutableArray * _taskQueue;
    NSConditionLock * _queueLock;
    int _numberOfTaskThreadsRunning;
    int _numberOfFinishingThreads;
}

+ (BRTaskManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)scheduleTask:(NSObject *)arg0;
- (void)_processTasks;
- (void)dealloc;
- (BRTaskManager *)init;
- (void)cancelTask:(NSObject *)arg0;

@end
