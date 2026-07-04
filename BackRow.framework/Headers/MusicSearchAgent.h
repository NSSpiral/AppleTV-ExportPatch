/* Runtime dump - MusicSearchAgent
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVSearchAgent.h>

@class ATVSearchTerm, BRAsyncTaskContext, PlayHandler;
@interface MusicSearchAgent : ATVSearchAgent
{
    NSString * _initialSearchTerm;
    NSString * _searchTerm;
    ATVDataQuery * _artistQuery;
    ATVDataQuery * _albumQuery;
    ATVDataQuery * _playlistQuery;
    ATVDataQuery * _songQuery;
    BRAsyncTaskContext * _taskContext;
    PlayHandler * _playHandler;
    char _dataClientSearchInProgress;
    ATVDataClient * _dataClient;
    unsigned int _clientType;
    NSMutableDictionary * _inFlightQueryResultsByProviderName;
    NSArray * _fullProviderPriorityOrder;
}

@property (retain, nonatomic) ATVDataClient * dataClient;
@property (nonatomic) unsigned int clientType;
@property (retain, nonatomic) NSMutableDictionary * inFlightQueryResultsByProviderName;
@property (nonatomic) char dataClientSearchInProgress;
@property (copy, nonatomic) NSArray * fullProviderPriorityOrder;

+ (MusicSearchAgent *)searchAgent;
+ (MusicSearchAgent *)defaultProviderPriorityOrder;
+ (void)initialize;

- (void)search:(NSString *)arg0 ignoringCache:(char)arg1;
- (char)showRecentSearches;
- (char)handlePlayForObject:(NSObject *)arg0;
- (void)_postSearchResults:(NSArray *)arg0 searchTerm:(NSString *)arg1;
- (void)_searchForMultiCharFirstSearchTerm;
- (id)contextMenuUtility;
- (NSMutableDictionary *)inFlightQueryResultsByProviderName;
- (void)setInFlightQueryResultsByProviderName:(NSMutableDictionary *)arg0;
- (char)dataClientSearchInProgress;
- (void)setDataClientSearchInProgress:(char)arg0;
- (NSArray *)fullProviderPriorityOrder;
- (void)setFullProviderPriorityOrder:(NSArray *)arg0;
- (void)_dataClientSearch;
- (void)_startSearchTask;
- (id)_filterExistingResultsForSearchTerm:(id)arg0;
- (void)_searchFilteringComplete:(id)arg0;
- (void)_artistDataClientSearch;
- (void)_albumDataClientSearch;
- (void)_playlistDataClientSearch;
- (void)_songDataClientSearch;
- (void)_addSearchTermFilterForQuery:(NSObject *)arg0 operator:(int)arg1;
- (void)_addMediaTypeFilterForQuery:(NSObject *)arg0;
- (void)_setArtistQuery:(NSObject *)arg0;
- (NSData *)_filterData:(NSData *)arg0 forSearchTerm:(ATVSearchTerm *)arg1;
- (NSArray *)_providerForSearchResults:(NSArray *)arg0 title:(NSString *)arg1 label:(NSString *)arg2;
- (void)_providerNamed:(id)arg0 completedWithResults:(NSArray *)arg1;
- (void)_setAlbumQuery:(NSObject *)arg0;
- (void)_setPlaylistQuery:(NSObject *)arg0;
- (void)_setSongQuery:(NSObject *)arg0;
- (void)dealloc;
- (MusicSearchAgent *)init;
- (void).cxx_destruct;
- (void)_search;
- (ATVDataClient *)dataClient;
- (unsigned int)clientType;
- (void)setDataClient:(ATVDataClient *)arg0;
- (void)setClientType:(unsigned int)arg0;
- (long)cacheSize;

@end
