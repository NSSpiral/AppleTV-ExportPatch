/* Runtime dump - ATVMusicStoreItemProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;

@class ATVWishListFavorite;
@interface ATVMusicStoreItemProvider : NSObject <BRProvider>
{
    NSDictionary * _catalogItem;
    NSMutableArray * _items;
    NSMutableArray * _filteredItems;
    char _reverseOrder;
    char _isAnyItemBlueDotted;
    NSMutableDictionary * _watchedStatesForItems;
    NSMutableDictionary * _cachedBlueDotParams;
    char _showAllPodcastEpisodes;
}

@property (nonatomic) char showAllPodcastEpisodes;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)providerWithCatalogItem:(NSDictionary *)arg0;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (ATVMusicStoreItemProvider *)initWithCatalogItem:(NSDictionary *)arg0;
- (void)setOrderReversed:(char)arg0;
- (void)setShowAllPodcastEpisodes:(char)arg0;
- (void)registerMoreItem;
- (void)_resetBlueDottedItems;
- (void)_showAllPodcastNotification:(NSNotification *)arg0;
- (NSObject *)_cachedBlueDotParamsForItem:(NSObject *)arg0;
- (NSObject *)_itemsForShowAllState;
- (NSObject *)_augmentCollectionItem:(NSObject *)arg0 atIndex:(long)arg1;
- (void)moreItemSelected:(id)arg0;
- (void)loadSupplementalItemsFromURL:(NSURL *)arg0;
- (void)supplementalItemsLoaded:(id)arg0;
- (char)_showAllEpisodes;
- (char)showAllPodcastEpisodes;
- (void)_checkForBlueDottedItems;
- (int)_watchedStateForItem:(NSObject *)arg0 favorite:(ATVWishListFavorite *)arg1;
- (char)isOrderReversed;
- (void)dealloc;
- (void)reset;
- (NSString *)accessibilityLabel;
- (void).cxx_destruct;
- (NSObject *)dataAtIndex:(long)arg0;

@end
