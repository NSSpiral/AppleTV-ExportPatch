/* Runtime dump - AAUserNotification
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAUserNotification : NSObject

+ (void)showUserNotificationWithTitle:(NSString *)arg0 message:(NSString *)arg1 cancelButtonTitle:(NSString *)arg2 otherButtonTitle:(NSString *)arg3 withCompletionBlock:(id /* block */)arg4;
+ (void)showUserNotificationWithTitle:(NSString *)arg0 message:(NSString *)arg1 textFieldTitle:(NSString *)arg2 cancelButtonTitle:(NSString *)arg3 otherButtonTitle:(NSString *)arg4 completion:(id /* block */)arg5;
+ (void)showUserNotificationWithTitle:(NSString *)arg0 message:(NSString *)arg1 secureTextFieldTitle:(NSString *)arg2 cancelButtonTitle:(NSString *)arg3 otherButtonTitle:(NSString *)arg4 completion:(id /* block */)arg5;

@end
