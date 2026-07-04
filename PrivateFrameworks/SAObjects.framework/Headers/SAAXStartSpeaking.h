/* Runtime dump - SAAXStartSpeaking
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAXStartSpeaking : SADomainCommand

+ (SAAXStartSpeaking *)startSpeaking;
+ (NSDictionary *)startSpeakingWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
