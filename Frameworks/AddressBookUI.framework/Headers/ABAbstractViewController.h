/* Runtime dump - ABAbstractViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABAbstractViewController : UITableViewController
{
    ABModel * _model;
    <ABStyleProvider> * _styleProvider;
}

@property (retain, nonatomic) ABModel * model;
@property (retain, nonatomic) <ABStyleProvider> * styleProvider;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (ABPeoplePickerNavigationController *)peoplePickerNavigationController;
- (void)updateNavigationButtons;
- (char)supportedInterfaceOrientation:(int)arg0;
- (void)setAddressBook:(void *)arg0;
- (void)dealloc;
- (struct CGSize)contentSize;
- (ABAbstractViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)setParentViewController:(BRController *)arg0;
- (char)_allowsAutorotation;
- (void)_getRotationContentSettings:(struct ? *)arg0;
- (ABModel *)model;
- (ABAbstractViewController *)initWithModel:(ABModel *)arg0;
- (void)setModel:(ABModel *)arg0;
- (int)behavior;

@end
