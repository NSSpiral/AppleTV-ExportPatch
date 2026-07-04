/* Runtime dump - ABContactAddNewFieldAction
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactAddNewFieldAction : ABContactAction
{
    <ABContactGroupPickerDelegate> * _groupPickerDelegate;
}

@property (nonatomic) <ABContactGroupPickerDelegate> * groupPickerDelegate;

- (void)performActionWithSender:(NSObject *)arg0;
- (<ABContactGroupPickerDelegate> *)groupPickerDelegate;
- (void)setGroupPickerDelegate:(<ABContactGroupPickerDelegate> *)arg0;

@end
