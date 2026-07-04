/* Runtime dump - SBLaunchAppListener
 * Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBLaunchAppListener : NSObject
{
    NSString * _bundleIdentifier;
    id _block;
    NSLock * _lock;
    char _launched;
    int _notifyToken;
    int _notifyAppExitedToken;
    unsigned int _notifyRegisterStatus;
    unsigned int _notifyAppExitedStatus;
}

+ (char)waitForLaunchThatSpringBoardKnowsAbout:(id)arg0 timeout:(double)arg1;

- (void)dealloc;
- (void)invalidate;
- (void)_didLaunch;
- (void)_didFailToLaunch;
- (SBLaunchAppListener *)initWithBundleIdentifier:(NSString *)arg0 handlerBlock:(id /* block */)arg1;

@end
