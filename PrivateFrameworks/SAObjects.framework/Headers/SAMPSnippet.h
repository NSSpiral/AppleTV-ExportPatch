/* Runtime dump - SAMPSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * items;

+ (NSString *)snippet;
+ (NSDictionary *)snippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (NSString *)encodedClassName;

@end
