/* Runtime dump - SAHAFloatValue
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAFloatValue : SAHAAttributeValue

@property (nonatomic) float value;

+ (unsigned short)floatValue;
+ (NSDictionary *)floatValueWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)shortDescription;
- (NSString *)groupIdentifier;
- (float)value;
- (void)setValue:(float)arg0;
- (NSString *)encodedClassName;

@end
