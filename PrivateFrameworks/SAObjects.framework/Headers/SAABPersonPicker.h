/* Runtime dump - SAABPersonPicker
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAABPersonPicker : SAUIDomainObjectPicker

@property (copy, nonatomic) NSArray * persons;
@property (nonatomic) char showImmediately;

+ (SAABPersonPicker *)personPicker;
+ (NSDictionary *)personPickerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)persons;
- (void)setPersons:(NSArray *)arg0;
- (char)showImmediately;
- (void)setShowImmediately:(char)arg0;

@end
