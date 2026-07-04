/* Runtime dump - SAHAIntegerValue
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAIntegerValue : SAHAAttributeValue

@property (nonatomic) int value;

+ (SAHAIntegerValue *)integerValue;
+ (NSDictionary *)integerValueWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)shortDescription;
- (NSString *)groupIdentifier;
- (int)value;
- (void)setValue:(int)arg0;
- (NSString *)encodedClassName;

@end
