/* Runtime dump - SASmsSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASmsSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * smss;

+ (NSString *)snippet;
+ (NSDictionary *)snippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)smss;
- (void)setSmss:(NSArray *)arg0;

@end
