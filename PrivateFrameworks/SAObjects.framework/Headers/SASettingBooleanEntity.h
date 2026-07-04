/* Runtime dump - SASettingBooleanEntity
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingBooleanEntity : SASettingEntity

@property (copy, nonatomic) NSNumber * previousValue;
@property (nonatomic) char value;

+ (NSObject *)booleanEntity;
+ (NSDictionary *)booleanEntityWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (SASettingBooleanEntity *)booleanEntityWithValue:(char)arg0;

- (SASettingBooleanEntity *)initWithValue:(char)arg0;
- (NSString *)groupIdentifier;
- (char)value;
- (void)setValue:(char)arg0;
- (NSNumber *)previousValue;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (void)setPreviousValue:(NSNumber *)arg0;

@end
