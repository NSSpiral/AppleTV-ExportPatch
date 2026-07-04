/* Runtime dump - MEITunesPhotoDataClient
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface MEITunesPhotoDataClient : ATVDataClient
{
    struct AppContext * _appContext;
    ATVDataQuery * _pendingQuery;
    NSObject<OS_dispatch_queue> * _pendingQueryCompletionQueue;
    id _pendingQueryCompletionHandler;
    unsigned long long _pairingID;
}

@property (nonatomic) unsigned long long pairingID;
@property (retain, nonatomic) ATVDataQuery * pendingQuery;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * pendingQueryCompletionQueue;
@property (copy, nonatomic) id pendingQueryCompletionHandler;

+ (NSString *)iTunesPhotoDataClientWithName:(NSString *)arg0;

- (MEITunesPhotoDataClient *)initWithPairingID:(unsigned long long)arg0 appContext:(struct AppContext *)arg1 name:(NSString *)arg2;
- (void)setPairingID:(unsigned long long)arg0;
- (void)setPendingQuery:(ATVDataQuery *)arg0;
- (void)_photoLibraryChangedNotification:(NSNotification *)arg0;
- (void)setPendingQueryCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setPendingQueryCompletionHandler:(id /* block */)arg0;
- (void)_requestPhotoLibraryWithQuery:(NSObject *)arg0;
- (void)_photoLibraryReceivedNotification:(NSNotification *)arg0;
- (ATVDataQuery *)pendingQuery;
- (NSObject<OS_dispatch_queue> *)pendingQueryCompletionQueue;
- (id /* block */)pendingQueryCompletionHandler;
- (void)dealloc;
- (void).cxx_destruct;
- (void)concreteDataClientConnect;
- (void)concreteDataClientDisconnect;
- (char)processQueryAsync:(id)arg0;
- (void)executeQuery:(NSObject *)arg0 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;
- (NSSet *)imageURLWithAsset:(NSSet *)arg0 size:(struct CGSize)arg1 crop:(char)arg2;
- (struct AppContext *)appContext;
- (unsigned long long)pairingID;

@end
