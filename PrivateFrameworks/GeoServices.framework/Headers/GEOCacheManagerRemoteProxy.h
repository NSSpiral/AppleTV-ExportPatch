/* Runtime dump - GEOCacheManagerRemoteProxy
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCacheManagerRemoteProxy : NSObject <GEOCacheManaging>
{
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (GEOCacheManagerRemoteProxy *)init;
- (void)versionsForDomains:(id)arg0 handler:(id /* block */)arg1;
- (void)checkHasExpiredWithInvalidationDatas:(id)arg0 handler:(id /* block */)arg1;
- (int)invalidationStateForPlace:(id)arg0;

@end
