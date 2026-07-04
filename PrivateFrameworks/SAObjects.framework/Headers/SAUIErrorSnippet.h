/* Runtime dump - SAUIErrorSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIErrorSnippet : SAUISnippet

@property (copy, nonatomic) NSString * message;

+ (SAUIErrorSnippet *)errorSnippet;
+ (NSDictionary *)errorSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (NSString *)encodedClassName;

@end
