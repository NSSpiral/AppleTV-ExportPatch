/* Runtime dump - GEOPDPhoto
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPhoto : PBCodable <NSCopying>
{
    NSString * _photoId;
    NSMutableArray * _photoVersions;
}

@property (readonly, nonatomic) char hasPhotoId;
@property (retain, nonatomic) NSString * photoId;
@property (retain, nonatomic) NSMutableArray * photoVersions;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDPhoto *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setPhotoId:(NSString *)arg0;
- (void)setPhotoVersions:(NSMutableArray *)arg0;
- (void)addPhotoVersion:(NSString *)arg0;
- (unsigned int)photoVersionsCount;
- (void)clearPhotoVersions;
- (NSObject *)photoVersionAtIndex:(unsigned int)arg0;
- (char)hasPhotoId;
- (NSString *)photoId;
- (NSMutableArray *)photoVersions;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
