/* Runtime dump - GEOPDSource
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSource : PBCodable <NSCopying>
{
    int _resultProviderId;
    NSString * _sourceId;
    NSString * _version;
    struct ? _has;
}

@property (nonatomic) char hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (readonly, nonatomic) char hasSourceId;
@property (retain, nonatomic) NSString * sourceId;
@property (readonly, nonatomic) char hasVersion;
@property (retain, nonatomic) NSString * version;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDSource *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setVersion:(NSString *)arg0;
- (NSString *)version;
- (void)setSourceId:(NSString *)arg0;
- (void)setResultProviderId:(int)arg0;
- (void)setHasResultProviderId:(char)arg0;
- (char)hasResultProviderId;
- (char)hasSourceId;
- (int)resultProviderId;
- (NSString *)sourceId;
- (void)mergeFrom:(NSObject *)arg0;
- (char)hasVersion;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
