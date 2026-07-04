/* Runtime dump - SAWeatherCondition
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherCondition : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * conditionCode;
@property (nonatomic) int conditionCodeIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAWeatherCondition *)condition;
+ (NSDictionary *)conditionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)conditionCode;
- (void)setConditionCode:(NSString *)arg0;
- (int)conditionCodeIndex;
- (void)setConditionCodeIndex:(int)arg0;

@end
