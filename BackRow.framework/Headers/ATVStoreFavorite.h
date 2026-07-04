/* Runtime dump - ATVStoreFavorite
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFavorite.h>

@class ATVStoreFavoriteRefreshTask;
@interface ATVStoreFavorite : ATVFavorite
{
    int _itemType;
    NSString * _artworkURL;
    NSDictionary * _multiResolutionArtworkURLs;
    NSString * _thumbnailArtworkURL;
    NSDictionary * _multiResolutionThumbnailArtworkURLs;
    NSString * _latestContentURL;
    ATVStoreFavoriteRefreshTask * _refreshTask;
    unsigned int _userOrder;
    NSDate * _autoBlueDotStartDate;
    id _completionHandler;
    NSSet * _autoBlueDotSeasons;
    NSNumber * _latestSeasonID;
    NSArray * _blueDotParamsForLatestSeason;
}

@property int itemType;
@property unsigned int userOrder;

+ (ATVStoreFavorite *)lookupStoreFavoriteFromFeed:(id)arg0 initIfNotFound:(char)arg1;
+ (ATVStoreFavorite *)_artworkURLFromMultiResolutionURLs:(id)arg0 backup:(MBBackup *)arg1;
+ (NSDictionary *)lookupStoreFavoriteFromATVFeedDictionary:(NSDictionary *)arg0 initIfNotFound:(char)arg1;

- (void)encodeWithDictionary:(NSDictionary *)arg0;
- (ATVStoreFavorite *)initWithCatalogItem:(NSDictionary *)arg0;
- (NSString *)artworkURLString;
- (NSString *)thumbnailArtworkURLString;
- (void)setUserOrder:(unsigned int)arg0;
- (void)refreshStoreData:(NSData *)arg0;
- (ATVStoreFavorite *)initWithATVFeedDictionary:(NSDictionary *)arg0;
- (char)_setupWithCatalogItem:(NSDictionary *)arg0;
- (void)_cancelRefreshBackgroundTask;
- (void)_setupRefreshBackgroundTask;
- (void)didCompleteRefreshStoreDataAttempt;
- (NSNumber *)latestSeasonID;
- (id)episodeBlueDotParametersForLatestSeason;
- (NSString *)latestContentURLString;
- (NSDate *)autoBlueDotStartDate;
- (NSSet *)autoBlueDotSeasons;
- (unsigned int)userOrder;
- (void)updateWithPageDictionaryFromLatestSeason:(id)arg0;
- (id)_dateOfMostRecentEpisodeWithBlueDot;
- (void)save;
- (void)dealloc;
- (ATVStoreFavorite *)initWithDictionary:(NSDictionary *)arg0;
- (void)remove;
- (void)setItemType:(int)arg0;
- (int)itemType;

@end
