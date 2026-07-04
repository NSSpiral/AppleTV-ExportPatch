/* Runtime dump - SSAppPurchaseHistoryCache
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAppPurchaseHistoryCache : NSObject
{
    SSAccount * _account;
    SSDatabaseCache * _databaseCache;
    SSAppPurchaseHistoryDatabase * _purchaseHistoryDatabase;
}

- (void)dealloc;
- (SSAppPurchaseHistoryCache *)init;
- (SSAppPurchaseHistoryCache *)initWithAccount:(SSAccount *)arg0;
- (unsigned long long)purge:(unsigned long long)arg0;
- (unsigned long long)purgeableSpace;
- (id)allUncachedImages:(id)arg0;
- (id)allUncachedImages;
- (void)clearCacheForAdamID:(NSObject *)arg0;
- (char)setImageData:(NSData *)arg0 forAdamID:(NSObject *)arg1 imageToken:(NSString *)arg2;
- (NSObject *)imageDataForAdamID:(NSObject *)arg0;

@end
