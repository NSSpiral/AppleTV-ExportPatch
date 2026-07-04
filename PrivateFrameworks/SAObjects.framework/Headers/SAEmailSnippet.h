/* Runtime dump - SAEmailSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAEmailSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * emails;

+ (NSString *)snippet;
+ (NSDictionary *)snippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)emails;
- (void)setEmails:(NSArray *)arg0;
- (NSString *)encodedClassName;

@end
