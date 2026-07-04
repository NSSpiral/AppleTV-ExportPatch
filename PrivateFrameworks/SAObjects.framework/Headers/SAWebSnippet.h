/* Runtime dump - SAWebSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * webSearch;

+ (NSString *)snippet;
+ (NSDictionary *)snippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)webSearch;
- (void)setWebSearch:(NSArray *)arg0;

@end
