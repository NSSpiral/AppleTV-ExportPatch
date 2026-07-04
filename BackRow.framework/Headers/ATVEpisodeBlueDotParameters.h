/* Runtime dump - ATVEpisodeBlueDotParameters
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRMediaType;
@interface ATVEpisodeBlueDotParameters : NSObject
{
    NSString * _cachedItemID;
    char _hasBeenPurchased;
    NSString * _itemID;
    NSDate * _releaseDate;
    BRMediaType * _mediaType;
    ATVPodcastGUID * _podcastGUID;
    NSURL * _podcastURL;
    double _durationHD;
    double _durationSD;
}

@property (retain, nonatomic) NSDate * releaseDate;
@property (nonatomic) double durationHD;
@property (nonatomic) double durationSD;
@property (nonatomic) char hasBeenPurchased;
@property (retain, nonatomic) BRMediaType * mediaType;
@property (copy, nonatomic) NSString * itemID;
@property (retain, nonatomic) ATVPodcastGUID * podcastGUID;
@property (retain, nonatomic) NSURL * podcastURL;

+ (ATVEpisodeBlueDotParameters *)episodeBlueDotParametersFromItemDictionary:(NSDictionary *)arg0;
+ (ATVEpisodeBlueDotParameters *)itemDictionaryPreparedForBlueDots:(id)arg0;
+ (char)_shouldPrepareItem:(NSObject *)arg0;
+ (NSObject *)_preparedItemsForItem:(NSObject *)arg0;

- (void)setDurationHD:(double)arg0;
- (void)setDurationSD:(double)arg0;
- (void)setHasBeenPurchased:(char)arg0;
- (NSString *)makeFetchKey;
- (double)durationSD;
- (double)durationHD;
- (char)hasBeenPurchased;
- (NSURL *)podcastURL;
- (char)isEqual:(NSObject *)arg0;
- (void).cxx_destruct;
- (void)setPodcastGUID:(ATVPodcastGUID *)arg0;
- (void)setPodcastURL:(NSURL *)arg0;
- (ATVPodcastGUID *)podcastGUID;
- (NSString *)itemID;
- (void)setItemID:(NSString *)arg0;
- (NSDate *)releaseDate;
- (BRMediaType *)mediaType;
- (void)setMediaType:(BRMediaType *)arg0;
- (void)setReleaseDate:(NSDate *)arg0;

@end
