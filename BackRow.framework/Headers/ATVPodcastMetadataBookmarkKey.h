/* Runtime dump - ATVPodcastMetadataBookmarkKey
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVPodcastMetadataBookmarkKey : ATVPodcastBookmarkKey
{
    NSDate * _podcastDate;
    double _duration;
}

@property (retain, nonatomic) NSDate * podcastDate;
@property (nonatomic) double duration;

- (NSDate *)podcastDate;
- (void)setPodcastDate:(NSDate *)arg0;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void).cxx_destruct;

@end
