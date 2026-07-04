/* Runtime dump - ATVShowInfoFetchKey
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRMediaType;
@interface ATVShowInfoFetchKey : NSObject
{
    NSString * _cachedItemID;
    NSString * _itemID;
    BRMediaType * _mediaType;
    ATVPodcastGUID * _podcastGUID;
    NSURL * _podcastURL;
}

@property (copy, nonatomic) NSString * itemID;
@property (retain, nonatomic) BRMediaType * mediaType;
@property (retain, nonatomic) ATVPodcastGUID * podcastGUID;
@property (retain, nonatomic) NSURL * podcastURL;

+ (NSDictionary *)fetchKeyFromEpisodeDictionary:(NSDictionary *)arg0;

- (NSURL *)podcastURL;
- (void).cxx_destruct;
- (void)setPodcastGUID:(ATVPodcastGUID *)arg0;
- (void)setPodcastURL:(NSURL *)arg0;
- (ATVPodcastGUID *)podcastGUID;
- (NSString *)itemID;
- (void)setItemID:(NSString *)arg0;
- (BRMediaType *)mediaType;
- (void)setMediaType:(BRMediaType *)arg0;

@end
