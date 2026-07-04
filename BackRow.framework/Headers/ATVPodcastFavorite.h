/* Runtime dump - ATVPodcastFavorite
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVStoreFavorite.h>
@interface ATVPodcastFavorite : ATVStoreFavorite
{
    NSURL * _podcastFeedURL;
    NSArray * _childrenBookmarkKeys;
    NSNumber * _itemIDNumber;
}

+ (ATVPodcastFavorite *)podcastFavoriteWithCatalogItem:(NSDictionary *)arg0;
+ (void)_clearPodcastFavoriteCache;
+ (NSObject *)_podcastReleaseDateFormatter;
+ (NSObject *)_noStyleNumberFormatter;
+ (void)initialize;

- (char)isSaved;
- (ATVPodcastFavorite *)initWithCatalogItem:(NSDictionary *)arg0;
- (int)redDotCount;
- (void)_cancelRefreshBackgroundTask;
- (void)_setupRefreshBackgroundTask;
- (NSDate *)autoBlueDotStartDate;
- (void)updateWithPageDictionaryFromLatestSeason:(id)arg0;
- (ATVPodcastFavorite *)initWithStoreItem:(NSObject *)arg0;
- (NSObject *)_childrenKeysForStoreItem:(NSObject *)arg0;
- (void)save;
- (NSString *)description;
- (void)remove;
- (void).cxx_destruct;
- (NSURL *)podcastFeedURL;
- (SACalendar *)dateAdded;

@end
