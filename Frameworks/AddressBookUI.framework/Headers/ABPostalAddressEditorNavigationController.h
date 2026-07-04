/* Runtime dump - ABPostalAddressEditorNavigationController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPostalAddressEditorNavigationController : UINavigationController
{
    <ABPostalAddressEditorDelegate> * _addressEditorDelegate;
}

@property (nonatomic) <ABPostalAddressEditorDelegate> * addressEditorDelegate;

- (<ABPostalAddressEditorDelegate> *)addressEditorDelegate;
- (ABPostalAddressEditorNavigationController *)initWithContact:(CNContact *)arg0 property:(int)arg1 editNames:(char)arg2;
- (ABPostalAddressEditorNavigationController *)initWithFirstName:(NSString *)arg0 lastName:(NSString *)arg1 addressDictionary:(NSDictionary *)arg2 label:(NSString *)arg3;
- (ABPostalAddressEditorNavigationController *)initWithProperty:(int)arg0 label:(NSString *)arg1;
- (void)setAddressEditorDelegate:(<ABPostalAddressEditorDelegate> *)arg0;
- (void)setTitle:(NSString *)arg0;

@end
