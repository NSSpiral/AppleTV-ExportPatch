/* Runtime dump - GEOPhotoOptions
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhotoOptions : PBCodable <NSCopying>
{
    struct ? _photoSizes;
    int _maxPhotos;
    int _photoType;
    struct ? _has;
}

@property (nonatomic) int maxPhotos;
@property (nonatomic) char hasPhotoType;
@property (nonatomic) int photoType;
@property (readonly, nonatomic) unsigned int photoSizesCount;
@property (readonly, nonatomic) int * photoSizes;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPhotoOptions *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setPhotoType:(int)arg0;
- (void)setMaxPhotos:(int)arg0;
- (int *)photoSizes;
- (void)addPhotoSize:(int)arg0;
- (void)setHasPhotoType:(char)arg0;
- (char)hasPhotoType;
- (int)photoType;
- (unsigned int)photoSizesCount;
- (void)clearPhotoSizes;
- (int)photoSizeAtIndex:(unsigned int)arg0;
- (void)setPhotoSizes:(int *)arg0 count:(unsigned int)arg1;
- (int)maxPhotos;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
