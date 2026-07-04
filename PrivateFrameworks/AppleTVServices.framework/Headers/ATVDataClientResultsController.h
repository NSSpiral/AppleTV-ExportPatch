/* Runtime dump - ATVDataClientResultsController
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDataClientResultsController : NSObject
{
    char _firstTime;
    ATVDataClient * _client;
    ATVDataQuery * _query;
    NSArray * _results;
    int _status;
    NSError * _error;
    unsigned int _clientType;
    NSHashTable * _unsnoozedObservers;
}

@property (retain, nonatomic) ATVDataClient * client;
@property (retain, nonatomic) ATVDataQuery * query;
@property (copy, nonatomic) NSArray * results;
@property (nonatomic) int status;
@property (retain, nonatomic) NSError * error;
@property (nonatomic) unsigned int clientType;
@property (nonatomic) char firstTime;
@property (retain, nonatomic) NSHashTable * unsnoozedObservers;

- (void)dealloc;
- (ATVDataQuery *)query;
- (void)removeObserver:(NSObject *)arg0;
- (void)_start;
- (void)setQuery:(ATVDataQuery *)arg0;
- (NSArray *)results;
- (void).cxx_destruct;
- (void)setResults:(NSArray *)arg0;
- (void)_cancel;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)addObserver:(NSObject *)arg0;
- (unsigned int)clientType;
- (void)_dataClientConnectionHandler:(id /* block */)arg0;
- (void)setClientType:(unsigned int)arg0;
- (void)_dataClientDataUpdated:(ATVDataClient *)arg0;
- (NSHashTable *)unsnoozedObservers;
- (void)_attemptQuery;
- (char)shouldHandleUpdate:(NSDate *)arg0;
- (char)isFirstTime;
- (void)setFirstTime:(char)arg0;
- (void)_notifyWillChangeResults;
- (void)_notifyDidChangeResults;
- (void)_notifyQueryDidFail;
- (ATVDataClientResultsController *)initWithDataClient:(ATVDataClient *)arg0 clientType:(unsigned int)arg1 dataQuery:(ATVDataQuery *)arg2;
- (void)snoozeObserver:(NSObject *)arg0;
- (void)unsnoozeObserver:(NSObject *)arg0;
- (char)_hasUnsnoozedObservers;
- (void)setUnsnoozedObservers:(NSHashTable *)arg0;
- (NSError *)error;
- (void)setError:(NSError *)arg0;
- (void)setClient:(ATVDataClient *)arg0;
- (ATVDataClient *)client;

@end
