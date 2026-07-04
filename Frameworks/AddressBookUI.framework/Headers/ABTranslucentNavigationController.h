/* Runtime dump - ABTranslucentNavigationController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABTranslucentNavigationController : UINavigationController
{
    char _overridesNavigationBarInset;
    <ABStyleProvider> * _styleProvider;
}

@property (nonatomic) char overridesNavigationBarInset;
@property (retain, nonatomic) <ABStyleProvider> * styleProvider;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (char)overridesNavigationBarInset;
- (void)setOverridesNavigationBarInset:(char)arg0;
- (char)_shouldNavigationBarInsetViewController:(BRController *)arg0;

@end
