/* Runtime dump - GEOPDComponentValue
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDComponentValue : PBCodable <NSCopying>
{
    GEOPDRoadAccessInfo * _accessInfo;
    GEOPDAddress * _address;
    GEOPDAmenities * _amenities;
    GEOPDBounds * _bounds;
    GEOPDBusinessClaim * _businessClaim;
    GEOPDEntity * _entity;
    GEOPDETA * _eta;
    GEOPDFlyover * _flyover;
    GEOPDHours * _hours;
    GEOPDPhoto * _photo;
    GEOPDPlaceInfo * _placeInfo;
    GEOPDRating * _rating;
    GEOPDRawAttribute * _rawAttribute;
    GEOPDReview * _review;
    GEOPDStyleAttributes * _styleAttributes;
}

@property (readonly, nonatomic) char hasEntity;
@property (retain, nonatomic) GEOPDEntity * entity;
@property (readonly, nonatomic) char hasPlaceInfo;
@property (retain, nonatomic) GEOPDPlaceInfo * placeInfo;
@property (readonly, nonatomic) char hasAccessInfo;
@property (retain, nonatomic) GEOPDRoadAccessInfo * accessInfo;
@property (readonly, nonatomic) char hasBounds;
@property (retain, nonatomic) GEOPDBounds * bounds;
@property (readonly, nonatomic) char hasAddress;
@property (retain, nonatomic) GEOPDAddress * address;
@property (readonly, nonatomic) char hasRating;
@property (retain, nonatomic) GEOPDRating * rating;
@property (readonly, nonatomic) char hasReview;
@property (retain, nonatomic) GEOPDReview * review;
@property (readonly, nonatomic) char hasPhoto;
@property (retain, nonatomic) GEOPDPhoto * photo;
@property (readonly, nonatomic) char hasHours;
@property (retain, nonatomic) GEOPDHours * hours;
@property (readonly, nonatomic) char hasEta;
@property (retain, nonatomic) GEOPDETA * eta;
@property (readonly, nonatomic) char hasFlyover;
@property (retain, nonatomic) GEOPDFlyover * flyover;
@property (readonly, nonatomic) char hasRawAttribute;
@property (retain, nonatomic) GEOPDRawAttribute * rawAttribute;
@property (readonly, nonatomic) char hasAmenities;
@property (retain, nonatomic) GEOPDAmenities * amenities;
@property (readonly, nonatomic) char hasStyleAttributes;
@property (retain, nonatomic) GEOPDStyleAttributes * styleAttributes;
@property (readonly, nonatomic) char hasBusinessClaim;
@property (retain, nonatomic) GEOPDBusinessClaim * businessClaim;

- (void)dealloc;
- (GEOPDBounds *)bounds;
- (void)setBounds:(GEOPDBounds *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDComponentValue *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasBounds;
- (void)setAddress:(GEOPDAddress *)arg0;
- (GEOPDAddress *)address;
- (char)hasAddress;
- (char)hasRating;
- (GEOPDRating *)rating;
- (GEOPDPlaceInfo *)placeInfo;
- (char)hasHours;
- (GEOPDHours *)hours;
- (char)hasReview;
- (GEOPDReview *)review;
- (char)hasPhoto;
- (GEOPDPhoto *)photo;
- (GEOPDRoadAccessInfo *)accessInfo;
- (GEOPDFlyover *)flyover;
- (GEOPDAmenities *)amenities;
- (GEOPDBusinessClaim *)businessClaim;
- (void)setRating:(GEOPDRating *)arg0;
- (void)setStyleAttributes:(GEOPDStyleAttributes *)arg0;
- (void)setPlaceInfo:(GEOPDPlaceInfo *)arg0;
- (void)setAccessInfo:(GEOPDRoadAccessInfo *)arg0;
- (void)setReview:(GEOPDReview *)arg0;
- (void)setPhoto:(GEOPDPhoto *)arg0;
- (void)setHours:(GEOPDHours *)arg0;
- (void)setEta:(GEOPDETA *)arg0;
- (void)setFlyover:(GEOPDFlyover *)arg0;
- (void)setRawAttribute:(GEOPDRawAttribute *)arg0;
- (void)setAmenities:(GEOPDAmenities *)arg0;
- (void)setBusinessClaim:(GEOPDBusinessClaim *)arg0;
- (char)hasEntity;
- (char)hasPlaceInfo;
- (char)hasAccessInfo;
- (char)hasEta;
- (char)hasFlyover;
- (char)hasRawAttribute;
- (char)hasAmenities;
- (char)hasStyleAttributes;
- (char)hasBusinessClaim;
- (GEOPDRawAttribute *)rawAttribute;
- (void)setEntity:(GEOPDEntity *)arg0;
- (GEOPDEntity *)entity;
- (GEOPDETA *)eta;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (GEOPDStyleAttributes *)styleAttributes;

@end
