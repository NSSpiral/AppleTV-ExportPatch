/* Runtime dump - SANPStopPlayback
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPStopPlayback : SADomainCommand

+ (SANPStopPlayback *)stopPlayback;
+ (NSDictionary *)stopPlaybackWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
