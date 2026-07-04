/* Runtime dump - GEOPDAmenities
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAmenities : PBCodable <NSCopying>
{
    struct ? * _amenitys;
    unsigned int _amenitysCount;
    unsigned int _amenitysSpace;
}

@property (readonly, nonatomic) unsigned int amenitysCount;
@property (readonly, nonatomic) struct ? * amenitys;

+ (NSData *)amentiesForPlaceData:(NSData *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDAmenities *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)amenitysCount;
- (struct ? *)amenitys;
- (char)hasAmenityType:(int)arg0;
- (char)valueForAmenityType:(int)arg0;
- (void)clearAmenitys;
- (struct ?)amenityAtIndex:(SEL)arg0;
- (void)addAmenity:(struct ?)arg0;
- (void)setAmenitys:(struct ? *)arg0 count:(NSObject *)arg1;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
