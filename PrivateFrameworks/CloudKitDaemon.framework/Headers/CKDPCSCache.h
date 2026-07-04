/* Runtime dump - CKDPCSCache
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSCache : NSObject
{
    id _fetchPCSItemForCacheBlock;
    NSMutableDictionary * _itemIDToPCSCacheItem;
    NSObject<OS_dispatch_queue> * _itemPCSFetchQueue;
}

@property (copy, nonatomic) id fetchPCSItemForCacheBlock;
@property (retain, nonatomic) NSMutableDictionary * itemIDToPCSCacheItem;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * itemPCSFetchQueue;

- (CKDPCSCache *)init;
- (void).cxx_destruct;
- (void)clearCache;
- (void)setFetchPCSItemForCacheBlock:(id /* block */)arg0;
- (void)pcsDataFetched:(id)arg0 forItemWithID:(int)arg1 error:(NSError *)arg2;
- (void)fetchPCSForItemWithID:(int)arg0 operation:(ISURLOperation *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setPCSData:(NSData *)arg0 forItemWithID:(int)arg1;
- (void)_initCache;
- (NSObject<OS_dispatch_queue> *)itemPCSFetchQueue;
- (NSMutableDictionary *)itemIDToPCSCacheItem;
- (id /* block */)fetchPCSItemForCacheBlock;
- (void)setItemIDToPCSCacheItem:(NSMutableDictionary *)arg0;
- (void)setItemPCSFetchQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
