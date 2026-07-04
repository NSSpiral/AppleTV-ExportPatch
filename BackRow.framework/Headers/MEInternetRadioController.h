/* Runtime dump - MEInternetRadioController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRDataQueryController.h>

@class ATVInternetRadioFavorite, BRControl, BREvent, BRListControl, BRMenuItem, BRTypeaheadPhraseAccumulator;
@interface MEInternetRadioController : BRDataQueryController
{
    <BRMediaAsset> * _nowPlayingStation;
    NSArray * _favorites;
    NSArray * _categories;
    ATVDataClient * _tunerDataClient;
    long _fetchingStationsForIndex;
    ATVInternetRadioFavorite * _selectedFavorite;
    ATVDataQuery * _categoryQuery;
    ATVDataQuery * _stationQuery;
    ATVDataQuery * _favoriteCategoryQuery;
    ATVDataQuery * _favoriteStationQuery;
    char _showNowPlayingMenu;
}

@property (nonatomic) char showNowPlayingMenu;

- (char)brEventAction:(BREvent *)arg0;
- (void)wasPushed;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)providersForContextMenu;
- (void)wasExhumed;
- (MEInternetRadioController *)initWithDataClient:(ATVDataClient *)arg0 dataClientType:(unsigned int)arg1;
- (void)_handleContextMenuSelection:(id /* block */)arg0;
- (NSError *)errorForNoContent;
- (NSObject *)newDataQuery;
- (char)dataQueryComplete:(ATVDataQuery *)arg0;
- (char)typeaheadPhraseAccumulator:(BRTypeaheadPhraseAccumulator *)arg0 phraseChanged:(NSString *)arg1;
- (void *)dataItemAtIndexPath:(NSIndexPath *)arg0;
- (void)_favoriteAdded:(id)arg0;
- (void)_favoriteRemoved:(id)arg0;
- (void)_nowPlayingStateChanged:(NSNotification *)arg0;
- (void)_showSpinner:(char)arg0 delay:(char)arg1;
- (char)showNowPlayingMenu;
- (void)setShowNowPlayingMenu:(char)arg0;
- (void)_performStationsQueryForList:(NSArray *)arg0 withIndexPath:(NSIndexPath *)arg1 withFollowUpAction:(int)arg2;
- (void)_handleDidSelectRadioFavorite:(id)arg0;
- (BRControl *)controlForContextMenuStart;
- (BRControl *)controlForContextMenuPositioning;
- (void)_getStationInCategory:(NSString *)arg0;
- (void)_favoriteUnavailable:(id)arg0;
- (void)_updateNowPlaying;
- (void)_getFavoriteCategoryFromString:(NSString *)arg0;
- (void)_stationsQueryComplete:(id)arg0;
- (void)_favoriteCategoryQueryComplete:(id)arg0;
- (void)_favoriteStationQueryComplete:(id)arg0;
- (void)dealloc;
- (NSString *)identifier;
- (void).cxx_destruct;

@end
