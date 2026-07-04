/* Runtime dump - GEOVersionManifest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVersionManifest : PBCodable <NSCopying>
{
    NSMutableArray * _serviceVersions;
}

@property (retain, nonatomic) NSMutableArray * serviceVersions;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOVersionManifest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setServiceVersions:(NSMutableArray *)arg0;
- (void)addServiceVersion:(NSString *)arg0;
- (unsigned int)serviceVersionsCount;
- (void)clearServiceVersions;
- (NSObject *)serviceVersionAtIndex:(unsigned int)arg0;
- (NSMutableArray *)serviceVersions;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
