/* Runtime dump - ATVMusicStoreCatalogCollectionController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreCatalogItemController.h>

@class ATVFavorite, BRMediaListControl, BRMediaType;
@interface ATVMusicStoreCatalogCollectionController : ATVMusicStoreCatalogItemController
{
    BRMediaListControl * _mediaListControl;
    NSNumber * _seasonID;
    BRMediaType * _mediaType;
}

- (void)wasPushed;
- (void)controlWasActivated;
- (NSArray *)providersForContextMenu;
- (NSArray *)cancelProviderForContextMenu;
- (void)wasExhumed;
- (ATVFavorite *)_favorite;
- (NSObject *)episodeForSelectedItem;
- (char)_highlightCollectionOfferRow;
- (char)_highlightItemSelectedByUser;
- (void)_highlightFirstNonHeaderRow;
- (void)_blueDotInfoChanged;
- (void)_favoriteItemsChanged:(NSNotification *)arg0;
- (void)_podcastSubscriptionChanged;
- (void)_resetProviders;
- (void)_resetProvidersAndReloadList;
- (void)_getEpisodeForSelectedItem:(id *)arg0 andProvider:(id *)arg1;
- (NSObject *)_userSelectedItemWithListIndex:(long *)arg0;
- (void)_getBlueDotCount:(long *)arg0 nonBlueDotCount:(long *)arg1 withProvider:(NSObject *)arg2;
- (void)markSeasonAsWatched;
- (void)markSeasonAsUnwatched;
- (void)_markSelectedEpisodeAsWatched:(char)arg0;
- (NSObject *)_providerForSelectedItem;
- (void)_markAllAsWatched:(char)arg0;
- (void)relatedContentLoaded:(id)arg0;
- (void)dealloc;
- (NSString *)accessibilityLabel;
- (void).cxx_destruct;
- (void)markAsWatched;
- (void)markAsUnwatched;
- (ATVMusicStoreCatalogCollectionController *)initWithItemDictionary:(NSDictionary *)arg0;
- (NSString *)accessibilitySecondaryLabel;

@end
