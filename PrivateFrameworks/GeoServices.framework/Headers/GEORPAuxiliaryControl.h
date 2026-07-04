/* Runtime dump - GEORPAuxiliaryControl
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPAuxiliaryControl : PBCodable <NSCopying>
{
    GEORPCarPlayAuxiliaryControl * _car;
    GEORPWatchAuxiliaryControl * _watch;
}

@property (readonly, nonatomic) char hasWatch;
@property (retain, nonatomic) GEORPWatchAuxiliaryControl * watch;
@property (readonly, nonatomic) char hasCar;
@property (retain, nonatomic) GEORPCarPlayAuxiliaryControl * car;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPAuxiliaryControl *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setWatch:(GEORPWatchAuxiliaryControl *)arg0;
- (void)setCar:(GEORPCarPlayAuxiliaryControl *)arg0;
- (char)hasWatch;
- (char)hasCar;
- (GEORPWatchAuxiliaryControl *)watch;
- (GEORPCarPlayAuxiliaryControl *)car;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
