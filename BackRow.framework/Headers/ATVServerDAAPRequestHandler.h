/* Runtime dump - ATVServerDAAPRequestHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVRadioStation, ATVServerArtworkRequestManager, ATVStoreRadioStation;
@interface ATVServerDAAPRequestHandler : NSObject
{
    NSMutableDictionary * _pendingQueries;
    ATVServerArtworkRequestManager * _artworkRequestManager;
    NSMutableDictionary * _radioStationIDs;
    NSMutableDictionary * _radioStationDAAPContainerIDs;
    unsigned int _lastRadioStationDAAPContainerID;
}

+ (unsigned long long)idFromCriteriaList:(struct SearchCriteriaList *)arg0;
+ (NSObject *)atvSortStringForDAAPSortType:(int)arg0;
+ (NSObject *)_radioStationID:(NSObject *)arg0;
+ (ATVServerDAAPRequestHandler *)radioStation:(ATVRadioStation *)arg0 withStationID:(NSString *)arg1;
+ (void)_populateRadioStationIDsDictionary:(NSDictionary *)arg0 radioStations:(id)arg1;
+ (char)_isStoreRadioStation:(ATVStoreRadioStation *)arg0;
+ (NSObject *)daapUpdateInfoBuffer;
+ (NSObject *)controlPromptUpdateInfoBuffer;
+ (ATVServerDAAPRequestHandler *)sharedInstance;

- (void)handleDAAPRequest:(struct ATVServerRequest *)arg0;
- (NSArray *)atvFiltersForCriteriaList:(struct SearchCriteriaList *)arg0 queryType:(int)arg1;
- (NSArray *)radioStationFromPlaylistsQueryResults:(NSArray *)arg0 daapContainerID:(unsigned long long)arg1;
- (void)_musicStoreShowDataChanged:(NSNotification *)arg0;
- (void)_bookmarkServiceRequiresSync:(id)arg0;
- (void)_bookmarkServiceUpdated:(id)arg0;
- (void)_cloudDBDataUpdated:(id)arg0;
- (void)_radioDBDataUpdated:(id)arg0;
- (void)_homeShareServersChangedHandler:(id /* block */)arg0;
- (void)_homeShareServersChanged;
- (NSURLRequest *)_dataClientForServerRequest:(struct ATVServerRequest *)arg0;
- (char)_isValidServerRequest:(struct ATVServerRequest *)arg0;
- (NSURLRequest *)_queryForServerRequest:(struct ATVServerRequest *)arg0;
- (void)_addPendingQuery:(NSObject *)arg0 dataClient:(ATVDataClient *)arg1;
- (NSURLRequest *)_dmapResponseForRentalDatabasePlaylistsRequest;
- (unsigned int)_handleArtworkRequest:(struct ATVServerRequest *)arg0 dataClient:(ATVDataClient *)arg1;
- (int)_queryTypeForServerRequest:(struct ATVServerRequest *)arg0 containerID:(unsigned long long *)arg1;
- (void)_addFiltersToQuery:(NSObject *)arg0 serverRequest:(struct ATVServerRequest *)arg1;
- (NSObject *)_atvPropertyForDAAPProperty:(NSObject *)arg0;
- (NSObject *)_dmapResponseForCompletedCloudQuery:(NSObject *)arg0;
- (NSObject *)_dmapResponseForCompletedRadioQuery:(NSObject *)arg0;
- (NSObject *)_dmapResponseForCompletedQuery:(NSObject *)arg0 serverRequest:(struct ATVServerRequest *)arg1;
- (id)newATVFilterForCriteria:(struct CriterionInfo *)arg0 queryType:(struct SearchCriteriaList *)arg1;
- (int)_filterOperatorForMatchType:(unsigned long)arg0;
- (void)_serverUpdated;
- (NSObject *)_radioStationID:(unsigned long long)arg0;
- (NSObject *)_newRadioStationDAAPContainerID;
- (NSObject *)_radioStationDAAPContainerID:(NSObject *)arg0;
- (void)_updateRadioStationIDs:(id)arg0;
- (unsigned int)_addRadioStations:(id)arg0 toDMAPBuffer:(NSObject *)arg1;
- (void)handleCompletedQuery:(NSObject *)arg0 context:(NSObject *)arg1;
- (ATVServerDAAPRequestHandler *)init;
- (void).cxx_destruct;
- (void)_dataClientConnectionHandler:(id /* block */)arg0;

@end
