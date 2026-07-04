/* Runtime dump - VKPShield
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPShield : PBCodable <NSCopying>
{
    VKPGenericShieldStyleInfo * _genericShieldStyleInfo;
    NSString * _identifier;
    NSMutableArray * _variants;
}

@property (retain, nonatomic) NSString * identifier;
@property (retain, nonatomic) NSMutableArray * variants;
@property (readonly, nonatomic) char hasGenericShieldStyleInfo;
@property (retain, nonatomic) VKPGenericShieldStyleInfo * genericShieldStyleInfo;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (VKPShield *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSMutableArray *)variants;
- (char)hasGenericShieldStyleInfo;
- (VKPGenericShieldStyleInfo *)genericShieldStyleInfo;
- (void)setVariants:(NSMutableArray *)arg0;
- (void)setGenericShieldStyleInfo:(VKPGenericShieldStyleInfo *)arg0;
- (void)addVariants:(id)arg0;
- (unsigned int)variantsCount;
- (void)clearVariants;
- (NSObject *)variantsAtIndex:(unsigned int)arg0;

@end
