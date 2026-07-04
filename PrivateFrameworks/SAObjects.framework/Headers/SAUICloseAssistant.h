/* Runtime dump - SAUICloseAssistant
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUICloseAssistant : SABaseClientBoundCommand

+ (SAUICloseAssistant *)closeAssistant;
+ (NSDictionary *)closeAssistantWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
