/* Runtime dump - ISURLCache
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLCache : NSObject
{
    NSURLCache * _cache;
    ISURLCacheConfiguration * _configuration;
}

@property (readonly) NSString * persistentIdentifier;
@property (readonly, nonatomic) unsigned int currentDiskUsage;
@property (readonly, nonatomic) unsigned int currentMemoryUsage;
@property (readonly, nonatomic) unsigned int diskCapacity;
@property (readonly, nonatomic) unsigned int memoryCapacity;

+ (NSString *)cacheDirectoryPath;

- (unsigned int)currentDiskUsage;
- (void)removeAllCachedResponses;
- (void)removeCachedResponseForRequest:(NSURLRequest *)arg0;
- (unsigned int)memoryCapacity;
- (unsigned int)diskCapacity;
- (unsigned int)currentMemoryUsage;
- (void)storeCachedResponse:(NSURLResponse *)arg0 forRequest:(NSURLRequest *)arg1;
- (NSString *)persistentIdentifier;
- (void)dealloc;
- (ISURLCache *)init;
- (NSURLRequest *)cachedResponseForRequest:(NSURLRequest *)arg0;
- (void)saveMemoryCacheToDisk;
- (ISURLCache *)initWithCacheConfiguration:(NSURLCache *)arg0;
- (void)reloadWithCacheConfiguration:(NSURLCache *)arg0;
- (void)purgeMemoryCache;

@end
