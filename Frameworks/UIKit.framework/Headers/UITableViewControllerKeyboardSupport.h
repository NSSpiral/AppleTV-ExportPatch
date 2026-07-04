/* Runtime dump - UITableViewControllerKeyboardSupport
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewControllerKeyboardSupport : NSObject
{
    UITableViewController * _tableViewController;
    float _adjustmentForKeyboard;
    id _viewIsDisappearing;
    id _registeredForNotifications;
}

@property (nonatomic) float adjustmentForKeyboard;
@property (nonatomic) char viewIsDisappearing;
@property (nonatomic) char registeredForNotifications;

- (void)_keyboardWillShow:(NSNotification *)arg0;
- (void)_keyboardWillHide:(NSNotification *)arg0;
- (void)setViewIsDisappearing:(char)arg0;
- (char)viewIsDisappearing;
- (void)setRegisteredForNotifications:(char)arg0;
- (char)registeredForNotifications;
- (UITableViewControllerKeyboardSupport *)initWithTableViewController:(UITableViewController *)arg0;
- (void)_keyboardDidShow:(NSNotification *)arg0;
- (void)_keyboardDidHide:(NSNotification *)arg0;
- (void)_keyboardDidChangeFrame:(NSObject *)arg0;
- (float)adjustmentForKeyboard;
- (void)setAdjustmentForKeyboard:(float)arg0;

@end
