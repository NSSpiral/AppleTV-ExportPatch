/* Runtime dump - WKProcessAssertionBackgroundTaskManager
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKProcessAssertionBackgroundTaskManager : NSObject
{
    unsigned int _needsToRunInBackgroundCount;
    char _appIsBackground;
    unsigned int _backgroundTask;
}

+ (WKProcessAssertionBackgroundTaskManager *)shared;

- (void)dealloc;
- (WKProcessAssertionBackgroundTaskManager *)init;
- (void)_applicationDidEnterBackground:(NSNotification *)arg0;
- (void)_applicationWillEnterForeground:(NSNotification *)arg0;
- (void)_updateBackgroundTask;
- (void)incrementNeedsToRunInBackgroundCount;
- (void)decrementNeedsToRunInBackgroundCount;

@end
