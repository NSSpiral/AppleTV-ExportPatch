/* Runtime dump - SAUISirilandSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUISirilandSnippet : SAUISnippet

@property (copy, nonatomic) NSString * navigationPath;

+ (SAUISirilandSnippet *)sirilandSnippet;
+ (NSDictionary *)sirilandSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)navigationPath;
- (void)setNavigationPath:(NSString *)arg0;

@end
