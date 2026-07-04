/* Runtime dump - SAHAStringValue
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAStringValue : SAHAAttributeValue

@property (copy, nonatomic) NSString * value;

+ (NSString *)stringValue;
+ (NSDictionary *)stringValueWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)shortDescription;
- (NSString *)groupIdentifier;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (NSString *)encodedClassName;

@end
