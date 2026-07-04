/* Runtime dump - GEORPCarPlayAuxiliaryControl
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPCarPlayAuxiliaryControl : PBCodable <NSCopying>
{
    GEOCarInfo * _carInfo;
}

@property (readonly, nonatomic) char hasCarInfo;
@property (retain, nonatomic) GEOCarInfo * carInfo;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPCarPlayAuxiliaryControl *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setCarInfo:(GEOCarInfo *)arg0;
- (char)hasCarInfo;
- (GEOCarInfo *)carInfo;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
