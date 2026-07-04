/* Runtime dump - SAUIDomainObjectPickerSelection
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIDomainObjectPickerSelection : SAStartRequest

@property (retain, nonatomic) SAUIDomainObjectPicker * domainObjectPicker;
@property (retain, nonatomic) SADomainObject * selectedItem;

+ (SAUIDomainObjectPickerSelection *)domainObjectPickerSelection;
+ (NSDictionary *)domainObjectPickerSelectionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setSelectedItem:(SADomainObject *)arg0;
- (SADomainObject *)selectedItem;
- (NSString *)encodedClassName;
- (SAUIDomainObjectPicker *)domainObjectPicker;
- (void)setDomainObjectPicker:(SAUIDomainObjectPicker *)arg0;

@end
