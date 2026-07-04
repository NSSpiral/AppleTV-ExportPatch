/* Runtime dump - GEOPDPlaceInfo
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceInfo : PBCodable <NSCopying>
{
    double _area;
    GEOLatLng * _center;
    GEOTimezone * _timezone;
    char _isApproximateCenter;
    struct ? _has;
}

@property (readonly, nonatomic) char hasCenter;
@property (retain, nonatomic) GEOLatLng * center;
@property (nonatomic) char hasArea;
@property (nonatomic) double area;
@property (readonly, nonatomic) char hasTimezone;
@property (retain, nonatomic) GEOTimezone * timezone;
@property (nonatomic) char hasIsApproximateCenter;
@property (nonatomic) char isApproximateCenter;

+ (NSData *)placeInfoForPlaceData:(NSData *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDPlaceInfo *)copyWithZone:(struct _NSZone *)arg0;
- (GEOLatLng *)center;
- (void)setCenter:(GEOLatLng *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasCenter;
- (void)setTimezone:(GEOTimezone *)arg0;
- (void)setArea:(double)arg0;
- (void)setHasArea:(char)arg0;
- (char)hasArea;
- (char)hasTimezone;
- (void)setIsApproximateCenter:(char)arg0;
- (void)setHasIsApproximateCenter:(char)arg0;
- (char)hasIsApproximateCenter;
- (double)area;
- (GEOTimezone *)timezone;
- (char)isApproximateCenter;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
