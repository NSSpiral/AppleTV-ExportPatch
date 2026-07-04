/* Runtime dump - NSURLCache
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLCache : NSObject
{
    NSURLCacheInternal * _internal;
}

@property unsigned int memoryCapacity;
@property unsigned int diskCapacity;
@property (readonly) unsigned int currentMemoryUsage;
@property (readonly) unsigned int currentDiskUsage;

+ (NSURLCache *)sharedURLCache;
+ (void)setSharedURLCache:(NSObject *)arg0;

- (unsigned int)currentDiskUsage;
- (void)storeCachedResponse:(NSURLResponse *)arg0 forDataTask:(NSObject *)arg1;
- (NSURLCache *)initWithMemoryCapacity:(unsigned int)arg0 diskCapacity:(unsigned int)arg1 diskPath:(NSString *)arg2;
- (void)removeAllCachedResponses;
- (void)removeCachedResponseForRequest:(NSURLRequest *)arg0;
- (unsigned int)memoryCapacity;
- (unsigned int)diskCapacity;
- (unsigned int)currentMemoryUsage;
- (void)getCachedResponseForDataTask:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)removeCachedResponseForDataTask:(NSObject *)arg0;
- (NSCache *)_initWithExistingCFURLCache:(struct _CFURLCache *)arg0;
- (NSString *)_diskCacheDefaultPath;
- (id)_cacheDirectory;
- (struct _CFCachedURLResponse *)_nscfBridgeURLCacheCopyResponseForRequest:(NSURLRequest *)arg0;
- (void)_nscfBridgeURLCacheStoreCachedResponse:(struct _CFCachedURLResponse *)arg0 forRequest:(struct __CFCachedURLResponse *)arg1;
- (long)_nscfBridgeURLCacheDiskCapacity;
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long)arg0;
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long)arg0;
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(NSURLRequest *)arg0;
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;
- (long)_nscfBridgeURLCacheMemoryCapacity;
- (long)_nscfBridgeURLCacheCurrentMemoryUsage;
- (long)_nscfBridgeURLCacheCurrentDiskUsage;
- (NSString *)_initWithIdentifier:(NSString *)arg0 memoryCapacity:(int)arg1 diskCapacity:(int)arg2 private:(BOOL)arg3;
- (NSURLCache *)initWithExistingSharedCFURLCache:(struct _CFURLCache *)arg0;
- (NSURLCache *)_initWithMemoryCapacity:(unsigned int)arg0 diskCapacity:(unsigned int)arg1 relativePath:(NSString *)arg2;
- (void)flushWithCompletion:(id /* block */)arg0;
- (void)removeCachedResponsesSinceDate:(NSDate *)arg0;
- (struct _CFURLCache *)_CFURLCache;
- (void)setMemoryCapacity:(unsigned int)arg0;
- (void)setDiskCapacity:(unsigned int)arg0;
- (void)storeCachedResponse:(NSURLResponse *)arg0 forRequest:(NSURLRequest *)arg1;
- (void)dealloc;
- (NSURLCache *)init;
- (NSURLRequest *)cachedResponseForRequest:(NSURLRequest *)arg0;

@end
