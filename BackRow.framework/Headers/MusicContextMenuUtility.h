/* Runtime dump - MusicContextMenuUtility
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMusicContextMenuUtility.h>

@class BRControl, BRController;
@interface MusicContextMenuUtility : BRMusicContextMenuUtility
{
    char _nowPlayingActive;
}

@property (nonatomic) char nowPlayingActive;

+ (char)hasSelectedAdditionalAlbumOfferItem;
+ (void)setHasSelectedAdditionalAlbumOfferItem:(char)arg0;
+ (void)initialize;

- (id /* <BRProvider> */)contextMenuProviderForObject:(NSObject *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2;
- (void)handleSelectionForObject:(NSObject *)arg0 sender:(BRControl *)arg1 context:(BRController *)arg2;
- (void)_handleStartGeniusForObject:(NSObject *)arg0 sender:(NSObject *)arg1 context:(NSObject *)arg2;
- (void)_handleAddToOnTheGoForObject:(NSObject *)arg0 sender:(NSObject *)arg1 context:(NSObject *)arg2;
- (void)_handleAirTunesSettingsForObject:(NSObject *)arg0 sender:(NSObject *)arg1 context:(NSObject *)arg2;
- (void)_handleBrowseArtistForObject:(NSObject *)arg0 sender:(NSObject *)arg1 context:(NSObject *)arg2;
- (void)_handleBrowseAlbumForObject:(NSObject *)arg0 sender:(NSObject *)arg1 context:(NSObject *)arg2;
- (void)_handleAddRadioStationToFavoritesForObject:(NSObject *)arg0 sender:(NSObject *)arg1 context:(NSObject *)arg2;
- (void)_handleRemoveRadioStationFromFavoritesForObject:(NSObject *)arg0 sender:(NSObject *)arg1 context:(NSObject *)arg2;
- (void)_handleAirTunesSetSpeakerForObject:(NSObject *)arg0 sender:(NSObject *)arg1 context:(NSObject *)arg2;
- (void)_handleBuyRadioTrack:(NSObject *)arg0 sender:(NSObject *)arg1 context:(NSObject *)arg2;
- (void)_handleAdditionalAlbumOfferForRadioTrack:(NSObject *)arg0 sender:(NSObject *)arg1 context:(NSObject *)arg2;
- (void)_handleCreateRadioStationForObject:(NSObject *)arg0 sender:(NSObject *)arg1 context:(NSObject *)arg2;
- (void)_handleAddRemoveToWishlistForObject:(NSObject *)arg0 sender:(NSObject *)arg1 context:(NSObject *)arg2;
- (void)_handleViewAlbumForObject:(NSObject *)arg0 sender:(NSObject *)arg1 context:(NSObject *)arg2;
- (NSObject *)_providerForMediaItem:(NSObject *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2;
- (id)_providerForCollection:(id)arg0 target:(NSObject *)arg1 selector:(SEL)arg2;
- (id)_providerForPodcast:(id)arg0 target:(NSObject *)arg1 selector:(SEL)arg2;
- (id)_providerForFavorite:(id)arg0 target:(NSObject *)arg1 selector:(SEL)arg2;
- (void)setNowPlayingActive:(char)arg0;
- (char)_shouldShowGeniusItem:(NSObject *)arg0;
- (NSObject *)geniusMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (char)_shouldShowUpNextItem:(NSObject *)arg0;
- (NSObject *)upNextMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (char)_shouldShowPlayItemNow:(id)arg0;
- (NSObject *)playNowMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (char)_shouldShowPlayItemNext:(id)arg0;
- (NSObject *)playNextMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (char)_shouldShowAddItemToQueue:(NSObject *)arg0;
- (NSObject *)addToQueueMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (char)_shouldShowPurge:(id)arg0;
- (NSObject *)purgeMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (char)_shouldShowAddToFavoritesItem:(NSObject *)arg0;
- (char)_shouldShowRemoveFromFavoritesItem:(NSObject *)arg0;
- (char)_shouldShowAddToWishlistForItem:(NSObject *)arg0;
- (char)_shouldShowRemoveFromWishlistForItem:(NSObject *)arg0;
- (char)_shouldShowCreateStationFromItem:(NSObject *)arg0;
- (char)_shouldShowBrowseArtistItem:(NSObject *)arg0;
- (NSObject *)browseArtistMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (char)_shouldShowBrowseAlbumItem:(NSObject *)arg0;
- (NSObject *)browseAlbumMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (char)_shouldShowViewAlbumItem:(NSObject *)arg0;
- (char)_shouldShowBuyRadioTrackItem:(NSObject *)arg0;
- (char)_shouldShowAdditionalAlbumOfferForRadioTrackItem:(NSObject *)arg0;
- (char)_shouldShowSpeakersItem:(NSObject *)arg0;
- (char)_shouldShowOnTheGoItem:(NSObject *)arg0;
- (char)_shouldShowUpNextItemForCollection:(id)arg0;
- (char)_shouldShowPlayCollectionNext:(id)arg0;
- (char)_shouldShowPlayCollectionNow:(id)arg0;
- (char)_shouldShowAddCollectionToQueue:(NSObject *)arg0;
- (char)_shouldShowSpeakers;
- (char)_favoriteExists:(id)arg0;
- (id)_providerForSpeakersWithHandler:(<BRSelectionHandler> *)arg0 initialSelection:(long *)arg1;
- (char)_isMusicItem:(NSObject *)arg0;
- (char)_shouldShowUpNext;
- (char)nowPlayingActive;
- (id /* <BRProvider> */)contextMenuProviderForNowPlayingObject:(NSObject *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2;

@end
