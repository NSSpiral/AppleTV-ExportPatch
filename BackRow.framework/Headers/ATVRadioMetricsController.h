/* Runtime dump - ATVRadioMetricsController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVSearchTerm, WLKChannelDetails;
@interface ATVRadioMetricsController : NSObject
{
    SSMetricsController * _metricsController;
    SSMetricsConfiguration * _globalConfiguration;
}

@property (retain, nonatomic) SSMetricsController * metricsController;
@property (retain, nonatomic) SSMetricsConfiguration * globalConfiguration;

- (SSMetricsController *)metricsController;
- (void)reportSignedOut;
- (void)reportSignedIn;
- (void)reportViewedStationsPage;
- (void)reportViewedEditStationDetailPageForStation:(id)arg0;
- (void)reportViewedAddStationPage;
- (void)reportViewedGenrePageForGenre:(id)arg0;
- (void)_urlBagDidLoad:(id)arg0;
- (void)_reloadValuesFromBag;
- (NSString *)_valueForBagKey:(NSString *)arg0;
- (void)_setGlobalConfiguration:(NSDictionary *)arg0;
- (NSDictionary *)_fieldsMappingDictionary;
- (NSDictionary *)_singleValueFieldsMappingDictionary;
- (NSDictionary *)_customValueFieldsMappingDictionary;
- (NSArray *)_targetIdentifierKeys;
- (NSObject *)_stationDictionaryForStationAtIndex:(unsigned int)arg0 inSection:(UITableViewSection *)arg1;
- (NSDictionary *)_targetIdentifierForDictionary:(NSDictionary *)arg0;
- (NSObject *)_eventLocationWithType:(NSObject *)arg0 position:(unsigned int)arg1 fieldData:(NSData *)arg2;
- (id)_searchMoreResultsEventLocationForSection:(id)arg0;
- (id)_searchResultsSectionEventLocationForSection:(id)arg0 atIndex:(unsigned int)arg1;
- (NSObject *)_searchResultsListEventLocation;
- (NSObject *)_searchResultStationDescriptionItemForStationAtIndex:(unsigned int)arg0 inSection:(UITableViewSection *)arg1;
- (id)_blankPageEventWithDetails:(WLKChannelDetails *)arg0;
- (void)_insertEvent:(NSObject *)arg0;
- (NSObject *)_signInEvent;
- (NSObject *)_signOutEvent;
- (id)_searchEventWithSearchTerm:(NSString *)arg0 forBlankPage:(char)arg1;
- (void)_setPageConfiguration:(NSDictionary *)arg0;
- (id)_pageEventForSearchResultsWithSearchTerm:(NSString *)arg0 startDate:(NSDate *)arg1 endDate:(NSDate *)arg2 cached:(char)arg3;
- (id)_impressionEventForStations:(id)arg0;
- (id)_clickEventForSelectingMoreResultsInSection:(id)arg0 atIndex:(unsigned int)arg1 withVisibleStations:(char)arg2;
- (id)_clickEventForCancellingSearch;
- (NSArray *)_clickEventForClearingSearchResults;
- (NSObject *)_clickEventForSelectingSearchResultsStationAtIndex:(unsigned int)arg0 inSection:(UITableViewSection *)arg1 atIndex:(unsigned int)arg2 withVisibleStations:(char)arg3;
- (NSDictionary *)_impressionsIdentifierForStationDictionary:(NSDictionary *)arg0;
- (NSString *)_impressionIdentifiersForStations:(id)arg0;
- (id)_clickEventWithVisibleStations:(char)arg0;
- (NSString *)_targetIdentifierForSection:(id)arg0;
- (id)_locationsForMoreResultsButtonInSection:(id)arg0 atIndex:(unsigned int)arg1;
- (NSObject *)_targetIdentifierForStationAtIndex:(unsigned int)arg0 inSection:(UITableViewSection *)arg1;
- (NSObject *)_locationsForStationAtIndex:(unsigned int)arg0 inSection:(UITableViewSection *)arg1 atIndex:(unsigned int)arg2;
- (void)_reportViewedPageWithType:(NSObject *)arg0 name:(NSString *)arg1 pageIdentifier:(NSString *)arg2 pageDetails:(id)arg3;
- (void)_reportViewedPageWithType:(NSObject *)arg0 name:(NSString *)arg1;
- (NSString *)_pageIdentifierForStation:(id)arg0;
- (void)reportViewedBlankCreateStationSearchResultsPage;
- (void)reportViewedBlankPlayMoreSearchResultsPage;
- (void)reportViewedBlankNeverPlaySearchResultsPage;
- (void)reportStartedSearchWithTerm:(id)arg0 forBlankPage:(char)arg1;
- (void)reportReceivedResponse:(NSURLResponse *)arg0 forSearchWithTerm:(ATVSearchTerm *)arg1 withRequestStartDate:(NSDate *)arg2 responseEndDate:(NSDate *)arg3 cached:(char)arg4;
- (void)reportVisibleSearchResultStations:(id)arg0;
- (void)reportSelectedShowMoreResultsForSearchResultSection:(id)arg0 atIndex:(unsigned int)arg1 withVisibleStations:(char)arg2;
- (void)reportCancelledSearch;
- (void)reportClearedSearch;
- (void)reportSelectedSearchResultStationAtIndex:(unsigned int)arg0 inSection:(UITableViewSection *)arg1 atIndex:(unsigned int)arg2 withVisibleStations:(char)arg3;
- (void)reportViewedTopShelfWelcomePage;
- (void)reportViewedTopShelfPostersPage;
- (void)reportViewedNowPlayingTrackPageForStation:(id)arg0;
- (void)reportViewedNowPlayingHistoryPageForStation:(id)arg0;
- (void)reportViewedEditStationsPage;
- (void)reportViewedHistoryPlayedPage;
- (void)reportViewedHistoryWishListPage;
- (void)setMetricsController:(SSMetricsController *)arg0;
- (void)dealloc;
- (ATVRadioMetricsController *)init;
- (void).cxx_destruct;
- (SSMetricsConfiguration *)globalConfiguration;
- (void)setGlobalConfiguration:(SSMetricsConfiguration *)arg0;

@end
