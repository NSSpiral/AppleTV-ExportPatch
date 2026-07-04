/* Runtime dump - MCUserNotificationManager
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCUserNotificationManager : NSObject

@property (readonly, nonatomic) char hasOutstandingNotifications;

+ (MCUserNotificationManager *)sharedManager;

- (void)dealloc;
- (MCUserNotificationManager *)init;
- (void)mainQueueDidReceiveAppWhitelistChangedNotification;
- (void)cancelAllNotificationsCompletionBlock:(id /* block */)arg0;
- (char)hasOutstandingNotifications;
- (void)promptUserToLogIntoiTunesWithTitle:(NSString *)arg0 message:(NSString *)arg1 assertion:(unsigned int)arg2 completionBlock:(id /* block */)arg3;
- (void)inviteUserToVPPWithTitle:(NSString *)arg0 message:(NSString *)arg1 assertion:(unsigned int)arg2 completionBlock:(id /* block */)arg3;
- (void)displayUserNotificationWithTitle:(NSString *)arg0 message:(NSString *)arg1 defaultButtonText:(NSString *)arg2 alternateButtonText:(NSString *)arg3 otherButtonText:(NSString *)arg4 displayOnLockScreen:(char)arg5 displayInAppWhitelistModes:(char)arg6 dismissAfterTimeInterval:(double)arg7 assertion:(unsigned int)arg8 completionBlock:(id /* block */)arg9;

@end
