/* Runtime dump - TPAlertViewHelper
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPAlertViewHelper : NSObject <UIAlertViewDelegate>
{
    id _completionHandler;
    UIAlertView * _alertView;
}

@property (readonly) int firstOtherButtonIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject<OS_dispatch_queue> *)_workQueue;
+ (TPAlertViewHelper *)alertHelperWithHandler:(id /* block */)arg0 style:(/* block */ id)arg1 title:(int)arg2 message:(NSString *)arg3 cancelButtonTitle:(NSString *)arg4 otherButtonTitles:(id)arg5;
+ (NSArray *)_allHelpersArray;

- (void)show;
- (void)dealloc;
- (void)alertView:(UIAlertView *)arg0 clickedButtonAtIndex:(int)arg1;
- (int)firstOtherButtonIndex;
- (void)setCompletionHandler:(id /* block */)arg0;
- (NSString *)_initWithTitle:(NSString *)arg0 style:(int)arg1 message:(NSString *)arg2 cancelButtonTitle:(NSString *)arg3 otherButtonTitles:(id)arg4;
- (void)dismissWithClickedButtonIndexAnimated:(int)arg0;
- (void)dismissWithCancelAnimated:(char)arg0;
- (NSObject *)_underlyingAlertView;

@end
