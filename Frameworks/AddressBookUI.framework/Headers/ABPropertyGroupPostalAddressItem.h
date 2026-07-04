/* Runtime dump - ABPropertyGroupPostalAddressItem
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyGroupPostalAddressItem : ABPropertyGroupItem

@property (readonly, nonatomic) CNPostalAddress * address;

- (char)isEquivalentToItem:(NSObject *)arg0 whenEditing:(char)arg1;
- (id)normalizedValue;
- (NSURL *)defaultActionURL;
- (NSString *)displayStringForValue:(id)arg0;
- (id)bestValue:(id)arg0;
- (char)_isMinimalAddress:(NSString *)arg0;
- (CNPostalAddress *)address;

@end
