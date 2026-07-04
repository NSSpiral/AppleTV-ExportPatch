/* Runtime dump - MKMapService
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapService : NSObject
{
    NSArray * _activeInputModeLanguages;
    NSLock * _activeInputModesLock;
}

+ (MKMapService *)sharedService;

- (id)ticketForReverseGeocodeCoordinate:(struct ?)arg0 includeETA:(char)arg1 traits:(NSArray *)arg2;
- (NSString *)ticketForForwardGeocodeString:(NSString *)arg0 traits:(NSArray *)arg1;
- (void)submitUsageForTraitsWithAction:(int)arg0 mapItem:(MKMapItem *)arg1;
- (void)submitUsageForTraitsWithAction:(int)arg0 mapItem:(MKMapItem *)arg1 providerID:(NSObject *)arg2;
- (void)_invalidateActiveInputModeLanguages;
- (NSArray *)defaultTraitsWithTraits:(NSArray *)arg0;
- (NSArray *)_activeInputModeLanguages;
- (id)_ticketForReverseGeocodeCoordinate:(struct ?)arg0 includeEntryPoints:(char)arg1 includeETA:(char)arg2 traits:(NSArray *)arg3;
- (NSString *)ticketForForwardGeocodeAddress:(NSString *)arg0 traits:(NSArray *)arg1;
- (id)ticketForReverseGeocodeDroppedPinCoordinate:(struct ?)arg0 traits:(NSArray *)arg1;
- (NSObject *)_mk_ticketForSearchQuery:(NSObject *)arg0 completionItem:(NSObject *)arg1 traits:(NSArray *)arg2;
- (void)submitUsageForTraitsWithAction:(int)arg0;
- (void)submitUsageForTraitsWithAction:(int)arg0 flyoverAnimationID:(unsigned long long)arg1;
- (void)submitUsageForTraitsWithAction:(int)arg0 mapRegion:(GEOMapRegion *)arg1 zoomLevel:(double)arg2;
- (void)_mapItemsForResponseData:(NSData *)arg0 handler:(id /* block */)arg1;
- (id)ticketForProblem:(id)arg0 mapItemForProblemContext:(NSObject *)arg1 mapItemForStartDirectionsSearchInput:(NSObject *)arg2 mapitemForEndDirectionsSearchInput:(NSObject *)arg3 traits:(NSArray *)arg4;
- (id)mapItemsForUpdatedPlacesInResolution:(id)arg0;
- (void)dealloc;
- (MKMapService *)init;
- (void).cxx_destruct;
- (id)ticketForMUIDs:(id)arg0 resultProviderID:(int)arg1 includeETA:(char)arg2 traits:(NSArray *)arg3;
- (NSArray *)defaultTraits;
- (void)submitUsageForTraits:(NSArray *)arg0 mapItem:(MKMapItem *)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
- (id)ticketForPhoneNumbers:(id)arg0 allowCellularDataForLookup:(char)arg1 traits:(NSArray *)arg2;
- (id)ticketForMerchantCode:(id)arg0 rawMerchantCode:(NSString *)arg1 paymentNetwork:(NSString *)arg2 transactionDate:(NSDate *)arg3 transactionLocation:(GEOLocation *)arg4 traits:(NSArray *)arg5;
- (NSObject *)ticketForSearchQuery:(NSObject *)arg0 completionItem:(NSObject *)arg1 maxResults:(unsigned int)arg2 includeETA:(char)arg3 traits:(NSArray *)arg4;
- (id)ticketForMapItemToRefine:(id)arg0 traits:(NSArray *)arg1;
- (NSString *)ticketForCanonicalLocationSearchQueryString:(NSString *)arg0 traits:(NSArray *)arg1;
- (NSObject *)ticketForURLQuery:(NSObject *)arg0 coordinate:(struct ?)arg1 muid:(unsigned long long)arg2 resultProviderId:(int)arg3 maxResults:(unsigned int)arg4 traits:(NSArray *)arg5;
- (void)submitUsageForTraits:(NSArray *)arg0;
- (id)ticketForMUIDs:(id)arg0 includeETA:(char)arg1 traits:(NSArray *)arg2;

@end
