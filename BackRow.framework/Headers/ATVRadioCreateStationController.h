/* Runtime dump - ATVRadioCreateStationController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVSearchViewController.h>

@protocol ATVRadioSearchResultsSectionDelegate;

@class ATVRadioSearchResultsSection, ATVRadioStation, BRControl, BREvent, BRListControl, BRMenuItem;
@interface ATVRadioCreateStationController : ATVSearchViewController <ATVRadioSearchResultsSectionDelegate>
{
    char _excludeStationsFromResults;
    id _selectionHandler;
    ATVDataQuery * _searchQuery;
    NSArray * _searchResults;
    ATVImage * _defaultMenuItemImage;
    int _searchType;
}

@property (nonatomic) char excludeStationsFromResults;
@property (copy, nonatomic) id selectionHandler;
@property (retain, nonatomic) ATVDataQuery * searchQuery;
@property (retain, nonatomic) NSArray * searchResults;
@property (retain, nonatomic) ATVImage * defaultMenuItemImage;
@property (nonatomic) int searchType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)brEventAction:(BREvent *)arg0;
- (void)wasPushed;
- (void)controlWasDeactivated;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (void)controlWasActivated;
- (NSObject *)_metricsController;
- (void)setSelectionHandler:(id /* block */)arg0;
- (ATVRadioCreateStationController *)initWithSearchType:(int)arg0 title:(NSString *)arg1 searchLabel:(NSString *)arg2 selectionHandler:(id /* block */)arg3;
- (void)setExcludeStationsFromResults:(char)arg0;
- (void)setSearchPreview:(id)arg0;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)_stationForRowAtIndexPath:(NSIndexPath *)arg0;
- (void)_listFocusDidChange:(NSDictionary *)arg0;
- (void)_reportVisibleSearchResults;
- (void)setDefaultMenuItemImage:(ATVImage *)arg0;
- (int)searchType;
- (void)_reportViewedBlankPage;
- (NSArray *)_visibleIndexPaths;
- (id)_visibleSearchResultStations;
- (void)_setNeedsImpressionsReported;
- (void)_reportStartedSearchWithTerm:(id)arg0;
- (void)_cancelPreviousSearch;
- (char)excludeStationsFromResults;
- (void)setSearchQuery:(ATVDataQuery *)arg0;
- (id)_attributedSubtitleForStation:(id)arg0;
- (NSObject *)_attributedStringForProperty:(NSString *)arg0 withStation:(ATVRadioStation *)arg1 baseAttributes:(NSDictionary *)arg2 highlightAttributes:(NSDictionary *)arg3;
- (id)_attributedTitleForStation:(id)arg0;
- (ATVImage *)defaultMenuItemImage;
- (void)searchResultsSection:(ATVRadioSearchResultsSection *)arg0 didLoadAdditionalStations:(NSArray *)arg1;
- (char)_search:(SASmsRecipientSearch *)arg0;
- (void)_updateSearchResults:(NSArray *)arg0 searchString:(NSString *)arg1;
- (id /* block */)selectionHandler;
- (void)setSearchType:(int)arg0;
- (void)dealloc;
- (ATVRadioCreateStationController *)init;
- (void).cxx_destruct;
- (ATVDataQuery *)searchQuery;
- (void)setSearchResults:(NSArray *)arg0;
- (NSArray *)searchResults;

@end
