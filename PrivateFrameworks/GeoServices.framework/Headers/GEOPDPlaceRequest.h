/* Runtime dump - GEOPDPlaceRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceRequest : PBRequest <NSCopying>
{
    GEOPDAnalyticMetadata * _analyticMetadata;
    GEOPDClientMetadata * _clientMetadata;
    NSMutableArray * _displayLocales;
    GEOPDPlaceRequestParameters * _placeRequestParameters;
    int _requestType;
    NSMutableArray * _requestedComponents;
    NSMutableArray * _spokenLocales;
    char _suppressResultsRequiringAttribution;
    struct ? _has;
}

@property (readonly, nonatomic) char hasAnalyticMetadata;
@property (retain, nonatomic) GEOPDAnalyticMetadata * analyticMetadata;
@property (readonly, nonatomic) char hasClientMetadata;
@property (retain, nonatomic) GEOPDClientMetadata * clientMetadata;
@property (retain, nonatomic) NSMutableArray * displayLocales;
@property (retain, nonatomic) NSMutableArray * spokenLocales;
@property (retain, nonatomic) NSMutableArray * requestedComponents;
@property (nonatomic) char hasSuppressResultsRequiringAttribution;
@property (nonatomic) char suppressResultsRequiringAttribution;
@property (nonatomic) char hasRequestType;
@property (nonatomic) int requestType;
@property (readonly, nonatomic) char hasPlaceRequestParameters;
@property (retain, nonatomic) GEOPDPlaceRequestParameters * placeRequestParameters;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDPlaceRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setHasRequestType:(char)arg0;
- (char)hasRequestType;
- (void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg0;
- (void)setClientMetadata:(GEOPDClientMetadata *)arg0;
- (void)setDisplayLocales:(NSMutableArray *)arg0;
- (void)setSpokenLocales:(NSMutableArray *)arg0;
- (void)setRequestedComponents:(NSMutableArray *)arg0;
- (void)setPlaceRequestParameters:(GEOPDPlaceRequestParameters *)arg0;
- (void)addDisplayLocale:(NSObject *)arg0;
- (void)addSpokenLocale:(NSObject *)arg0;
- (void)addRequestedComponent:(id)arg0;
- (unsigned int)displayLocalesCount;
- (void)clearDisplayLocales;
- (NSObject *)displayLocaleAtIndex:(unsigned int)arg0;
- (unsigned int)spokenLocalesCount;
- (void)clearSpokenLocales;
- (NSObject *)spokenLocaleAtIndex:(unsigned int)arg0;
- (unsigned int)requestedComponentsCount;
- (void)clearRequestedComponents;
- (NSObject *)requestedComponentAtIndex:(unsigned int)arg0;
- (char)hasAnalyticMetadata;
- (char)hasClientMetadata;
- (void)setSuppressResultsRequiringAttribution:(char)arg0;
- (void)setHasSuppressResultsRequiringAttribution:(char)arg0;
- (char)hasSuppressResultsRequiringAttribution;
- (char)hasPlaceRequestParameters;
- (GEOPDAnalyticMetadata *)analyticMetadata;
- (GEOPDClientMetadata *)clientMetadata;
- (NSMutableArray *)displayLocales;
- (NSMutableArray *)spokenLocales;
- (NSMutableArray *)requestedComponents;
- (char)suppressResultsRequiringAttribution;
- (GEOPDPlaceRequestParameters *)placeRequestParameters;
- (GEOPDPlaceRequest *)initWithMUIDs:(id)arg0 resultProviderID:(int)arg1 includeETA:(char)arg2 traits:(NSArray *)arg3;
- (GEOPDPlaceRequest *)initWithMapItemToRefine:(id)arg0 traits:(NSArray *)arg1;
- (char)isForwardGeocoderRequest;
- (GEOPDPlaceRequest *)initWithForwardGeocodeAddress:(NSString *)arg0 maxResults:(unsigned int)arg1 traits:(NSArray *)arg2;
- (GEOPDPlaceRequest *)initWithForwardGeocodeAddressString:(NSString *)arg0 maxResults:(unsigned int)arg1 traits:(NSArray *)arg2;
- (GEOPDPlaceRequest *)initWithReverseGeocodeCoordinate:(struct ?)arg0 includeEntryPoints:(char)arg1 includeETA:(char)arg2 traits:(NSArray *)arg3;
- (GEOPDPlaceRequest *)initWithMerchantCode:(NSString *)arg0 rawMerchantCode:(NSString *)arg1 paymentNetwork:(NSString *)arg2 transactionDate:(NSDate *)arg3 transactionLocation:(GEOLocation *)arg4 traits:(NSArray *)arg5;
- (GEOPDPlaceRequest *)initWithSearchQuery:(ATVDataQuery *)arg0 entryMetadata:(NSDictionary *)arg1 metadata:(NSDictionary *)arg2 autocompleteEntry:(GEOPDAutocompleteEntry *)arg3 maxResults:(unsigned int)arg4 suppressResultsRequiringAttribution:(char)arg5 includeETA:(char)arg6 traits:(NSArray *)arg7;
- (GEOPDPlaceRequest *)initWithCanonicalLocationSearchQueryString:(NSString *)arg0 traits:(NSArray *)arg1;
- (GEOPDPlaceRequest *)initWithCoordinateHint:(struct ?)arg0 addressHint:(GEOStructuredAddress *)arg1 placeNameHint:(NSString *)arg2 traits:(NSArray *)arg3;
- (GEOPDPlaceRequest *)initWithSearchURLQuery:(NSString *)arg0 coordinate:(struct ?)arg1 muid:(unsigned long long)arg2 resultProviderId:(int)arg3 maxResults:(unsigned int)arg4 traits:(NSArray *)arg5;
- (GEOPDPlaceRequest *)initWithSearchURLQuery:(NSString *)arg0 coordinate:(struct ?)arg1 maxResults:(unsigned int)arg2 traits:(NSArray *)arg3;
- (GEOPDPlaceRequest *)initWithAutocompleteFragment:(id)arg0 type:(int)arg1 traits:(NSArray *)arg2;
- (GEOPDPlaceRequest *)initWithTraits:(NSArray *)arg0 count:(unsigned int)arg1 includeETA:(char)arg2 includeEntryPoints:(char)arg3;
- (void)setRequestType:(int)arg0;
- (int)requestType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
