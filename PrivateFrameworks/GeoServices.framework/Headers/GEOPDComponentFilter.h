/* Runtime dump - GEOPDComponentFilter
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDComponentFilter : PBCodable <NSCopying>
{
    GEOPDRoadAccessInfoFilter * _accessInfoFilter;
    GEOPDAddressFilter * _addressFilter;
    GEOPDAmenitiesFilter * _amenitiesFilter;
    GEOPDBoundsFilter * _boundsFilter;
    GEOPDBusinessClaimFilter * _businessClaimFilter;
    GEOPDEntityFilter * _entityFilter;
    GEOPDETAFilter * _etaFilter;
    GEOPDFlyoverFilter * _flyoverFilter;
    GEOPDHoursFilter * _hoursFilter;
    GEOPDPhotoFilter * _photoFilter;
    GEOPDPlaceInfoFilter * _placeInfoFilter;
    GEOPDRatingFilter * _ratingFilter;
    GEOPDRawAttributeFilter * _rawAttributeFilter;
    GEOPDReviewFilter * _reviewFilter;
    GEOPDStyleAttributesFilter * _styleAttributesFilter;
}

@property (readonly, nonatomic) char hasEntityFilter;
@property (retain, nonatomic) GEOPDEntityFilter * entityFilter;
@property (readonly, nonatomic) char hasPlaceInfoFilter;
@property (retain, nonatomic) GEOPDPlaceInfoFilter * placeInfoFilter;
@property (readonly, nonatomic) char hasAccessInfoFilter;
@property (retain, nonatomic) GEOPDRoadAccessInfoFilter * accessInfoFilter;
@property (readonly, nonatomic) char hasBoundsFilter;
@property (retain, nonatomic) GEOPDBoundsFilter * boundsFilter;
@property (readonly, nonatomic) char hasAddressFilter;
@property (retain, nonatomic) GEOPDAddressFilter * addressFilter;
@property (readonly, nonatomic) char hasRatingFilter;
@property (retain, nonatomic) GEOPDRatingFilter * ratingFilter;
@property (readonly, nonatomic) char hasReviewFilter;
@property (retain, nonatomic) GEOPDReviewFilter * reviewFilter;
@property (readonly, nonatomic) char hasPhotoFilter;
@property (retain, nonatomic) GEOPDPhotoFilter * photoFilter;
@property (readonly, nonatomic) char hasHoursFilter;
@property (retain, nonatomic) GEOPDHoursFilter * hoursFilter;
@property (readonly, nonatomic) char hasEtaFilter;
@property (retain, nonatomic) GEOPDETAFilter * etaFilter;
@property (readonly, nonatomic) char hasFlyoverFilter;
@property (retain, nonatomic) GEOPDFlyoverFilter * flyoverFilter;
@property (readonly, nonatomic) char hasRawAttributeFilter;
@property (retain, nonatomic) GEOPDRawAttributeFilter * rawAttributeFilter;
@property (readonly, nonatomic) char hasAmenitiesFilter;
@property (retain, nonatomic) GEOPDAmenitiesFilter * amenitiesFilter;
@property (readonly, nonatomic) char hasStyleAttributesFilter;
@property (retain, nonatomic) GEOPDStyleAttributesFilter * styleAttributesFilter;
@property (readonly, nonatomic) char hasBusinessClaimFilter;
@property (retain, nonatomic) GEOPDBusinessClaimFilter * businessClaimFilter;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDComponentFilter *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setEntityFilter:(GEOPDEntityFilter *)arg0;
- (void)setPlaceInfoFilter:(GEOPDPlaceInfoFilter *)arg0;
- (void)setAccessInfoFilter:(GEOPDRoadAccessInfoFilter *)arg0;
- (void)setBoundsFilter:(GEOPDBoundsFilter *)arg0;
- (void)setAddressFilter:(GEOPDAddressFilter *)arg0;
- (void)setRatingFilter:(GEOPDRatingFilter *)arg0;
- (void)setReviewFilter:(GEOPDReviewFilter *)arg0;
- (void)setPhotoFilter:(GEOPDPhotoFilter *)arg0;
- (void)setHoursFilter:(GEOPDHoursFilter *)arg0;
- (void)setEtaFilter:(GEOPDETAFilter *)arg0;
- (void)setFlyoverFilter:(GEOPDFlyoverFilter *)arg0;
- (void)setRawAttributeFilter:(GEOPDRawAttributeFilter *)arg0;
- (void)setAmenitiesFilter:(GEOPDAmenitiesFilter *)arg0;
- (void)setStyleAttributesFilter:(GEOPDStyleAttributesFilter *)arg0;
- (void)setBusinessClaimFilter:(GEOPDBusinessClaimFilter *)arg0;
- (char)hasEntityFilter;
- (char)hasPlaceInfoFilter;
- (char)hasAccessInfoFilter;
- (char)hasBoundsFilter;
- (char)hasAddressFilter;
- (char)hasRatingFilter;
- (char)hasReviewFilter;
- (char)hasPhotoFilter;
- (char)hasHoursFilter;
- (char)hasEtaFilter;
- (char)hasFlyoverFilter;
- (char)hasRawAttributeFilter;
- (char)hasAmenitiesFilter;
- (char)hasStyleAttributesFilter;
- (char)hasBusinessClaimFilter;
- (GEOPDEntityFilter *)entityFilter;
- (GEOPDPlaceInfoFilter *)placeInfoFilter;
- (GEOPDRoadAccessInfoFilter *)accessInfoFilter;
- (GEOPDBoundsFilter *)boundsFilter;
- (GEOPDAddressFilter *)addressFilter;
- (GEOPDRatingFilter *)ratingFilter;
- (GEOPDReviewFilter *)reviewFilter;
- (GEOPDPhotoFilter *)photoFilter;
- (GEOPDHoursFilter *)hoursFilter;
- (GEOPDETAFilter *)etaFilter;
- (GEOPDFlyoverFilter *)flyoverFilter;
- (GEOPDRawAttributeFilter *)rawAttributeFilter;
- (GEOPDAmenitiesFilter *)amenitiesFilter;
- (GEOPDStyleAttributesFilter *)styleAttributesFilter;
- (GEOPDBusinessClaimFilter *)businessClaimFilter;
- (GEOPDComponentFilter *)initEntityFilterWithSpokenNames;
- (GEOPDComponentFilter *)initETAFilterWithTraits:(NSArray *)arg0;
- (GEOPDComponentFilter *)initPhotoFilterWithTraits:(NSArray *)arg0;
- (GEOPDComponentFilter *)initReviewUserPhotoFilterWithTraits:(NSArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
