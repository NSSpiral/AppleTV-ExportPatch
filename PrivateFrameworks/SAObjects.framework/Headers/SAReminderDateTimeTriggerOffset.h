/* Runtime dump - SAReminderDateTimeTriggerOffset
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderDateTimeTriggerOffset : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * offsetTimeUnit;
@property (copy, nonatomic) NSNumber * offsetValue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSSet *)dateTimeTriggerOffset;
+ (NSDictionary *)dateTimeTriggerOffsetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)offsetTimeUnit;
- (void)setOffsetTimeUnit:(NSString *)arg0;
- (NSNumber *)offsetValue;
- (void)setOffsetValue:(NSNumber *)arg0;

@end
