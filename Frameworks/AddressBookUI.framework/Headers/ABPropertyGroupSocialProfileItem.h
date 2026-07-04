/* Runtime dump - ABPropertyGroupSocialProfileItem
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyGroupSocialProfileItem : ABPropertyGroupItem

@property (readonly, nonatomic) CNSocialProfile * profile;

- (NSString *)displayLabel;
- (NSURL *)defaultActionURL;
- (NSString *)editingStringValue;
- (NSString *)displayStringForValue:(id)arg0;
- (char)isEquivalentToItem:(NSObject *)arg0;
- (NSString *)valueForDisplayString:(NSString *)arg0;
- (CNSocialProfile *)profile;

@end
