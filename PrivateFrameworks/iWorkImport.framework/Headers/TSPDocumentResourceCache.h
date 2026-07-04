/* Runtime dump - TSPDocumentResourceCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceCache : NSObject
{
    NSURL * _cacheURL;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _entries;
    long long _maxCacheSizeInBytes;
}

@property (nonatomic) long long maxCacheSizeInBytes;

+ (TSPDocumentResourceCache *)defaultCacheURL;
+ (TSPDocumentResourceCache *)sharedCache;

- (char)cacheDocumentResourceDigestString:(NSString *)arg0 extension:(id *)arg1 sourceURL:(NSURL *)arg2 fileSize:(long long)arg3 wasDownloaded:(char)arg4;
- (TSPDocumentResourceCache *)initWithCacheURL:(NSURL *)arg0;
- (void)reloadEntries;
- (NSString *)entryForDigestString:(NSString *)arg0;
- (void)shrinkCacheWithMaxCacheSizeInBytes:(long long)arg0;
- (void)enumerateEntriesFromCacheURLWithHandler:(id /* block */)arg0;
- (NSString *)URLForDocumentResourceDigestString:(NSString *)arg0;
- (char)beginDocumentResourceAccessForDigestString:(NSString *)arg0;
- (void)endDocumentResourceAccessForDigestString:(NSString *)arg0;
- (void)shrinkCache;
- (long long)maxCacheSizeInBytes;
- (void)setMaxCacheSizeInBytes:(long long)arg0;
- (TSPDocumentResourceCache *)init;
- (void).cxx_destruct;
- (void)clearCache;

@end
