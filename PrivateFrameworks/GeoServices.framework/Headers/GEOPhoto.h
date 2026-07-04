/* Runtime dump - GEOPhoto
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhoto : PBCodable <NSCopying>
{
    NSMutableArray * _photoInfos;
    int _photoType;
    NSString * _uid;
    struct ? _has;
}

@property (nonatomic) char hasPhotoType;
@property (nonatomic) int photoType;
@property (retain, nonatomic) NSMutableArray * photoInfos;
@property (readonly, nonatomic) char hasUid;
@property (retain, nonatomic) NSString * uid;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPhoto *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)uid;
- (void)setUid:(NSString *)arg0;
- (char)hasUid;
- (void)setPhotoType:(int)arg0;
- (GEOPhoto *)initWithPlaceDataPhoto:(UIImage *)arg0;
- (void)addPhotoInfo:(NSDictionary *)arg0;
- (NSObject *)_photoInfoForSize:(int)arg0 includeSmallerSizes:(char)arg1;
- (void)setPhotoInfos:(NSMutableArray *)arg0;
- (unsigned int)photoInfosCount;
- (void)clearPhotoInfos;
- (NSObject *)photoInfoAtIndex:(unsigned int)arg0;
- (void)setHasPhotoType:(char)arg0;
- (char)hasPhotoType;
- (int)photoType;
- (NSMutableArray *)photoInfos;
- (NSObject *)_bestURLForSize:(int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
