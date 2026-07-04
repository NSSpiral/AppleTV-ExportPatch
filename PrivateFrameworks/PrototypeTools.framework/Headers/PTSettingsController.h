/* Runtime dump - PTSettingsController
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSettingsController : UINavigationController
{
    UIBarButtonItem * _dismissButton;
}

@property (retain, nonatomic) UIBarButtonItem * dismissButton;

- (void)pushViewController:(BRController *)arg0 animated:(char)arg1;
- (void).cxx_destruct;
- (void)_dismiss;
- (PTSettingsController *)initWithRootModuleController:(BRController *)arg0;
- (id)_defaultDismissButton;
- (void)setDismissButton:(UIBarButtonItem *)arg0;
- (PTSettingsController *)initWithRootSettings:(NSDictionary *)arg0;
- (UIBarButtonItem *)dismissButton;

@end
