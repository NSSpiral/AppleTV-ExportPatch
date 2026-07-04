/* Runtime dump - SAAXPauseSpeaking
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAXPauseSpeaking : SADomainCommand

+ (SAAXPauseSpeaking *)pauseSpeaking;
+ (NSDictionary *)pauseSpeakingWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
