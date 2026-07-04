/* Runtime dump - GEOPDPhotoContent
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPhotoContent : PBCodable <NSCopying>
{
    unsigned int _height;
    NSString * _url;
    unsigned int _width;
    struct ? _has;
}

@property (nonatomic) char hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) char hasHeight;
@property (nonatomic) unsigned int height;
@property (readonly, nonatomic) char hasUrl;
@property (retain, nonatomic) NSString * url;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)url;
- (GEOPDPhotoContent *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)width;
- (void)setUrl:(NSString *)arg0;
- (unsigned int)height;
- (NSDictionary *)dictionaryRepresentation;
- (void)setWidth:(unsigned int)arg0;
- (void)setHeight:(unsigned int)arg0;
- (void)setHasHeight:(char)arg0;
- (char)hasHeight;
- (char)hasUrl;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (void)setHasWidth:(char)arg0;
- (char)hasWidth;

@end
