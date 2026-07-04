/* Runtime dump - ABPropertyPickerViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyPickerViewController : ABPickerViewController <ABCardPropertyPickerDelegate>
{
    void * _addressBook;
    ABUIPerson * _person;
    struct __CFArray * _properties;
    NSArray * _policies;
}

@property (nonatomic) void * addressBook;
@property (retain, nonatomic) ABUIPerson * person;
@property (nonatomic) struct __CFArray * properties;
@property (retain, nonatomic) NSArray * policies;

- (void)propertyPicker:(ABCardPropertyPicker *)arg0 selectedProperty:(int)arg1;
- (void)propertyPicker:(ABCardPropertyPicker *)arg0 selectedProperty:(int)arg1 withDefaultValue:(NSString *)arg2;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setPolicies:(NSArray *)arg0;
- (id)propertyPicker;
- (NSArray *)policies;
- (void)setAddressBook:(void *)arg0;
- (void)dealloc;
- (ABPropertyPickerViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)_getRotationContentSettings:(struct ? *)arg0;
- (void)setProperties:(struct __CFArray *)arg0;
- (struct __CFArray *)properties;
- (ABUIPerson *)person;
- (void)setPerson:(ABUIPerson *)arg0;
- (void *)addressBook;

@end
