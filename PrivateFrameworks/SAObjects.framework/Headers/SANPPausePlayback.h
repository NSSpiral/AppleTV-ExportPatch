/* Runtime dump - SANPPausePlayback
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPPausePlayback : SADomainCommand

+ (SANPPausePlayback *)pausePlayback;
+ (NSDictionary *)pausePlaybackWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
