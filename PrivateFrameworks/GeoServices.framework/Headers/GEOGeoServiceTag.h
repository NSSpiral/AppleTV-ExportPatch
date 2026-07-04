/* Runtime dump - GEOGeoServiceTag
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGeoServiceTag : PBCodable <NSCopying>
{
    int _serviceType;
    NSString * _tag;
    struct ? _has;
}

@property (nonatomic) char hasServiceType;
@property (nonatomic) int serviceType;
@property (retain, nonatomic) NSString * tag;

+ (GEOGeoServiceTag *)defaultTag;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOGeoServiceTag *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)tag;
- (void)setTag:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)serviceType;
- (void)setHasServiceType:(char)arg0;
- (char)hasServiceType;
- (void)setServiceType:(int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
