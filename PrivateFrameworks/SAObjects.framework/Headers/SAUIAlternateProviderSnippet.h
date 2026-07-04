/* Runtime dump - SAUIAlternateProviderSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAlternateProviderSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * alternateProviderResults;
@property (copy, nonatomic) NSString * title;

+ (SAUIAlternateProviderSnippet *)alternateProviderSnippet;
+ (NSDictionary *)alternateProviderSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)encodedClassName;
- (NSArray *)alternateProviderResults;
- (void)setAlternateProviderResults:(NSArray *)arg0;

@end
