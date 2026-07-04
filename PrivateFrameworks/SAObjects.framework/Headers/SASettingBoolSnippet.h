/* Runtime dump - SASettingBoolSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingBoolSnippet : SASettingSnippet

@property (nonatomic) char toggle;
@property (copy, nonatomic) NSNumber * value;

+ (SASettingBoolSnippet *)boolSnippet;
+ (NSDictionary *)boolSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSNumber *)value;
- (void)setValue:(NSNumber *)arg0;
- (NSString *)encodedClassName;
- (char)toggle;
- (void)setToggle:(char)arg0;

@end
