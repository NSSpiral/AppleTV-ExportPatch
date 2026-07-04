/* Runtime dump - MKLocalSearchCompleter
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocalSearchCompleter : MKSearchCompleter
{
    double _lastRequestTime;
    char _dirty;
    NSArray * _results;
    NSTimer * _timer;
    <GEOMapServiceCompletionTicket> * _ticket;
    int _source;
    <MKLocationManagerOperation> * _singleLocationUpdate;
}

- (char)isSearching;
- (char)resultsAreCurrent;
- (void)setBoundingRegion:(struct ?)arg0;
- (void)_handleCompletion:(id /* block */)arg0 forTicket:(NSObject *)arg1;
- (void)_markDirty;
- (void)_schedulePendingRequest;
- (void)_handleError:(NSError *)arg0 forTicket:(NSObject *)arg1;
- (void)_cancelTimer;
- (void)_scheduleRequest;
- (void)_fireRequest;
- (void)cancel;
- (void)dealloc;
- (MKLocalSearchCompleter *)init;
- (NSArray *)results;
- (int)source;
- (void)setSource:(int)arg0;
- (void).cxx_destruct;
- (void)retry;
- (void)setFragment:(NSString *)arg0;

@end
