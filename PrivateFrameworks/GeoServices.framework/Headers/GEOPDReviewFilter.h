/* Runtime dump - GEOPDReviewFilter
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDReviewFilter : PBCodable <NSCopying>
{
    struct ? * _photoSizeFilters;
    unsigned int _photoSizeFiltersCount;
    unsigned int _photoSizeFiltersSpace;
}

@property (readonly, nonatomic) unsigned int photoSizeFiltersCount;
@property (readonly, nonatomic) struct ? * photoSizeFilters;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDReviewFilter *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)clearPhotoSizeFilters;
- (unsigned int)photoSizeFiltersCount;
- (struct ?)photoSizeFilterAtIndex:(SEL)arg0;
- (void)addPhotoSizeFilter:(struct ?)arg0;
- (struct ? *)photoSizeFilters;
- (void)setPhotoSizeFilters:(struct ? *)arg0 count:(NSObject *)arg1;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
