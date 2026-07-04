/* Runtime dump - GEOPDRawAttributeFilter
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDRawAttributeFilter : PBCodable <NSCopying>
{
    NSMutableArray * _keys;
}

@property (retain, nonatomic) NSMutableArray * keys;

- (void)setKeys:(NSMutableArray *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDRawAttributeFilter *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSMutableArray *)keys;
- (void)addKey:(NSString *)arg0;
- (NSObject *)keyAtIndex:(unsigned int)arg0;
- (unsigned int)keysCount;
- (void)clearKeys;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
