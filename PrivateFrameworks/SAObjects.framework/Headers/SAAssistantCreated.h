/* Runtime dump - SAAssistantCreated
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAssistantCreated : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * assistantId;
@property (copy, nonatomic) NSString * speechId;

+ (SAAssistantCreated *)assistantCreated;
+ (NSDictionary *)assistantCreatedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)assistantId;
- (void)setAssistantId:(NSString *)arg0;
- (NSString *)speechId;
- (void)setSpeechId:(NSString *)arg0;

@end
