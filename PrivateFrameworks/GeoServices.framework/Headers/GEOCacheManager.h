/* Runtime dump - GEOCacheManager
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCacheManager : NSObject
{
    <GEOCacheManaging> * _proxy;
}

+ (void)useLocalProxy;
+ (void)useRemoteProxy;
+ (char)_isLocalProxy;
+ (GEOCacheManager *)sharedManager;

- (void)dealloc;
- (GEOCacheManager *)init;
- (void)versionsForDomains:(id)arg0 handler:(id /* block */)arg1;
- (void)checkHasExpiredWithInvalidationDatas:(id)arg0 handler:(id /* block */)arg1;
- (int)invalidationStateForPlace:(id)arg0;

@end
