/* Runtime dump - GEOMatchedToken
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMatchedToken : PBCodable <NSCopying>
{
    struct ? _geoIds;
    int _geoType;
    NSString * _matchedToken;
    struct ? _has;
}

@property (retain, nonatomic) NSString * matchedToken;
@property (nonatomic) char hasGeoType;
@property (nonatomic) int geoType;
@property (readonly, nonatomic) unsigned int geoIdsCount;
@property (readonly, nonatomic) unsigned long long * geoIds;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOMatchedToken *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)geoIdsCount;
- (void)clearGeoIds;
- (unsigned long long)geoIdAtIndex:(unsigned int)arg0;
- (void)addGeoId:(unsigned long long)arg0;
- (unsigned long long *)geoIds;
- (void)setGeoIds:(unsigned long long *)arg0 count:(unsigned int)arg1;
- (void)setMatchedToken:(NSString *)arg0;
- (void)setGeoType:(int)arg0;
- (void)setHasGeoType:(char)arg0;
- (char)hasGeoType;
- (NSString *)matchedToken;
- (int)geoType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
