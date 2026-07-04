/* Runtime dump - GEOLocationShiftResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftResponse : PBCodable <NSCopying>
{
    struct ? _shiftedPixel;
}

@property (readonly) struct ? shiftedCoordinate;
@property (nonatomic) struct ? shiftedPixel;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOLocationShiftResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (struct ?)shiftedPixel;
- (void)setShiftedPixel:(struct ?)arg0;
- (struct ?)shiftedCoordinate;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
