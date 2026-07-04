/* Runtime dump - SAMicroblogSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * microblogs;

+ (NSString *)snippet;
+ (NSDictionary *)snippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)microblogs;
- (void)setMicroblogs:(NSArray *)arg0;

@end
