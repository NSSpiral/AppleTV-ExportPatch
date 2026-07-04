/* Runtime dump - SAUISnippetAttributeOpened
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUISnippetAttributeOpened : SAUISnippetInteraction

@property (copy, nonatomic) NSString * attributeName;
@property (copy, nonatomic) NSString * attributeValue;

+ (SAUISnippetAttributeOpened *)snippetAttributeOpened;
+ (NSDictionary *)snippetAttributeOpenedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)attributeName;
- (void)setAttributeName:(NSString *)arg0;
- (NSString *)attributeValue;
- (void)setAttributeValue:(NSString *)arg0;

@end
