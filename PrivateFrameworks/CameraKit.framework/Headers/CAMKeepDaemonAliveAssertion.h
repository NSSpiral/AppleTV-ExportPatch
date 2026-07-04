/* Runtime dump - CAMKeepDaemonAliveAssertion
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMKeepDaemonAliveAssertion : NSObject
{
    NSObject<OS_xpc_object> * _keepaliveConnection;
}

+ (unsigned int)assertion;

- (void)dealloc;
- (CAMKeepDaemonAliveAssertion *)init;
- (void).cxx_destruct;
- (void)_applicationWillResignActive:(NSNotification *)arg0;
- (void)_applicationDidBecomeActive:(NSNotification *)arg0;
- (void)_tearDownConnection;
- (void)_registerForAppActiveNotifications;
- (void)_unregisterForAppActiveNotifications;
- (void)_setupHeartBeatForConnection:(NSURLConnection *)arg0;
- (void)_setupConnection;

@end
