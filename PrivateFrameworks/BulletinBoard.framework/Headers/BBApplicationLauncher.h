/* Runtime dump - BBApplicationLauncher
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBApplicationLauncher : NSObject
{
    FBSSystemService * _systemService;
    BKSApplicationStateMonitor * _appStateMonitor;
    NSMutableDictionary * _bundleIdentifierToAssertions;
}

- (void)dealloc;
- (void)_setupApplicationStateMonitor;
- (void)_applicationFinishedBackgroundNotificationAction:(NSObject *)arg0;
- (char)_launchInForegroundForBulletin:(id)arg0 response:(NSURLResponse *)arg1;
- (id)_bundleIDForBulletin:(id)arg0 response:(NSURLResponse *)arg1;
- (id)_launchOptionsForBulletin:(id)arg0 response:(NSURLResponse *)arg1;
- (NSURL *)_urlForBulletin:(id)arg0 response:(NSURLResponse *)arg1;
- (NSObject *)_newProcessAssertionForBundleID:(NSObject *)arg0;
- (void)_setProcessAssertion:(MCProcessAssertion *)arg0 forBundleID:(NSObject *)arg1;
- (void)_removeProcessAssertionForBundleID:(NSObject *)arg0 invalidate:(char)arg1;
- (void)_queue_removeProcessAssertionForBundleID:(NSObject *)arg0 invalidate:(char)arg1;
- (void)_queue_setProcessAssertion:(id)arg0 forBundleID:(NSObject *)arg1;
- (void)_queue_updateApplicationStateMonitor;
- (BBApplicationLauncher *)initWithSystemService:(FBSSystemService *)arg0;
- (void)launchApplicationForBulletin:(id)arg0 response:(NSURLResponse *)arg1;
- (char)canLaunchApplicationForBulletin:(id)arg0 response:(NSURLResponse *)arg1;

@end
