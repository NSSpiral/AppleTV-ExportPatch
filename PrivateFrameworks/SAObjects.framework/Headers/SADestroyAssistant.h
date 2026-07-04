/* Runtime dump - SADestroyAssistant
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADestroyAssistant : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSString * assistantId;
@property (copy, nonatomic) NSString * speechId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SADestroyAssistant *)destroyAssistant;
+ (NSDictionary *)destroyAssistantWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)assistantId;
- (void)setAssistantId:(NSString *)arg0;
- (NSString *)speechId;
- (void)setSpeechId:(NSString *)arg0;

@end
