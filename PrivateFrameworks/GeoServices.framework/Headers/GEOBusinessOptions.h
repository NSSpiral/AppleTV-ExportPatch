/* Runtime dump - GEOBusinessOptions
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOBusinessOptions : PBCodable <NSCopying>
{
    NSMutableArray * _attributeKeys;
    int _maxBusinessResults;
    NSMutableArray * _photoOptions;
    char _includeBusinessHours;
    char _includeCenter;
    struct ? _has;
}

@property (retain, nonatomic) NSMutableArray * photoOptions;
@property (retain, nonatomic) NSMutableArray * attributeKeys;
@property (nonatomic) char hasIncludeBusinessHours;
@property (nonatomic) char includeBusinessHours;
@property (nonatomic) char hasMaxBusinessResults;
@property (nonatomic) int maxBusinessResults;
@property (nonatomic) char hasIncludeCenter;
@property (nonatomic) char includeCenter;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOBusinessOptions *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setIncludeBusinessHours:(char)arg0;
- (void)addAttributeKey:(NSString *)arg0;
- (void)addPhotoOptions:(NSDictionary *)arg0;
- (void)setPhotoOptions:(NSMutableArray *)arg0;
- (void)setAttributeKeys:(NSMutableArray *)arg0;
- (unsigned int)photoOptionsCount;
- (void)clearPhotoOptions;
- (NSObject *)photoOptionsAtIndex:(unsigned int)arg0;
- (unsigned int)attributeKeysCount;
- (void)clearAttributeKeys;
- (NSObject *)attributeKeyAtIndex:(unsigned int)arg0;
- (void)setHasIncludeBusinessHours:(char)arg0;
- (char)hasIncludeBusinessHours;
- (int)maxBusinessResults;
- (void)setMaxBusinessResults:(int)arg0;
- (void)setHasMaxBusinessResults:(char)arg0;
- (char)hasMaxBusinessResults;
- (void)setIncludeCenter:(char)arg0;
- (void)setHasIncludeCenter:(char)arg0;
- (char)hasIncludeCenter;
- (NSMutableArray *)photoOptions;
- (char)includeBusinessHours;
- (char)includeCenter;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSMutableArray *)attributeKeys;

@end
