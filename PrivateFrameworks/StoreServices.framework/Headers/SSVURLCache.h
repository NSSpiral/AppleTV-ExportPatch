/* Runtime dump - SSVURLCache
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVURLCache : NSObject
{
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    struct __CFURLStorageSession * _cacheStorageSession;
    SSVURLCacheConfiguration * _configuration;
    struct _CFURLCache * _urlCache;
}

- (void)removeAllCachedResponses;
- (void)storeCachedResponse:(NSURLResponse *)arg0 forRequest:(NSURLRequest *)arg1;
- (void)dealloc;
- (SSVURLCache *)init;
- (void).cxx_destruct;
- (void)configureRequest:(NSURLRequest *)arg0;
- (NSURLRequest *)cachedResponseForRequest:(NSURLRequest *)arg0;
- (SSVURLCache *)initWithConfiguration:(SSVURLCacheConfiguration *)arg0;
- (NSDictionary *)cachedConnectionResponseForRequestProperties:(NSDictionary *)arg0 cachedResponse:(id *)arg1;
- (void)storeConnectionResponse:(NSURLResponse *)arg0 forRequestProperties:(NSDictionary *)arg1 userInfo:(NSDictionary *)arg2;
- (NSDictionary *)cachedConnectionResponseForRequestProperties:(NSDictionary *)arg0;
- (void)loadMemoryCacheFromDisk;
- (void)saveMemoryCacheToDisk;
- (void)storeConnectionResponse:(NSURLResponse *)arg0 forRequestProperties:(NSDictionary *)arg1;

@end
