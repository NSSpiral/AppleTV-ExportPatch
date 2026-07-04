/* Runtime dump - GEOPlaceCardRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceCardRequester : NSObject <GEOPlaceDataProxy>
{
    <GEOPlaceDataProxy> * _proxy;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)useLocalProxy;
+ (void)useRemoteProxy;
+ (GEOPlaceCardRequester *)sharedRequester;

- (void)dealloc;
- (GEOPlaceCardRequester *)init;
- (void)shrinkToSize:(unsigned long long)arg0 finished:(id /* block */)arg1;
- (void)requestMUIDs:(id)arg0 resultProviderID:(int)arg1 includeETA:(char)arg2 traits:(NSArray *)arg3 requesterHandler:(id /* block */)arg4;
- (void)requestPhoneNumbers:(id)arg0 allowCellularDataForLookup:(char)arg1 traits:(NSArray *)arg2 requesterHandler:(id /* block */)arg3;
- (void)fetchAllCacheEntriesWithRequesterHandler:(GEORequester *)arg0;
- (void)trackPlaceData:(NSData *)arg0;
- (void)performPlaceDataRequest:(NSURLRequest *)arg0 traits:(NSArray *)arg1 timeout:(double)arg2 networkActivity:(/* block */ id)arg3 requesterHandler:(/* block */ id)arg4;
- (void)applyRAPUpdatedMapItems:(NSArray *)arg0;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)arg0;
- (void)requestMUIDs:(id)arg0 resultProviderID:(int)arg1 includeETA:(char)arg2 traits:(NSArray *)arg3 networkActivity:(/* block */ id)arg4 requesterHandler:(/* block */ id)arg5;
- (void)requestPhoneNumbers:(id)arg0 allowCellularDataForLookup:(char)arg1 traits:(NSArray *)arg2 networkActivity:(/* block */ id)arg3 requesterHandler:(/* block */ id)arg4;

@end
