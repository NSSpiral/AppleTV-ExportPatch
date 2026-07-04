/* Runtime dump - SAMPPlayPodcastStation
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPlayPodcastStation : SADomainCommand

@property (retain, nonatomic) SAMPPodcast * station;

+ (SAMPPlayPodcastStation *)playPodcastStation;
+ (NSDictionary *)playPodcastStationWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SAMPPodcast *)station;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (void)setStation:(SAMPPodcast *)arg0;

@end
