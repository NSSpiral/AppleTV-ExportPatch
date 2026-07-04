/* Runtime dump - GEOPlaceDataLocalProxy
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataLocalProxy : NSObject <GEOPlaceDataProxy>
{
    NSMapTable * _pendingRequests;
    NSLock * _pendingRequestsLock;
    GEOPlaceDataCacheRegister * _cacheRegister;
    GEOPhoneNumberMUIDMapper * _phoneNumberMapper;
    NSMutableSet * _requestsInProgress;
    NSMutableOrderedSet * _placeHashes;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (GEOPlaceDataLocalProxy *)init;
- (void)shrinkToSize:(unsigned long long)arg0 finished:(id /* block */)arg1;
- (void)requestMUIDs:(id)arg0 resultProviderID:(int)arg1 includeETA:(char)arg2 traits:(NSArray *)arg3 requesterHandler:(id /* block */)arg4;
- (void)requestPhoneNumbers:(id)arg0 allowCellularDataForLookup:(char)arg1 traits:(NSArray *)arg2 requesterHandler:(id /* block */)arg3;
- (void)fetchAllCacheEntriesWithRequesterHandler:(GEORequester *)arg0;
- (void)trackPlaceData:(NSData *)arg0;
- (void)performPlaceDataRequest:(NSURLRequest *)arg0 traits:(NSArray *)arg1 timeout:(double)arg2 networkActivity:(/* block */ id)arg3 requesterHandler:(/* block */ id)arg4;
- (void)applyRAPUpdatedMapItems:(NSArray *)arg0;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)arg0;
- (void)cancelRequest:(_UIAsyncInvocation *)arg0;
- (void)_callHistoryRecentsClearedObserver:(NSObject *)arg0;
- (void)_privacyAndLocationSettingsResetObserver:(NSObject *)arg0;
- (int)_invalidationStateForPlace:(id)arg0;
- (void)startRequest:(NSURLRequest *)arg0 traits:(NSArray *)arg1 timeout:(double)arg2 finished:(id /* block */)arg3 networkActivity:(/* block */ id)arg4 error:(NSError *)arg5;
- (void)_requestMUIDsFromNetwork:(id)arg0 resultProviderID:(int)arg1 includeETA:(char)arg2 traits:(NSArray *)arg3 finished:(id /* block */)arg4 error:(/* block */ id)arg5;
- (void)_cachePlaceData:(NSData *)arg0 forKey:(struct _GEOTileKey)arg1 shouldOptimizeWritesToDisk:(char)arg2;
- (NSURLRequest *)_cachedPlaceForForwardGeocodeRequest:(NSURLRequest *)arg0;
- (void)_trackPlaceData:(NSData *)arg0 forGeocodingParameters:(NSDictionary *)arg1;
- (void)_resetPhoneNumberMapper;

@end
