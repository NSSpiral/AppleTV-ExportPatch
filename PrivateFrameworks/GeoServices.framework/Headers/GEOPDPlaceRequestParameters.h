/* Runtime dump - GEOPDPlaceRequestParameters
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceRequestParameters : PBCodable <NSCopying>
{
    GEOPDAutocompleteParameters * _autocompleteParameters;
    GEOPDCanonicalLocationSearchParameters * _canonicalLocationSearchParameters;
    GEOPDGeocodingParameters * _geocodingParameters;
    GEOPDLocationDirectedSearchParameters * _locationDirectedSearchParameters;
    GEOPDMerchantLookupParameters * _merchantLookupParameters;
    GEOPDPlaceLookupParameters * _placeLookupParameters;
    GEOPDPlaceRefinementParameters * _placeRefinementParameters;
    GEOPDReverseGeocodingParameters * _reverseGeocodingParameters;
    GEOPDSearchParameters * _searchParameters;
    GEOPDSiriSearchParameters * _siriSearchParameters;
}

@property (readonly, nonatomic) char hasSearchParameters;
@property (retain, nonatomic) GEOPDSearchParameters * searchParameters;
@property (readonly, nonatomic) char hasGeocodingParameters;
@property (retain, nonatomic) GEOPDGeocodingParameters * geocodingParameters;
@property (readonly, nonatomic) char hasCanonicalLocationSearchParameters;
@property (retain, nonatomic) GEOPDCanonicalLocationSearchParameters * canonicalLocationSearchParameters;
@property (readonly, nonatomic) char hasReverseGeocodingParameters;
@property (retain, nonatomic) GEOPDReverseGeocodingParameters * reverseGeocodingParameters;
@property (readonly, nonatomic) char hasPlaceLookupParameters;
@property (retain, nonatomic) GEOPDPlaceLookupParameters * placeLookupParameters;
@property (readonly, nonatomic) char hasMerchantLookupParameters;
@property (retain, nonatomic) GEOPDMerchantLookupParameters * merchantLookupParameters;
@property (readonly, nonatomic) char hasPlaceRefinementParameters;
@property (retain, nonatomic) GEOPDPlaceRefinementParameters * placeRefinementParameters;
@property (readonly, nonatomic) char hasSiriSearchParameters;
@property (retain, nonatomic) GEOPDSiriSearchParameters * siriSearchParameters;
@property (readonly, nonatomic) char hasLocationDirectedSearchParameters;
@property (retain, nonatomic) GEOPDLocationDirectedSearchParameters * locationDirectedSearchParameters;
@property (readonly, nonatomic) char hasAutocompleteParameters;
@property (retain, nonatomic) GEOPDAutocompleteParameters * autocompleteParameters;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDPlaceRequestParameters *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (GEOPDPlaceLookupParameters *)placeLookupParameters;
- (GEOPDPlaceRequestParameters *)initWithMapItemToRefine:(id)arg0 traits:(NSArray *)arg1;
- (GEOPDGeocodingParameters *)geocodingParameters;
- (GEOPDReverseGeocodingParameters *)reverseGeocodingParameters;
- (char)hasSearchParameters;
- (GEOPDSearchParameters *)searchParameters;
- (char)hasPlaceRefinementParameters;
- (GEOPDPlaceRefinementParameters *)placeRefinementParameters;
- (char)hasLocationDirectedSearchParameters;
- (GEOPDLocationDirectedSearchParameters *)locationDirectedSearchParameters;
- (GEOPDPlaceRequestParameters *)initWithForwardGeocodeAddress:(NSString *)arg0 maxResults:(unsigned int)arg1 traits:(NSArray *)arg2;
- (GEOPDPlaceRequestParameters *)initWithForwardGeocodeAddressString:(NSString *)arg0 maxResults:(unsigned int)arg1 traits:(NSArray *)arg2;
- (GEOPDPlaceRequestParameters *)initWithCoordinateHint:(struct ?)arg0 addressHint:(GEOStructuredAddress *)arg1 placeNameHint:(NSString *)arg2 traits:(NSArray *)arg3;
- (void)setSearchParameters:(GEOPDSearchParameters *)arg0;
- (void)setGeocodingParameters:(GEOPDGeocodingParameters *)arg0;
- (void)setCanonicalLocationSearchParameters:(GEOPDCanonicalLocationSearchParameters *)arg0;
- (void)setReverseGeocodingParameters:(GEOPDReverseGeocodingParameters *)arg0;
- (void)setPlaceLookupParameters:(GEOPDPlaceLookupParameters *)arg0;
- (void)setMerchantLookupParameters:(GEOPDMerchantLookupParameters *)arg0;
- (void)setPlaceRefinementParameters:(GEOPDPlaceRefinementParameters *)arg0;
- (void)setSiriSearchParameters:(GEOPDSiriSearchParameters *)arg0;
- (void)setLocationDirectedSearchParameters:(GEOPDLocationDirectedSearchParameters *)arg0;
- (void)setAutocompleteParameters:(GEOPDAutocompleteParameters *)arg0;
- (char)hasGeocodingParameters;
- (char)hasCanonicalLocationSearchParameters;
- (char)hasReverseGeocodingParameters;
- (char)hasPlaceLookupParameters;
- (char)hasMerchantLookupParameters;
- (char)hasSiriSearchParameters;
- (char)hasAutocompleteParameters;
- (GEOPDCanonicalLocationSearchParameters *)canonicalLocationSearchParameters;
- (GEOPDMerchantLookupParameters *)merchantLookupParameters;
- (GEOPDSiriSearchParameters *)siriSearchParameters;
- (GEOPDAutocompleteParameters *)autocompleteParameters;
- (GEOPDPlaceRequestParameters *)initWithSearchURLQuery:(NSString *)arg0 coordinate:(struct ?)arg1 muid:(unsigned long long)arg2 resultProviderId:(int)arg3;
- (GEOPDPlaceRequestParameters *)initWithSearchURLQuery:(NSString *)arg0 coordinate:(struct ?)arg1 maxResults:(unsigned int)arg2;
- (GEOPDPlaceRequestParameters *)initWithSearchQuery:(ATVDataQuery *)arg0 entryMetadata:(NSDictionary *)arg1 metadata:(NSDictionary *)arg2 autocompleteEntry:(GEOPDAutocompleteEntry *)arg3 maxResults:(unsigned int)arg4 traits:(NSArray *)arg5;
- (GEOPDPlaceRequestParameters *)initWithMUIDs:(id)arg0 resultProviderID:(int)arg1;
- (GEOPDPlaceRequestParameters *)initWithMerchantCode:(NSString *)arg0 rawMerchantCode:(NSString *)arg1 paymentNetwork:(NSString *)arg2 transactionDate:(NSDate *)arg3 transactionLocation:(GEOLocation *)arg4;
- (GEOPDPlaceRequestParameters *)initWithReverseGeocodeCoordinate:(struct ?)arg0;
- (GEOPDPlaceRequestParameters *)initWithCanonicalLocationSearchQueryString:(NSString *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
