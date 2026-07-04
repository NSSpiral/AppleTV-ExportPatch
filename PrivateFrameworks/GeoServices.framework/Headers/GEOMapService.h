/* Runtime dump - GEOMapService
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapService : NSObject
{
    NSLock * _preferredLanguagesLock;
    NSArray * _preferredLanguages;
}

+ (GEOMapService *)sharedService;

- (void)dealloc;
- (GEOMapService *)init;
- (void)applyRAPUpdatedMapItems:(NSArray *)arg0;
- (int)localSearchProviderID;
- (NSString *)directionsURL;
- (NSString *)searchURL;
- (NSObject *)_ticketForSearchQuery:(NSObject *)arg0 hint:(id)arg1 maxResults:(unsigned int)arg2 suppressResultsRequiringAttribution:(char)arg3 traits:(NSArray *)arg4;
- (id)_ticketForMUIDs:(id)arg0 traits:(NSArray *)arg1;
- (NSString *)_ticketForForwardGeocodeAddress:(NSString *)arg0 maxResults:(unsigned int)arg1 traits:(NSArray *)arg2;
- (id)_ticketForReverseGeocodeCoordinate:(struct ?)arg0 includeEntryPoints:(char)arg1 shiftLocationsIfNeeded:(char)arg2 traits:(NSArray *)arg3;
- (id)_ticketForBatchReverseGeocodeLocations:(id)arg0 shiftLocationsIfNeeded:(char)arg1 additionalPlaceTypes:(int *)arg2 additionalPlaceTypesCount:(unsigned int)arg3 traits:(NSArray *)arg4;
- (NSObject *)_ticketForSearchQuery:(NSObject *)arg0 completionItem:(NSObject *)arg1 maxResults:(unsigned int)arg2 suppressResultsRequiringAttribution:(char)arg3 traits:(NSArray *)arg4;
- (id)_ticketForAutoCompleteFragment:(id)arg0 entriesType:(int)arg1 listType:(int)arg2 traits:(NSArray *)arg3;
- (NSArray *)_preferredLanguages;
- (id)ticketForMUIDs:(id)arg0 resultProviderID:(int)arg1 includeETA:(char)arg2 traits:(NSArray *)arg3;
- (NSArray *)defaultTraits;
- (NSString *)ticketForForwardGeocodeString:(NSString *)arg0 maxResults:(unsigned int)arg1 traits:(NSArray *)arg2;
- (NSDictionary *)ticketForForwardGeocodeAddressDictionary:(NSDictionary *)arg0 maxResults:(unsigned int)arg1 traits:(NSArray *)arg2;
- (id)ticketForReverseGeocodeCoordinate:(struct ?)arg0 includeEntryPoints:(char)arg1 shiftLocationsIfNeeded:(char)arg2 includeETA:(char)arg3 traits:(NSArray *)arg4;
- (id)_searchable_ticketForReverseGeocodeCoordinate:(struct ?)arg0 includeEntryPoints:(char)arg1 shiftLocationsIfNeeded:(char)arg2 includeETA:(char)arg3 traits:(NSArray *)arg4;
- (id)ticketForReverseGeocodeCoordinate:(struct ?)arg0 includeETA:(char)arg1 shiftLocationsIfNeeded:(char)arg2 traits:(NSArray *)arg3;
- (NSObject *)ticketForSearchQuery:(NSObject *)arg0 completionItem:(NSObject *)arg1 maxResults:(unsigned int)arg2 suppressResultsRequiringAttribution:(char)arg3 includeETA:(char)arg4 traits:(NSArray *)arg5;
- (id)_ticketForAutocompleteFragment:(id)arg0 type:(int)arg1 traits:(NSArray *)arg2;
- (id)_ticketForFragment:(id)arg0 entriesType:(int)arg1 listType:(int)arg2 traits:(NSArray *)arg3;
- (void)submitUsageForTraits:(NSArray *)arg0 mapItem:(MKMapItem *)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
- (void)trackMapItem:(NSObject *)arg0;
- (id)ticketForPhoneNumbers:(id)arg0 allowCellularDataForLookup:(char)arg1 traits:(NSArray *)arg2;
- (NSString *)_cl_ticketForForwardGeocodeString:(NSString *)arg0 maxResults:(unsigned int)arg1 traits:(NSArray *)arg2;
- (NSDictionary *)_cl_ticketForForwardGeocodeAddressDictionary:(NSDictionary *)arg0 maxResults:(unsigned int)arg1 traits:(NSArray *)arg2;
- (NSObject *)_cl_ticketForReverseGeocodeLocation:(NSObject *)arg0 traits:(NSArray *)arg1;
- (id)ticketForBatchReverseGeocodeLocations:(id)arg0 shiftLocationsIfNeeded:(char)arg1 traits:(NSArray *)arg2;
- (id)ticketForMerchantCode:(id)arg0 rawMerchantCode:(NSString *)arg1 paymentNetwork:(NSString *)arg2 transactionDate:(NSDate *)arg3 transactionLocation:(GEOLocation *)arg4 traits:(NSArray *)arg5;
- (id)ticketForProblem:(id)arg0 placeForProblemContext:(NSObject *)arg1 placeForStartDirectionsSearchInput:(NSObject *)arg2 placeForEndDirectionsSearchInput:(NSObject *)arg3 traits:(NSArray *)arg4;
- (NSObject *)ticketForOptInToProblemSubmissionID:(NSObject *)arg0 allowNotificationsAtPushToken:(NSString *)arg1 allowContactBackAtEmailAddress:(NSString *)arg2 traits:(NSArray *)arg3;
- (NSObject *)ticketForSearchQuery:(NSObject *)arg0 completionItem:(NSObject *)arg1 maxResults:(unsigned int)arg2 includeETA:(char)arg3 traits:(NSArray *)arg4;
- (id)ticketForMapItemToRefine:(id)arg0 traits:(NSArray *)arg1;
- (NSString *)ticketForCanonicalLocationSearchQueryString:(NSString *)arg0 traits:(NSArray *)arg1;
- (id)ticketForRefinementFromCoordinate:(struct ?)arg0 address:(NSString *)arg1 placeName:(NSString *)arg2 traits:(NSArray *)arg3;
- (NSObject *)ticketForURLQuery:(NSObject *)arg0 coordinate:(struct ?)arg1 muid:(unsigned long long)arg2 resultProviderId:(int)arg3 maxResults:(unsigned int)arg4 traits:(NSArray *)arg5;
- (id)ticketForInterleavedInstantSearchFragment:(id)arg0 traits:(NSArray *)arg1;
- (id)ticketForInterleavedAutoCompleteSearchFragment:(id)arg0 traits:(NSArray *)arg1;
- (id)ticketForInterleavedLocalitiesAndLandmarksSearchFragment:(id)arg0 traits:(NSArray *)arg1;
- (id)ticketForSectionedInstantSearchFragment:(id)arg0 traits:(NSArray *)arg1;
- (id)ticketForSectionedAutoCompleteSearchFragment:(id)arg0 traits:(NSArray *)arg1;
- (id)ticketForSectionedLocalitiesAndLandmarksSearchFragment:(id)arg0 traits:(NSArray *)arg1;
- (void)submitUsageForTraits:(NSArray *)arg0;
- (void)submitUsageForTraits:(NSArray *)arg0 flyoverAnimationID:(unsigned long long)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
- (void)_geoMapItemsForResponseData:(NSData *)arg0 handler:(id /* block */)arg1;
- (NSData *)_geoMapItemForData:(NSData *)arg0;
- (id)_geoMapItemsForUpdatedPlacesInResolution:(id)arg0;
- (NSData *)_geoMapItemForData:(NSData *)arg0 withSource:(unsigned int)arg1;
- (NSString *)ticketForForwardGeocodeAddress:(NSString *)arg0 maxResults:(unsigned int)arg1 traits:(NSArray *)arg2;
- (id)ticketForBatchReverseGeocodeLocations:(id)arg0 shiftLocationsIfNeeded:(char)arg1 additionalPlaceTypes:(int *)arg2 additionalPlaceTypesCount:(unsigned int)arg3 traits:(NSArray *)arg4;
- (void)_localeChanged:(NSNotification *)arg0;
- (id)ticketForMUIDs:(id)arg0 includeETA:(char)arg1 traits:(NSArray *)arg2;

@end
