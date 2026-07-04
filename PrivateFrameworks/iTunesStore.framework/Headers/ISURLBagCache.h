/* Runtime dump - ISURLBagCache
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLBagCache : NSObject
{
    NSMutableDictionary * _cachedBags;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

+ (ISURLBagCache *)sharedCache;
+ (NSString *)URLWithBagContext:(SSURLBagContext *)arg0;

- (NSString *)URLBagForContext:(NSObject *)arg0;
- (void)dealloc;
- (ISURLBagCache *)init;
- (void)invalidateURLBagForContext:(NSObject *)arg0;
- (NSURLRequest *)_cachedResponseForRequest:(NSURLRequest *)arg0;
- (NSString *)URLBagForContext:(NSObject *)arg0 withOptions:(int)arg1;
- (void)addURLBag:(ATVStoreURLBag *)arg0;
- (void)_storeFrontChangedNotification:(NSNotification *)arg0;
- (NSString *)_newRequestWithURLBagContext:(NSObject *)arg0;
- (NSString *)_URLBagForContext:(NSObject *)arg0 withOptions:(int)arg1;
- (char)_shouldFallbackForContext:(NSObject *)arg0 options:(int)arg1;
- (NSString *)_fallbackContextWithContext:(NSObject *)arg0;
- (void)invalidateAllURLBags;
- (NSURLResponse *)_storeFrontIdentifierForResponse:(NSURLResponse *)arg0;

@end
