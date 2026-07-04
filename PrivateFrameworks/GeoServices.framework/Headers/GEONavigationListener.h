/* Runtime dump - GEONavigationListener
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationListener : NSObject
{
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    id _routeSummaryUpdatedHandler;
    id _guidanceStateUpdatedHandler;
}

@property (copy, nonatomic) id routeSummaryUpdatedHandler;
@property (copy, nonatomic) id guidanceStateUpdatedHandler;

- (void)dealloc;
- (GEONavigationListener *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)_createConnection;
- (void)_closeConnection;
- (void)_request:(NSURLRequest *)arg0;
- (void)requestRouteSummary;
- (id /* block */)routeSummaryUpdatedHandler;
- (id /* block */)guidanceStateUpdatedHandler;
- (void)requestGuidanceState;
- (void)setRouteSummaryUpdatedHandler:(id /* block */)arg0;
- (void)setGuidanceStateUpdatedHandler:(id /* block */)arg0;

@end
