/* Runtime dump - SAUISnippetObjectInteraction
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUISnippetObjectInteraction : SAUISnippetInteraction

@property (retain, nonatomic) SADomainObject * object;

+ (SAUISnippetObjectInteraction *)snippetObjectInteraction;
+ (NSDictionary *)snippetObjectInteractionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SADomainObject *)object;
- (void)setObject:(SADomainObject *)arg0;
- (NSString *)encodedClassName;

@end
