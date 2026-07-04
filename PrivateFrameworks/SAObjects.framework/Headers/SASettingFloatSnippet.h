/* Runtime dump - SASettingFloatSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingFloatSnippet : SASettingNumericSnippet

@property (copy, nonatomic) NSNumber * value;

+ (SASettingFloatSnippet *)floatSnippet;
+ (NSDictionary *)floatSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSNumber *)value;
- (void)setValue:(NSNumber *)arg0;
- (NSString *)encodedClassName;

@end
