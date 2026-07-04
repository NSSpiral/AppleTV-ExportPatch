/* Runtime dump - VKPGenericShield
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPGenericShield : PBCodable <NSCopying>
{
    int _style;
    NSMutableArray * _variants;
}

@property (nonatomic) int style;
@property (retain, nonatomic) NSMutableArray * variants;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (VKPGenericShield *)copyWithZone:(struct _NSZone *)arg0;
- (int)style;
- (void)setStyle:(int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSMutableArray *)variants;
- (void)setVariants:(NSMutableArray *)arg0;
- (unsigned int)variantsCount;
- (void)clearVariants;
- (void)addVariant:(VKPGenericShieldVariant *)arg0;
- (NSObject *)variantAtIndex:(unsigned int)arg0;

@end
