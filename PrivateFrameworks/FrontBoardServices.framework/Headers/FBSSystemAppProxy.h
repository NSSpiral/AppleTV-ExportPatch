/* Runtime dump - FBSSystemAppProxy
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSystemAppProxy : BSBaseXPCClient
{
    char _uiApplicationClient;
}

@property char uiApplicationClient;

+ (FBSSystemAppProxy *)sharedInstance;

- (FBSSystemAppProxy *)initWithEndpoint:(NSString *)arg0;
- (void)openURL:(NSURL *)arg0 application:(NSString *)arg1 options:(NSDictionary *)arg2 clientPort:(unsigned int)arg3 withResult:(NSObject *)arg4;
- (void)openApplication:(id)arg0 options:(NSDictionary *)arg1 clientPort:(unsigned int)arg2 withResult:(NSObject *)arg3;
- (FBSSystemAppProxy *)init;
- (void)invalidate;
- (void)shutdownAndReboot:(char)arg0;
- (void)queue_connectionWasCreated;
- (void)setBadgeValue:(NSString *)arg0 forBundleID:(NSObject *)arg1;
- (void)canActivateApplication:(id)arg0 withResult:(NSObject *)arg1;
- (void)checkInUIApplication;
- (void)badgeValueForBundleID:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)setNextWakeInterval:(double)arg0 completion:(id /* block */)arg1;
- (void)applicationBundleID:(NSString *)arg0 requestBrightness:(float)arg1 completion:(id /* block */)arg2;
- (void)systemApplicationBundleIdentifierWithResult:(NSObject *)arg0;
- (void)pidForApplication:(id)arg0 withResult:(NSObject *)arg1;
- (void)terminateApplication:(id)arg0 forReason:(int)arg1 andReport:(char)arg2 withDescription:(NSString *)arg3 withResult:(NSObject *)arg4;
- (void)terminateApplicationGroup:(int)arg0 forReason:(int)arg1 andReport:(char)arg2 withDescription:(NSString *)arg3 withResult:(NSObject *)arg4;
- (void)fireCompletion:(id /* block */)arg0 error:(/* block */ id)arg1;
- (void)setUIApplicationClient:(char)arg0;
- (void)_sendMessageType:(int)arg0 withMessage:(NSString *)arg1 withReplyHandler:(/* block */ id)arg2 waitForReply:(id /* block */)arg3;
- (void)fireCompletion:(id /* block */)arg0 bundleIDResult:(/* block */ id)arg1 error:(NSError *)arg2;
- (void)fireCompletion:(id /* block */)arg0 pidResult:(/* block */ id)arg1 error:(int)arg2;
- (void)fireCompletion:(id /* block */)arg0 openAppErrorCode:(/* block */ id)arg1;
- (char)isClientLoggingEnabled;
- (char)isUIApplicationClient;
- (NSObject<OS_dispatch_queue> *)clientCallbackQueue;
- (void)sendActions:(id)arg0 withResult:(NSObject *)arg1;

@end
