/* Runtime dump - SAGetAssistantData
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGetAssistantData : SABaseClientBoundCommand

+ (NSData *)getAssistantData;
+ (NSDictionary *)getAssistantDataWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
