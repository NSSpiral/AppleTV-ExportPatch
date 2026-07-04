/* Runtime dump - GEOSource
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSource : PBCodable <NSCopying>
{
    NSString * _sourceId;
    NSString * _sourceName;
    NSString * _sourceVersion;
}

@property (retain, nonatomic) NSString * sourceName;
@property (retain, nonatomic) NSString * sourceId;
@property (readonly, nonatomic) char hasSourceVersion;
@property (retain, nonatomic) NSString * sourceVersion;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOSource *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)sourceVersion;
- (void)setSourceVersion:(NSString *)arg0;
- (void)setSourceId:(NSString *)arg0;
- (NSString *)sourceId;
- (void)setSourceName:(NSString *)arg0;
- (char)hasSourceVersion;
- (GEOSource *)initWithAttributionID:(NSString *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSString *)sourceName;

@end
