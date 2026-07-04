/* Runtime dump - BRMusicContextMenuUtility
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRContextMenuUtility;

@class BRControl, BRController;
@interface BRMusicContextMenuUtility : NSObject <BRContextMenuUtility>
{
    char _onTheGoEnabled;
    char _startGeniusEnabled;
    char _airTunesSettingsEnabled;
    char _browseArtistEnabled;
    char _browseAlbumEnabled;
    char _navigateToArtistForBrowseArtist;
    char _navigateToAlbumForBrowseAlbum;
    char _storeViewAlbumEnabled;
    char _addRemoveToWishListEnabled;
    char _buyRadioTrackEnabled;
    char _createStationEnabled;
}

@property (nonatomic) char storeViewAlbumEnabled;
@property (nonatomic) char addRemoveToWishListEnabled;
@property (nonatomic) char buyRadioTrackEnabled;
@property (nonatomic) char createStationEnabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRMusicContextMenuUtility *)utility;

- (void)setOnTheGoEnabled:(char)arg0;
- (void)setStartGeniusEnabled:(char)arg0;
- (void)setAirTunesSettingsEnabled:(char)arg0;
- (void)setBrowseArtistEnabled:(char)arg0;
- (void)setBrowseAlbumEnabled:(char)arg0;
- (void)setAddRemoveToWishListEnabled:(char)arg0;
- (void)setStoreViewAlbumEnabled:(char)arg0;
- (id /* <BRProvider> */)contextMenuProviderForObject:(NSObject *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2;
- (void)handleSelectionForObject:(NSObject *)arg0 sender:(BRControl *)arg1 context:(BRController *)arg2;
- (char)airTunesSettingsEnabled;
- (NSObject *)geniusMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (NSObject *)upNextMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (NSObject *)playNowMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (NSObject *)playNextMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (NSObject *)addToQueueMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (NSObject *)purgeMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (NSObject *)browseArtistMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (NSObject *)browseAlbumMenuItemWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (char)buyRadioTrackEnabled;
- (char)startGeniusEnabled;
- (char)onTheGoEnabled;
- (char)browseArtistEnabled;
- (char)browseAlbumEnabled;
- (char)storeViewAlbumEnabled;
- (char)createStationEnabled;
- (char)addRemoveToWishListEnabled;
- (id /* <BRProvider> */)contextMenuProviderForNowPlayingObject:(NSObject *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2;
- (void)setBuyRadioTrackEnabled:(char)arg0;
- (void)setCreateStationEnabled:(char)arg0;
- (void)setNavigateToArtistForBrowseArtist:(char)arg0;
- (void)setNavigateToAlbumForBrowseAlbum:(char)arg0;
- (char)navigateToArtistForBrowseArtist;
- (char)navigateToAlbumForBrowseAlbum;
- (BRMusicContextMenuUtility *)init;

@end
