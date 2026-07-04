/* Runtime dump - ATVPodcastBookmarkKey
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVPodcastBookmarkKey : ATVBookmarkKey
{
    ATVPodcastGUID * _podcastEpisodeGUID;
    NSURL * _podcastFeedURL;
}

@property (readonly, nonatomic) ATVPodcastGUID * podcastEpisodeGUID;
@property (readonly, nonatomic) NSURL * podcastFeedURL;

+ (NSURL *)podcastIdentifierWithURL:(NSURL *)arg0 guid:(NSString *)arg1 defaultIdentifer:(id)arg2;

- (NSString *)description;
- (void).cxx_destruct;
- (ATVPodcastBookmarkKey *)initWithIdentifier:(NSString *)arg0 podcastEpisodeGUID:(ATVPodcastGUID *)arg1 podcastFeedURL:(NSURL *)arg2;
- (ATVPodcastGUID *)podcastEpisodeGUID;
- (NSURL *)podcastFeedURL;

@end
