/* Runtime dump - SANPIncreasePlaybackSpeed
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPIncreasePlaybackSpeed : SADomainCommand

+ (SANPIncreasePlaybackSpeed *)increasePlaybackSpeed;
+ (NSDictionary *)increasePlaybackSpeedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
