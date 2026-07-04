/* Runtime dump - ABPropertyGroupInstantMessageItem
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyGroupInstantMessageItem : ABPropertyGroupItem

@property (readonly, nonatomic) CNInstantMessageAddress * profile;

- (NSString *)displayLabel;
- (NSURL *)defaultActionURL;
- (NSString *)editingStringValue;
- (NSString *)displayStringForValue:(id)arg0;
- (char)isEquivalentToItem:(NSObject *)arg0;
- (NSString *)valueForDisplayString:(NSString *)arg0;
- (CNInstantMessageAddress *)profile;

@end
