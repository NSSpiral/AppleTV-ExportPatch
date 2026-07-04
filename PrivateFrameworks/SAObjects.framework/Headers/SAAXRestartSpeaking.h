/* Runtime dump - SAAXRestartSpeaking
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAXRestartSpeaking : SADomainCommand

+ (SAAXRestartSpeaking *)restartSpeaking;
+ (NSDictionary *)restartSpeakingWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
