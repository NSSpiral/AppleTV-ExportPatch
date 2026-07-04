/* Runtime dump - SAAssistantDestroyed
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAssistantDestroyed : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * assistantId;

+ (SAAssistantDestroyed *)assistantDestroyed;
+ (NSDictionary *)assistantDestroyedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)assistantId;
- (void)setAssistantId:(NSString *)arg0;

@end
