/* Runtime dump - WLKBasicEpisodeMetadata
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/WLKBasicContentMetadata.h>

@class WLKPlayable, WLKShowContentRating;
@interface WLKBasicEpisodeMetadata : WLKBasicContentMetadata
{
    NSString * _showTitle;
    NSString * _canonicalShowID;
    NSString * _canonicalSeasonID;
    NSNumber * _seasonNumber;
    NSNumber * _episodeNumber;
    NSDate * _releaseDate;
    WLKShowContentRating * _contentRating;
    WLKPlayable * _playable;
    double _duration;
}

@property (readonly, copy, nonatomic) NSString * showTitle;
@property (readonly, copy, nonatomic) NSString * canonicalShowID;
@property (readonly, copy, nonatomic) NSString * canonicalSeasonID;
@property (readonly, nonatomic) NSNumber * seasonNumber;
@property (readonly, nonatomic) NSNumber * episodeNumber;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSDate * releaseDate;
@property (readonly, nonatomic) WLKShowContentRating * contentRating;
@property (readonly, nonatomic) WLKPlayable * playable;

+ (WLKBasicEpisodeMetadata *)episodesWithDictionaries:(id)arg0;

- (NSNumber *)episodeNumber;
- (WLKPlayable *)playable;
- (NSString *)showTitle;
- (NSString *)canonicalShowID;
- (NSString *)canonicalSeasonID;
- (WLKBasicEpisodeMetadata *)initWithDictionary:(NSDictionary *)arg0;
- (double)duration;
- (void).cxx_destruct;
- (NSNumber *)seasonNumber;
- (WLKShowContentRating *)contentRating;
- (NSDate *)releaseDate;

@end
