/* Runtime dump - GEOCacheManagerLocalProxy
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCacheManagerLocalProxy : NSObject <GEOCacheManaging>
{
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (GEOCacheManagerLocalProxy *)init;
- (int)_invalidationDataHasExpired:(id)arg0;
- (int)_invalidationStateForTTL:(double)arg0 timestamp:(double)arg1 version:(unsigned int)arg2 versionDomains:(id)arg3;
- (char)_invalidationDataHasExpiredByVersion:(unsigned int)arg0 domains:(NSArray *)arg1;
- (char)_isKey:(NSString *)arg0 subsetOf:(id)arg1;
- (void)versionsForDomains:(id)arg0 handler:(id /* block */)arg1;
- (void)checkHasExpiredWithInvalidationDatas:(id)arg0 handler:(id /* block */)arg1;
- (int)invalidationStateForPlace:(id)arg0;

@end
