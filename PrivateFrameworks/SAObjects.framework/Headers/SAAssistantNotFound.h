/* Runtime dump - SAAssistantNotFound
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAssistantNotFound : SABaseClientBoundCommand

+ (SAAssistantNotFound *)assistantNotFound;
+ (NSDictionary *)assistantNotFoundWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
