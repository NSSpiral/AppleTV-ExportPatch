/* Runtime dump - SASettingFloatEntity
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingFloatEntity : SASettingNumericEntity

@property (copy, nonatomic) NSNumber * previousValue;
@property (nonatomic) float value;

+ (NSObject *)floatEntity;
+ (NSDictionary *)floatEntityWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (SASettingFloatEntity *)floatEntityWithValue:(float)arg0;

- (SASettingFloatEntity *)initWithValue:(float)arg0;
- (NSString *)groupIdentifier;
- (float)value;
- (void)setValue:(float)arg0;
- (NSNumber *)previousValue;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (void)setPreviousValue:(NSNumber *)arg0;

@end
