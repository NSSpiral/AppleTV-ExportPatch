/* Runtime dump - MPPasswordAlertView
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPasswordAlertView : UIAlertView <UIAlertViewDelegate>
{
    id _completionHandler;
    int _style;
    UITextField * _passwordTextField;
}

@property (readonly, nonatomic) int style;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (MPPasswordAlertView *)initWithStyle:(int)arg0 routeName:(NSString *)arg1 completionHandler:(id /* block */)arg2;
- (void)alertView:(UIAlertView *)arg0 clickedButtonAtIndex:(int)arg1;
- (int)style;
- (MPPasswordAlertView *)initWithTitle:(NSString *)arg0 message:(NSString *)arg1 delegate:(NSObject *)arg2 cancelButtonTitle:(NSString *)arg3 otherButtonTitles:(id)arg4;
- (void).cxx_destruct;

@end
