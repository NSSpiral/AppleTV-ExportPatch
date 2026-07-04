/* Runtime dump - ATVRadioStationsDataSource
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVRadioDataClient, ATVRadioStation;
@interface ATVRadioStationsDataSource : NSObject
{
    char _editing;
    char _shouldIgnoreCachedResponse;
    NSArray * _featuredStations;
    NSArray * _personalStations;
    unsigned int _status;
    ATVRadioDataClient * _dataClient;
    ATVDataQuery * _pendingQuery;
    NSHashTable * _changeObservers;
}

@property (copy, nonatomic) NSArray * featuredStations;
@property (copy, nonatomic) NSArray * personalStations;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) ATVRadioDataClient * dataClient;
@property (nonatomic) char editing;
@property (nonatomic) char shouldIgnoreCachedResponse;
@property (retain, nonatomic) ATVDataQuery * pendingQuery;
@property (retain, nonatomic) NSHashTable * changeObservers;

+ (NSObject *)stationsDataSourceWithObserver:(NSObject *)arg0;
+ (void)deletePersonalStation:(id)arg0;

- (void)setPendingQuery:(ATVDataQuery *)arg0;
- (ATVDataQuery *)pendingQuery;
- (NSArray *)personalStations;
- (void)movePersonalStationAtIndex:(unsigned int)arg0 toIndex:(unsigned int)arg1;
- (void)_willAddStation:(ATVRadioStation *)arg0;
- (void)_deletePersonalStation:(id)arg0;
- (NSHashTable *)changeObservers;
- (void)_dataClientStatusDidChange:(NSDictionary *)arg0;
- (void)_willChangeStatus;
- (void)_didChangeStatus;
- (void)_updateStationsSortWithStations:(NSArray *)arg0;
- (void)setPersonalStations:(NSArray *)arg0;
- (void)_willChangeStations;
- (void)_didChangeStations;
- (char)shouldIgnoreCachedResponse;
- (void)_updateWithStations:(NSArray *)arg0 status:(unsigned int)arg1;
- (void)setShouldIgnoreCachedResponse:(char)arg0;
- (void)setFeaturedStations:(NSArray *)arg0;
- (void)setChangeObservers:(NSHashTable *)arg0;
- (void)dealloc;
- (void)reloadData;
- (ATVRadioStationsDataSource *)init;
- (char)isEditing;
- (void)setEditing:(char)arg0;
- (void)beginEditing;
- (void)endEditing;
- (void).cxx_destruct;
- (void)_reloadData;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg0;
- (ATVRadioDataClient *)dataClient;
- (ATVRadioStationsDataSource *)initWithDataClient:(ATVRadioDataClient *)arg0;
- (void)setDataClient:(ATVRadioDataClient *)arg0;
- (void)_dataClientDataUpdated:(ATVDataClient *)arg0;
- (NSArray *)featuredStations;

@end
