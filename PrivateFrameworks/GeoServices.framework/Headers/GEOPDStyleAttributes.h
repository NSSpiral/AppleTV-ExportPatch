/* Runtime dump - GEOPDStyleAttributes
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDStyleAttributes : PBCodable <NSCopying>
{
    unsigned long long _customIconId;
    NSMutableArray * _attributes;
    struct ? _has;
}

@property (retain, nonatomic) NSMutableArray * attributes;
@property (nonatomic) char hasCustomIconId;
@property (nonatomic) unsigned long long customIconId;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDStyleAttributes *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSMutableArray *)attributes;
- (void)setAttributes:(NSMutableArray *)arg0;
- (void)addAttribute:(struct __CFString *)arg0;
- (NSObject *)attributeAtIndex:(unsigned int)arg0;
- (void)setCustomIconId:(unsigned long long)arg0;
- (void)setHasCustomIconId:(char)arg0;
- (char)hasCustomIconId;
- (unsigned long long)customIconId;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (unsigned int)attributesCount;
- (void)clearAttributes;

@end
