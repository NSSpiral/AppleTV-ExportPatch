/* Runtime dump - ATVFavoritesController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@protocol BRSecureResource;

@class ATVPodcastEmptyControl, ATVStoreFavorite, BRAuthenticator, BRControl, BRCursorControl, BRGridControl, BRGridView, BRHeaderControl, BRPanelControl, BRScrollControl, BRTextControl, BRWaitPromptControl;
@interface ATVFavoritesController : BRController <BRSecureResource>
{
    int _itemType;
    NSMutableArray * _favorites;
    BRHeaderControl * _header;
    BRScrollControl * _scroller;
    BRPanelControl * _panel;
    BRGridView * _grid;
    BRCursorControl * _cursor;
    BRTextControl * _rearrangeInstructions;
    char _hasBeenActivated;
    NSMutableDictionary * _redDotMap;
    NSTimer * _spinnerTimer;
    BRWaitPromptControl * _spinner;
    ATVPodcastEmptyControl * _podcastEmptyControl;
    char _showsSpinner;
    char _isLoadingPodcastSubscriptions;
    char _favoriteOrderChanged;
    char _needsReload;
    char _hasInitiatedFirstFetch;
}

@property (nonatomic) char hasInitiatedFirstFetch;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (BRAuthenticator *)secureResourceAuthenticator;
- (void)wasPushed;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (long)numberOfItemsInGrid:(BRGridControl *)arg0;
- (long)numberOfColumnsInGrid:(BRGridControl *)arg0;
- (BRControl *)grid:(BRGridView *)arg0 itemAtIndex:(long)arg1;
- (NSString *)grid:(BRGridView *)arg0 itemIDAtIndex:(long)arg1;
- (long)grid:(BRGridView *)arg0 indexForItemID:(NSObject *)arg1;
- (char)grid:(BRGridView *)arg0 canMoveItemAtIndex:(long)arg1;
- (char)grid:(BRGridView *)arg0 moveItemAtIndex:(long)arg1 toIndex:(long)arg2;
- (long)grid:(BRGridView *)arg0 targetIndexForMoveFromItemAtIndex:(long)arg1 toProposedIndex:(long)arg2;
- (void)gridViewDidEndEditing:(id)arg0;
- (void)_showSpinner:(char)arg0;
- (void)_fadeOutAnimationCompleted:(id)arg0 finished:(char)arg1;
- (char)isNetworkDependent;
- (void)_subscriptionAdded:(id)arg0;
- (void)_subscriptionRemoved:(id)arg0;
- (void)_subscriptionsDirty:(id)arg0;
- (void)_presentEmptyScreen;
- (char)hasInitiatedFirstFetch;
- (void)_fetchFavoritesFromKeyValueStore;
- (void)setHasInitiatedFirstFetch:(char)arg0;
- (int)_redDotCountForStoreFavorite:(id)arg0;
- (char)_shouldShowRedDots;
- (void)_reloadPodcasts;
- (char)_setupAfterFavoritesFetch;
- (void)_showGrid;
- (void)_favoriteInsertedNotification:(NSNotification *)arg0;
- (void)_favoriteRemovedNotification:(NSNotification *)arg0;
- (void)_showDataChangedNotification:(NSNotification *)arg0;
- (void)_storeFavoriteChangedNotification:(NSNotification *)arg0;
- (void)_refreshPodcastView;
- (void)_markAsDirtyAndReloadIfActive;
- (void)_rebuildRedDotMapWithFavoritesIfNecessary:(id)arg0;
- (id)_sortedFavorites;
- (void)_setRedDotCount:(int)arg0 forStoreFavorite:(ATVStoreFavorite *)arg1;
- (void)_removeRedDotCountForStoreFavorite:(id)arg0;
- (NSObject *)_noFavoritesController;
- (void)_spinnerTimerFired:(id)arg0;
- (id)RearrangeInstructionsHiddenBinding;
- (void)_updateRearrangeInstructions;
- (ATVFavoritesController *)initWithItemType:(int)arg0 error:(id *)arg1;
- (float)grid:(BRGridView *)arg0 heightForItemAtIndex:(long)arg1;
- (void)_favoritesShowDataChangedNotification:(NSNotification *)arg0;
- (void)bindRearrangeInstructionsHiddenBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (NSString *)_mediaType;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_reload;

@end
