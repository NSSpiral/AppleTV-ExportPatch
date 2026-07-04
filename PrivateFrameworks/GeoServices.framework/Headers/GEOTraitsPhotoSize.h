/* Runtime dump - GEOTraitsPhotoSize
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTraitsPhotoSize : PBCodable <NSCopying>
{
    unsigned int _height;
    unsigned int _width;
    struct ? _has;
}

@property (nonatomic) char hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) char hasHeight;
@property (nonatomic) unsigned int height;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOTraitsPhotoSize *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)width;
- (unsigned int)height;
- (NSDictionary *)dictionaryRepresentation;
- (void)setWidth:(unsigned int)arg0;
- (void)setHeight:(unsigned int)arg0;
- (void)setHasHeight:(char)arg0;
- (char)hasHeight;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (void)setHasWidth:(char)arg0;
- (char)hasWidth;

@end
