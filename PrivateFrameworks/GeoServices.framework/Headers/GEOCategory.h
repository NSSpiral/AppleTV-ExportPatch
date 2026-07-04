/* Runtime dump - GEOCategory
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCategory : PBCodable <NSCopying>
{
    long long _geoOntologyId;
    NSString * _alias;
    int _level;
    NSMutableArray * _localizedNames;
    struct ? _has;
}

@property (retain, nonatomic) NSString * alias;
@property (nonatomic) int level;
@property (nonatomic) char hasGeoOntologyId;
@property (nonatomic) long long geoOntologyId;
@property (retain, nonatomic) NSMutableArray * localizedNames;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOCategory *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLevel:(int)arg0;
- (int)level;
- (NSDictionary *)dictionaryRepresentation;
- (void)setAlias:(NSString *)arg0;
- (NSString *)alias;
- (NSMutableArray *)localizedNames;
- (void)addLocalizedNames:(id)arg0;
- (GEOCategory *)initWithPlaceDataCategory:(NSString *)arg0;
- (unsigned int)localizedNamesCount;
- (void)setLocalizedNames:(NSMutableArray *)arg0;
- (void)clearLocalizedNames;
- (NSObject *)localizedNamesAtIndex:(unsigned int)arg0;
- (void)setGeoOntologyId:(long long)arg0;
- (void)setHasGeoOntologyId:(char)arg0;
- (char)hasGeoOntologyId;
- (long long)geoOntologyId;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
