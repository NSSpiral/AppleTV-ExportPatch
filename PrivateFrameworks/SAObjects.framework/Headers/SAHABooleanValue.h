/* Runtime dump - SAHABooleanValue
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHABooleanValue : SAHAAttributeValue

@property (nonatomic) char value;

+ (NSDictionary *)booleanValueWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (char)booleanValue;

- (NSString *)shortDescription;
- (NSString *)groupIdentifier;
- (char)value;
- (void)setValue:(char)arg0;
- (NSString *)encodedClassName;

@end
