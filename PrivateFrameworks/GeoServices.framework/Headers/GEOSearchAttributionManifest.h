/* Runtime dump - GEOSearchAttributionManifest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttributionManifest : PBCodable <NSCopying>
{
    NSMutableArray * _actionComponentMapEntries;
    NSMutableArray * _searchAttributionSources;
}

@property (retain, nonatomic) NSMutableArray * searchAttributionSources;
@property (retain, nonatomic) NSMutableArray * actionComponentMapEntries;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOSearchAttributionManifest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setSearchAttributionSources:(NSMutableArray *)arg0;
- (void)setActionComponentMapEntries:(NSMutableArray *)arg0;
- (void)addSearchAttributionSources:(id)arg0;
- (void)addActionComponentMapEntries:(NSArray *)arg0;
- (unsigned int)searchAttributionSourcesCount;
- (void)clearSearchAttributionSources;
- (NSObject *)searchAttributionSourcesAtIndex:(unsigned int)arg0;
- (unsigned int)actionComponentMapEntriesCount;
- (void)clearActionComponentMapEntries;
- (NSObject *)actionComponentMapEntriesAtIndex:(unsigned int)arg0;
- (NSMutableArray *)searchAttributionSources;
- (NSMutableArray *)actionComponentMapEntries;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
