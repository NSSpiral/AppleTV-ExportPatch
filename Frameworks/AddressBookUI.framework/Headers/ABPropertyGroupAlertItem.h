/* Runtime dump - ABPropertyGroupAlertItem
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyGroupAlertItem : ABPropertyGroupItem

@property (readonly, nonatomic) char tone;
@property (readonly, nonatomic) char vibration;

- (char)isEquivalentToItem:(NSObject *)arg0 whenEditing:(char)arg1;
- (NSString *)displayLabel;
- (char)canRemove;
- (char)isValidValue:(id)arg0;
- (char)isTone;
- (char)isVibration;
- (NSString *)displayStringForValue:(id)arg0;
- (NSObject *)_toneManager;
- (NSObject *)_vibrationManager;
- (NSString *)description;

@end
