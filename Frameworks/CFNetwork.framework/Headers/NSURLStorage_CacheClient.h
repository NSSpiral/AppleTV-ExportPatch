/* Runtime dump - NSURLStorage_CacheClient
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLStorage_CacheClient : NSObject <NSURLStorageCacheClient>
{
    NSXPCInterface * _netStoreInterface;
    NSXPCConnection * _networkStorageConnection;
    NSString * _taskManagerIdentifier;
    NSString * _path;
    struct __CFURLCache * _cfCache;
    NSData * _sandboxExtensionToken;
    int _storageSize;
    char _networkStorageConnectionInterrupted;
}

@property char networkStorageConnectionInterrupted;

- (void)deleteResponsesSinceDate:(NSDate *)arg0;
- (void)_disassociateCFURLCacheInstance;
- (void)setMinSizeForVMCachedResource:(int)arg0;
- (NSURLStorage_CacheClient *)initWithCache:(struct __CFURLCache *)arg0;
- (char)createStorageTaskManagerForPath:(NSString *)arg0 maxSize:(int)arg1 extension:(id *)arg2 withIdentifier:(NSString *)arg3;
- (void)copyAllPartitionNamesWithCompletionHandler:(id /* block */)arg0;
- (void)copyHostNamesForOptionalPartition:(id)arg0 handler:(id /* block */)arg1;
- (void)deleteAllHostNames:(id)arg0 forOptionalPartition:(id)arg1;
- (void)cachedResponseForKey:(NSString *)arg0 handler:(id /* block */)arg1;
- (int)currentDiskUsage;
- (void)deleteAllResponses;
- (void)addCachedResponseWithDictionary:(NSDictionary *)arg0 key:(NSString *)arg1;
- (void)deleteResponseForRequestWithKey:(NSString *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)notifyCachedURLResponseBecameFileBacked:(id)arg0 filePath:(NSString *)arg1 forUUID:(NSUUID *)arg2;
- (void)setNetworkStorageConnectionInterrupted:(char)arg0;
- (char)networkStorageConnectionInterrupted;
- (void)_reconnectWithStorageServer;
- (char)ensureNetworkStorageDaemonConnection;
- (void)_associateCFURLCacheInstance:(struct __CFURLCache *)arg0;
- (void)addCachedResponse:(NSURLResponse *)arg0 key:(NSString *)arg1;
- (void)dealloc;
- (void)setMaxSize:(int)arg0;
- (NSString *)getPath;

@end
