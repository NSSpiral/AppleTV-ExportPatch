/* Runtime dump - MRAVRoutingClientController
 * Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVRoutingClientController : NSObject
{
    struct MRMediaRemoteService * _mediaRemoteService;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableDictionary * _pendingCompletionHandlersForCategories;
    NSMutableDictionary * _cachedRoutesForCategories;
}

@property (readonly, nonatomic) struct MRMediaRemoteService * mediaRemoteService;

- (void)_pickableRoutesDidChangeNotification:(NSNotification *)arg0;
- (void)dealloc;
- (MRAVRoutingClientController *)init;
- (MRAVRoutingClientController *)initWithMediaRemoteService:(struct MRMediaRemoteService *)arg0;
- (void)fetchPickableRoutesForCategory:(NSString *)arg0 completion:(id /* block */)arg1;
- (void)_cacheFetchedPickableRoutes:(id)arg0 forCategory:(NSString *)arg1;
- (void)_flushPendingCompletionHandlersWithPickableRoutes:(NSArray *)arg0 forCategory:(NSString *)arg1;
- (struct MRMediaRemoteService *)mediaRemoteService;

@end
