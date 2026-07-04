/* Runtime dump - ABLabelPickerController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABLabelPickerController : ABPickerController
{
    ABPropertyGroupItem * _item;
}

@property (readonly, nonatomic) ABPropertyGroupItem * item;

- (ABLabelPickerController *)initForPropertyItem:(NSObject *)arg0;
- (void)removeCustomItem:(NSObject *)arg0;
- (void)dealloc;
- (ABPropertyGroupItem *)item;
- (void)viewWillAppear:(char)arg0;

@end
