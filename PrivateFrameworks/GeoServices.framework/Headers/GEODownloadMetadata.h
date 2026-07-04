/* Runtime dump - GEODownloadMetadata
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODownloadMetadata : PBCodable <NSCopying>
{
    double _timestamp;
    NSString * _etag;
    NSString * _url;
}

@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;
@property (readonly, nonatomic) char hasUrl;
@property (retain, nonatomic) NSString * url;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)timestamp;
- (NSString *)url;
- (void)setTimestamp:(double)arg0;
- (GEODownloadMetadata *)copyWithZone:(struct _NSZone *)arg0;
- (void)setUrl:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setEtag:(NSString *)arg0;
- (char)hasEtag;
- (NSString *)etag;
- (char)hasUrl;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
