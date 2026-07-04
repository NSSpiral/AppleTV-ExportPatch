/* Runtime dump - ISDeleteDaemonModule
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDeleteDaemonModule : NSObject
{
    struct __CFURLStorageSession * _storageSession;
    struct _CFURLCache * _urlCache;
    SSAppPurchaseHistoryCache * _purchaseHistoryCache;
}

- (void)dealloc;
- (ISDeleteDaemonModule *)init;
- (unsigned long long)purge:(unsigned long long)arg0;
- (unsigned long long)purgeableSpace;

@end
