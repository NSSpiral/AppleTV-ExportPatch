/* Runtime dump - GEOPhotoInfo
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhotoInfo : PBCodable <NSCopying>
{
    int _size;
    NSString * _url;
    struct ? _has;
}

@property (nonatomic) char hasSize;
@property (nonatomic) int size;
@property (readonly, nonatomic) char hasUrl;
@property (retain, nonatomic) NSString * url;

- (void)dealloc;
- (int)size;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)url;
- (GEOPhotoInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSize:(int)arg0;
- (void)setUrl:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasUrl;
- (GEOPhotoInfo *)initWithPlaceDataPhotoContent:(NSObject *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasSize;
- (void)setHasSize:(char)arg0;

@end
