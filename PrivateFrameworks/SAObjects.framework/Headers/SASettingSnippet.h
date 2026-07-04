/* Runtime dump - SASettingSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * settingKeys;

+ (NSString *)snippet;
+ (NSDictionary *)snippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)settingKeys;
- (void)setSettingKeys:(NSArray *)arg0;

@end
