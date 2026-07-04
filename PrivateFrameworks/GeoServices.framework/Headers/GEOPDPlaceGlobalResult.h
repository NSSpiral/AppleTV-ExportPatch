/* Runtime dump - GEOPDPlaceGlobalResult
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceGlobalResult : PBCodable <NSCopying>
{
    GEOPDAutocompleteResult * _autocompleteResult;
    GEOPDCanonicalLocationSearchResult * _canonicalSearchResult;
    GEOPDGeocodingResult * _geocodingResult;
    GEOPDLocationDirectedSearchResult * _locationDirectedSearchResult;
    GEOPDMerchantLookupResult * _merchantLookupResult;
    GEOPDPlaceLookupResult * _placeLookupResult;
    GEOPDPlaceRefinementResult * _placeRefinementResult;
    GEOPDReverseGeocodingResult * _reverseGeocodingResult;
    GEOPDSearchResult * _searchResult;
    GEOPDSiriSearchResult * _siriSearchResult;
}

@property (readonly, nonatomic) char hasSearchResult;
@property (retain, nonatomic) GEOPDSearchResult * searchResult;
@property (readonly, nonatomic) char hasGeocodingResult;
@property (retain, nonatomic) GEOPDGeocodingResult * geocodingResult;
@property (readonly, nonatomic) char hasCanonicalSearchResult;
@property (retain, nonatomic) GEOPDCanonicalLocationSearchResult * canonicalSearchResult;
@property (readonly, nonatomic) char hasReverseGeocodingResult;
@property (retain, nonatomic) GEOPDReverseGeocodingResult * reverseGeocodingResult;
@property (readonly, nonatomic) char hasPlaceLookupResult;
@property (retain, nonatomic) GEOPDPlaceLookupResult * placeLookupResult;
@property (readonly, nonatomic) char hasMerchantLookupResult;
@property (retain, nonatomic) GEOPDMerchantLookupResult * merchantLookupResult;
@property (readonly, nonatomic) char hasPlaceRefinementResult;
@property (retain, nonatomic) GEOPDPlaceRefinementResult * placeRefinementResult;
@property (readonly, nonatomic) char hasSiriSearchResult;
@property (retain, nonatomic) GEOPDSiriSearchResult * siriSearchResult;
@property (readonly, nonatomic) char hasLocationDirectedSearchResult;
@property (retain, nonatomic) GEOPDLocationDirectedSearchResult * locationDirectedSearchResult;
@property (readonly, nonatomic) char hasAutocompleteResult;
@property (retain, nonatomic) GEOPDAutocompleteResult * autocompleteResult;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDPlaceGlobalResult *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setSearchResult:(GEOPDSearchResult *)arg0;
- (void)setGeocodingResult:(GEOPDGeocodingResult *)arg0;
- (void)setCanonicalSearchResult:(GEOPDCanonicalLocationSearchResult *)arg0;
- (void)setReverseGeocodingResult:(GEOPDReverseGeocodingResult *)arg0;
- (void)setPlaceLookupResult:(GEOPDPlaceLookupResult *)arg0;
- (void)setMerchantLookupResult:(GEOPDMerchantLookupResult *)arg0;
- (void)setPlaceRefinementResult:(GEOPDPlaceRefinementResult *)arg0;
- (void)setSiriSearchResult:(GEOPDSiriSearchResult *)arg0;
- (void)setLocationDirectedSearchResult:(GEOPDLocationDirectedSearchResult *)arg0;
- (void)setAutocompleteResult:(GEOPDAutocompleteResult *)arg0;
- (char)hasSearchResult;
- (char)hasGeocodingResult;
- (char)hasCanonicalSearchResult;
- (char)hasReverseGeocodingResult;
- (char)hasPlaceLookupResult;
- (char)hasMerchantLookupResult;
- (char)hasPlaceRefinementResult;
- (char)hasSiriSearchResult;
- (char)hasLocationDirectedSearchResult;
- (char)hasAutocompleteResult;
- (GEOPDSearchResult *)searchResult;
- (GEOPDGeocodingResult *)geocodingResult;
- (GEOPDCanonicalLocationSearchResult *)canonicalSearchResult;
- (GEOPDReverseGeocodingResult *)reverseGeocodingResult;
- (GEOPDPlaceLookupResult *)placeLookupResult;
- (GEOPDMerchantLookupResult *)merchantLookupResult;
- (GEOPDPlaceRefinementResult *)placeRefinementResult;
- (GEOPDSiriSearchResult *)siriSearchResult;
- (GEOPDLocationDirectedSearchResult *)locationDirectedSearchResult;
- (GEOPDAutocompleteResult *)autocompleteResult;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
