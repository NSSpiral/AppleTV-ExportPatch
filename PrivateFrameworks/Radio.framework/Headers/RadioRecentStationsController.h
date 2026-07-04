/* Runtime dump - RadioRecentStationsController
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRecentStationsController : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    char _hasRefreshed;
    char _hasValidStationGroups;
    NSMutableArray * _pendingRecentStations;
    NSArray * _serverRecentStationGroups;
    NSArray * _stationGroups;
}

@property (readonly, copy, nonatomic) NSArray * stationGroups;
@property (readonly, copy, nonatomic) NSArray * stations;

- (NSArray *)stations;
- (NSArray *)stationGroups;
- (void)refreshWithCompletionHandler:(id /* block */)arg0;
- (RadioRecentStationsController *)init;
- (void).cxx_destruct;
- (NSURLRequest *)_newRecentStationsRequest;
- (void)_handleRecentStationsResponse:(NSURLResponse *)arg0 fromRequest:(NSURLRequest *)arg1 pendingRecentStations:(NSMutableArray *)arg2 isInitialCacheLoad:(char)arg3;
- (void)_createStationGroups;
- (void)_insertPendingRecentStation:(id)arg0;
- (void)_postStationsDidChangeNotification;
- (void)insertPendingRecentStation:(id)arg0;
- (void)insertPendingRecentStationDictionary:(NSDictionary *)arg0;
- (void)removePendingRecentStation:(id)arg0;

@end
