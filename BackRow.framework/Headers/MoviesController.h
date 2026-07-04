/* Runtime dump - MoviesController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/VideoController.h>

@protocol BRTabControlDelegate;

@class BRControl, BRListControl, BRMenuItem, BRTabControl, BRTabControlItem;
@interface MoviesController : VideoController <BRTabControlDelegate>
{
    NSMutableArray * _unwatchedItems;
    NSMutableDictionary * _genreNameToMoviesDict;
    NSArray * _movies;
    NSArray * _genresSortedByName;
    NSString * _genreName;
    char _showGenreList;
    char _showMoviesInSpecificGenre;
    char _showUnwatchedItemsOnly;
    ATVDataType * _mediaType;
    NSString * _tabControlItemPreferenceKey;
    NSString * _listTitleLocalizationKey;
    NSString * _numberOfMoviesInGenreLocalizationKey;
    NSString * _oneMovieInGenreLocalizationKey;
}

@property (retain, nonatomic) ATVDataType * mediaType;
@property (retain, nonatomic) NSString * tabControlItemPreferenceKey;
@property (retain, nonatomic) NSString * listTitleLocalizationKey;
@property (retain, nonatomic) NSString * numberOfMoviesInGenreLocalizationKey;
@property (retain, nonatomic) NSString * oneMovieInGenreLocalizationKey;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)controllerForATVMediaType:(NSObject *)arg0 collection:(RadioArtworkCollection *)arg1 dataClient:(ATVDataClient *)arg2 dataClientType:(unsigned int)arg3 playAllItems:(char)arg4;
+ (MoviesController *)moviesControllerForCollection:(id)arg0 mediaType:(ATVDataType *)arg1 dataClient:(ATVDataClient *)arg2 dataClientType:(unsigned int)arg3;
+ (MoviesController *)moviesControllerForGenreName:(NSString *)arg0 mediaType:(ATVDataType *)arg1 dataClient:(ATVDataClient *)arg2 dataClientType:(unsigned int)arg3;

- (void)wasPopped;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForSectionHeader:(long)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)tabControl:(BRTabControl *)arg0 didSelectTabItem:(BRTabControlItem *)arg1;
- (void)tabControl:(BRTabControl *)arg0 willSelectTabItem:(BRTabControlItem *)arg1;
- (void)tabControlDidChangeNumberOfTabItems:(BRTabControl *)arg0;
- (NSError *)errorForNoContent;
- (NSObject *)newDataQuery;
- (NSString *)newPreviewQueryForIndexPath:(NSIndexPath *)arg0;
- (char)dataQueryComplete:(ATVDataQuery *)arg0;
- (void *)dataItemAtIndexPath:(NSIndexPath *)arg0;
- (MoviesController *)initWithMediaType:(ATVDataType *)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
- (MoviesController *)initWithCollection:(RadioArtworkCollection *)arg0 mediaType:(ATVDataType *)arg1 dataClient:(ATVDataClient *)arg2 dataClientType:(unsigned int)arg3;
- (NSObject *)_initWithMediaType:(ATVDataType *)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
- (MoviesController *)initWithGenreName:(NSString *)arg0 mediaType:(ATVDataType *)arg1 dataClient:(ATVDataClient *)arg2 dataClientType:(unsigned int)arg3;
- (int)_lastSelectedTabControlItemKind;
- (NSString *)listTitleLocalizationKey;
- (void)_updateDisplayPlaylists;
- (int)_currentlySelectedTabControlItemKind;
- (NSString *)tabControlItemPreferenceKey;
- (NSArray *)_currentItems;
- (void)_updatePreviewForMediaItem:(NSObject *)arg0 inMediaItems:(NSArray *)arg1;
- (NSString *)numberOfMoviesInGenreLocalizationKey;
- (NSString *)oneMovieInGenreLocalizationKey;
- (void)setTabControlItemPreferenceKey:(NSString *)arg0;
- (void)setListTitleLocalizationKey:(NSString *)arg0;
- (void)setNumberOfMoviesInGenreLocalizationKey:(NSString *)arg0;
- (void)setOneMovieInGenreLocalizationKey:(NSString *)arg0;
- (NSArray *)_unwatchedItems;
- (void)_mediaItemPropertySet:(NSSet *)arg0;
- (NSData *)_genreData;
- (int)_convertIdentifierToTabControlItemKind:(unsigned int)arg0;
- (NSArray *)currentItems;
- (void)dealloc;
- (void).cxx_destruct;
- (ATVDataType *)mediaType;
- (void)setMediaType:(ATVDataType *)arg0;

@end
