/* Runtime dump - SAAssistantNotReady
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAssistantNotReady : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * language;

+ (SAAssistantNotReady *)assistantNotReady;
+ (NSDictionary *)assistantNotReadyWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)language;
- (void)setLanguage:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
