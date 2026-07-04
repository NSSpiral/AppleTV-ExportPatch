/* Runtime dump - SASettingNumericSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingNumericSnippet : SASettingSnippet

@property (nonatomic) char increment;

+ (SASettingNumericSnippet *)numericSnippet;
+ (NSDictionary *)numericSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (char)increment;
- (NSString *)encodedClassName;
- (void)setIncrement:(char)arg0;

@end
