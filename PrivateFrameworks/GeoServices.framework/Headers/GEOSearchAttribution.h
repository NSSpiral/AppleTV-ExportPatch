/* Runtime dump - GEOSearchAttribution
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttribution : PBCodable <NSCopying>
{
    NSMutableArray * _attributionURLs;
    NSString * _sourceIdentifier;
    unsigned int _sourceVersion;
}

@property (retain, nonatomic) NSString * sourceIdentifier;
@property (nonatomic) unsigned int sourceVersion;
@property (retain, nonatomic) NSMutableArray * attributionURLs;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOSearchAttribution *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)sourceVersion;
- (void)setSourceVersion:(unsigned int)arg0;
- (unsigned int)attributionURLsCount;
- (NSMutableArray *)attributionURLs;
- (void)setSourceIdentifier:(NSString *)arg0;
- (void)setAttributionURLs:(NSMutableArray *)arg0;
- (void)addAttributionURLs:(id)arg0;
- (void)clearAttributionURLs;
- (NSObject *)attributionURLsAtIndex:(unsigned int)arg0;
- (NSString *)sourceIdentifier;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
