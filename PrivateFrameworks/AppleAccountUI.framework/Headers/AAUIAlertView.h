/* Runtime dump - AAUIAlertView
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIAlertView : UIAlertView
{
    NSObject<OS_dispatch_semaphore> * _buttonChosenSemaphore;
    int _chosenButtonIndex;
    id _action;
    id _actionWithText;
}

@property (readonly) int chosenButtonIndex;

- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;
- (void).cxx_destruct;
- (AAUIAlertView *)initWithTitle:(NSString *)arg0 message:(NSString *)arg1 buttonTitle:(NSString *)arg2 action:(NSObject *)arg3;
- (AAUIAlertView *)initWithTitle:(NSString *)arg0 message:(NSString *)arg1 cancelButtonTitle:(NSString *)arg2 otherButtonTitle:(NSString *)arg3;
- (AAUIAlertView *)initWithTitle:(NSString *)arg0 message:(NSString *)arg1 buttonTitle:(NSString *)arg2 otherButtonTitle:(NSString *)arg3 action:(NSObject *)arg4;
- (AAUIAlertView *)initWithTitle:(NSString *)arg0 message:(NSString *)arg1 buttonTitle:(NSString *)arg2 otherButtonTitle:(NSString *)arg3 textFieldTitle:(NSString *)arg4 action:(NSObject *)arg5;
- (int)chosenButtonIndex;

@end
