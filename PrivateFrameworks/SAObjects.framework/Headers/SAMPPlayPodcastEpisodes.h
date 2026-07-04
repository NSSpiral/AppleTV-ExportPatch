/* Runtime dump - SAMPPlayPodcastEpisodes
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPlayPodcastEpisodes : SADomainCommand

@property (copy, nonatomic) NSString * episodePlaybackOrder;
@property (retain, nonatomic) SAMPPodcast * podcast;

+ (NSArray *)playPodcastEpisodes;
+ (NSDictionary *)playPodcastEpisodesWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setPodcast:(SAMPPodcast *)arg0;
- (SAMPPodcast *)podcast;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)episodePlaybackOrder;
- (void)setEpisodePlaybackOrder:(NSString *)arg0;

@end
