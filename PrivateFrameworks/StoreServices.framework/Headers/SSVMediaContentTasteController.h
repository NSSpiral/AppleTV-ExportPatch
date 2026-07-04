/* Runtime dump - SSVMediaContentTasteController
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaContentTasteController : NSObject
{
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    NSObject<OS_dispatch_queue> * _calloutSerialQueue;
    unsigned long long _currentResponseRevisionID;
    unsigned long long _lastNotificationReceivedResponseRevisionID;
    int _itemsDidChangeNotifyToken;
    long long _pendingMutateRequestCount;
    NSMutableDictionary * _playlistGlobalIDToContentTasteItem;
    NSMutableDictionary * _playlistGlobalIDToPendingContentTasteItem;
    struct map<long long, SSVMediaContentTasteItem *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, SSVMediaContentTasteItem *> > > _storeAdamIDToContentTasteItem;
    struct map<long long, SSVMediaContentTasteItem *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, SSVMediaContentTasteItem *> > > _storeAdamIDToPendingContentTasteItem;
}

- (void)setContentTasteType:(unsigned int)arg0 forStoreAdamID:(long long)arg1 withContentType:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)setContentTasteType:(unsigned int)arg0 forPlaylistGlobalID:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)dealloc;
- (SSVMediaContentTasteController *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)_refreshContentTasteItems;
- (void)_sendUpdateWithItemUpdates:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)_handleContentTasteItemsUpdateResponse:(NSURLResponse *)arg0 allowNotifications:(char)arg1;
- (unsigned int)contentTasteTypeForPlaylistGlobalID:(NSObject *)arg0;
- (unsigned int)contentTasteTypeForStoreAdamID:(long long)arg0;

@end
