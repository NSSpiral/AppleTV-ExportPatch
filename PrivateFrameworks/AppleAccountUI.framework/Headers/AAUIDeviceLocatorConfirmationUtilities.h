/* Runtime dump - AAUIDeviceLocatorConfirmationUtilities
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIDeviceLocatorConfirmationUtilities : NSObject

+ (void)showDisableAlertForAccount:(NSObject *)arg0 withMessage:(NSString *)arg1 confirmationButtonTitle:(NSString *)arg2 completion:(id /* block */)arg3;
+ (void)_performFMIPAuthenticationForAccount:(NSObject *)arg0 withMessage:(NSString *)arg1 confirmationButtonTitle:(NSString *)arg2 completion:(id /* block */)arg3;
+ (void)_handleFMIPAuthenticationResponse:(NSURLResponse *)arg0 withError:(NSError *)arg1 forAccount:(NSObject *)arg2 message:(NSString *)arg3 confirmationButtonTitle:(NSString *)arg4 completion:(id /* block */)arg5;
+ (NSError *)_titleForError:(NSError *)arg0 account:(NSObject *)arg1;
+ (NSError *)_messageForError:(NSError *)arg0 account:(NSObject *)arg1;
+ (void)showEnableAlertWithCompletion:(id /* block */)arg0;
+ (void)showDisableAlertForAccount:(NSObject *)arg0 withCompletion:(id /* block */)arg1;

@end
