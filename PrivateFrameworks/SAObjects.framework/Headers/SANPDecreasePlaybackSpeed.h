/* Runtime dump - SANPDecreasePlaybackSpeed
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPDecreasePlaybackSpeed : SADomainCommand

+ (SANPDecreasePlaybackSpeed *)decreasePlaybackSpeed;
+ (NSDictionary *)decreasePlaybackSpeedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
