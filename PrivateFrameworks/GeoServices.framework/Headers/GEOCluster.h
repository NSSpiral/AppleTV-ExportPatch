/* Runtime dump - GEOCluster
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCluster : PBCodable <NSCopying>
{
    struct ? _indexs;
    GEOPlaceResult * _container;
}

@property (readonly, nonatomic) char hasContainer;
@property (retain, nonatomic) GEOPlaceResult * container;
@property (readonly, nonatomic) unsigned int indexsCount;
@property (readonly, nonatomic) int * indexs;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOCluster *)copyWithZone:(struct _NSZone *)arg0;
- (void)addIndex:(int)arg0;
- (void)setContainer:(GEOPlaceResult *)arg0;
- (GEOPlaceResult *)container;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasContainer;
- (unsigned int)indexsCount;
- (void)clearIndexs;
- (int)indexAtIndex:(unsigned int)arg0;
- (int *)indexs;
- (void)setIndexs:(int *)arg0 count:(unsigned int)arg1;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
