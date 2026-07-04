/* Runtime dump - PLPasswordAlertView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPasswordAlertView : UIAlertView <UIAlertViewDelegate>
{
    id _completionHandler;
    UITextField * _accountTextField;
    UITextField * _passwordTextField;
    int _style;
}

@property (readonly, nonatomic) int style;
@property (copy, nonatomic) NSString * accountTextFieldPlaceholder;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)alertView:(UIAlertView *)arg0 clickedButtonAtIndex:(int)arg1;
- (int)style;
- (PLPasswordAlertView *)initWithTitle:(NSString *)arg0 message:(NSString *)arg1 delegate:(NSObject *)arg2 cancelButtonTitle:(NSString *)arg3 otherButtonTitles:(id)arg4;
- (PLPasswordAlertView *)initWithStyle:(int)arg0 title:(NSString *)arg1 message:(NSString *)arg2 completionHandler:(id /* block */)arg3;
- (PLPasswordAlertView *)initWithTitle:(NSString *)arg0 message:(NSString *)arg1 completionHandler:(id /* block */)arg2;
- (NSString *)accountTextFieldPlaceholder;
- (void)setAccountTextFieldPlaceholder:(NSString *)arg0;

@end
