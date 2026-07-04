/* Runtime dump - SAUISnippetInteraction
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUISnippetInteraction : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSString * requestId;
@property (copy, nonatomic) NSString * snippetId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAUISnippetInteraction *)snippetInteraction;
+ (NSDictionary *)snippetInteractionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)requestId;
- (void)setRequestId:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSString *)snippetId;
- (void)setSnippetId:(NSString *)arg0;

@end
