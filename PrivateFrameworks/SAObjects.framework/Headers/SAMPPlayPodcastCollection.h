/* Runtime dump - SAMPPlayPodcastCollection
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPlayPodcastCollection : SADomainCommand

@property (copy, nonatomic) NSString * episodePlaybackOrder;
@property (retain, nonatomic) SAMPPodcastCollection * podcastCollection;

+ (SAMPPlayPodcastCollection *)playPodcastCollection;
+ (NSDictionary *)playPodcastCollectionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)episodePlaybackOrder;
- (void)setEpisodePlaybackOrder:(NSString *)arg0;
- (SAMPPodcastCollection *)podcastCollection;
- (void)setPodcastCollection:(SAMPPodcastCollection *)arg0;

@end
