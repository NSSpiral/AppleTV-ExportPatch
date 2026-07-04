/* Runtime dump - SAABPersonSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAABPersonSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * displayProperties;
@property (copy, nonatomic) NSArray * persons;

+ (SAABPersonSnippet *)personSnippet;
+ (NSDictionary *)personSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)displayProperties;
- (void)setDisplayProperties:(NSArray *)arg0;
- (NSArray *)persons;
- (void)setPersons:(NSArray *)arg0;

@end
