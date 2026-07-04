/* Runtime dump - ABPersonViewControllerHelperNavigationController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonViewControllerHelperNavigationController : UINavigationController
{
    ABUnknownPersonViewController * _unknownPersonViewController;
}

- (ABPersonViewControllerHelperNavigationController *)initWithRootViewController:(UIView *)arg0 unknownPersonViewController:(ABUnknownPersonViewController *)arg1;
- (void)dealloc;
- (void)encodeRestorableStateWithCoder:(NSCoder *)arg0;
- (void)decodeRestorableStateWithCoder:(NSCoder *)arg0;

@end
