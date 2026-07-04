/* Runtime dump - ABPropertyGroupPhoneItem
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyGroupPhoneItem : ABPropertyGroupItem

@property (readonly, nonatomic) CNPhoneNumber * phoneNumber;

- (id)normalizedValue;
- (NSURL *)defaultActionURL;
- (NSString *)displayStringForValue:(id)arg0;
- (NSString *)valueForDisplayString:(NSString *)arg0;
- (NSString *)bestLabel:(NSString *)arg0;
- (CNPhoneNumber *)phoneNumber;

@end
