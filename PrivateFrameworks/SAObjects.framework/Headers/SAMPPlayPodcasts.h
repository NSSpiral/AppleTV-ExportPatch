/* Runtime dump - SAMPPlayPodcasts
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPlayPodcasts : SADomainCommand

@property (copy, nonatomic) NSString * episodePlaybackOrder;

+ (SAMPPlayPodcasts *)playPodcasts;
+ (NSDictionary *)playPodcastsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)episodePlaybackOrder;
- (void)setEpisodePlaybackOrder:(NSString *)arg0;

@end
