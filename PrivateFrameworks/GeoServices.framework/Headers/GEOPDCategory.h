/* Runtime dump - GEOPDCategory
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDCategory : PBCodable <NSCopying>
{
    NSString * _categoryId;
    int _level;
    NSMutableArray * _localizedNames;
    struct ? _has;
}

@property (nonatomic) char hasLevel;
@property (nonatomic) int level;
@property (retain, nonatomic) NSMutableArray * localizedNames;
@property (readonly, nonatomic) char hasCategoryId;
@property (retain, nonatomic) NSString * categoryId;

+ (NSData *)_allCategoriesForPlaceData:(NSData *)arg0 type:(unsigned int)arg1;
+ (NSData *)categoryNamesForPlaceData:(NSData *)arg0 type:(unsigned int)arg1;
+ (char)hasCategoryNamesForPlaceData:(NSData *)arg0 type:(unsigned int)arg1;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDCategory *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLevel:(int)arg0;
- (int)level;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasLevel;
- (NSMutableArray *)localizedNames;
- (unsigned int)localizedNamesCount;
- (void)setLocalizedNames:(NSMutableArray *)arg0;
- (void)clearLocalizedNames;
- (void)setCategoryId:(NSString *)arg0;
- (void)addLocalizedName:(NSString *)arg0;
- (NSObject *)localizedNameAtIndex:(unsigned int)arg0;
- (void)setHasLevel:(char)arg0;
- (char)hasCategoryId;
- (NSString *)categoryId;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
