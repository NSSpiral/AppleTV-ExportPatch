/* Runtime dump - SANPStartPlayback
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPStartPlayback : SADomainCommand

+ (SANPStartPlayback *)startPlayback;
+ (NSDictionary *)startPlaybackWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
