/* Runtime dump - GEOServiceVersion
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOServiceVersion : PBCodable <NSCopying>
{
    unsigned int _minimumVersion;
    NSMutableArray * _versionDomains;
    struct ? _has;
}

@property (retain, nonatomic) NSMutableArray * versionDomains;
@property (nonatomic) char hasMinimumVersion;
@property (nonatomic) unsigned int minimumVersion;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOServiceVersion *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSMutableArray *)versionDomains;
- (unsigned int)minimumVersion;
- (void)setVersionDomains:(NSMutableArray *)arg0;
- (void)addVersionDomain:(NSString *)arg0;
- (unsigned int)versionDomainsCount;
- (void)clearVersionDomains;
- (NSObject *)versionDomainAtIndex:(unsigned int)arg0;
- (void)setMinimumVersion:(unsigned int)arg0;
- (void)setHasMinimumVersion:(char)arg0;
- (char)hasMinimumVersion;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
