/* Runtime dump - SBKAlertDialog
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKAlertDialog : NSObject
{
    NSString * _title;
    NSString * _message;
    NSString * _cancelButtonTitle;
    id _completionHandler;
    NSString * _acceptButtonTitle;
}

@property (copy) NSString * title;
@property (copy) NSString * message;
@property (copy) NSString * cancelButtonTitle;
@property (copy) NSString * acceptButtonTitle;
@property (copy) id completionHandler;

- (void)showWithCompletionHandler:(id /* block */)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void)alertView:(UIAlertView *)arg0 clickedButtonAtIndex:(int)arg1;
- (id /* block */)completionHandler;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)setCancelButtonTitle:(NSString *)arg0;
- (void)setAcceptButtonTitle:(NSString *)arg0;
- (char)_runAsUIAlertView;
- (void)_runAsCFUserNotificationDisplayAlert;
- (NSString *)cancelButtonTitle;
- (NSString *)acceptButtonTitle;
- (SBKAlertDialog *)initWithTitle:(NSString *)arg0 message:(NSString *)arg1 cancelButtonTitle:(NSString *)arg2 acceptButtonTitle:(NSString *)arg3;

@end
