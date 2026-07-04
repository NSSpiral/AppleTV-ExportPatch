/* Runtime dump - VKPGenericShieldStylePack
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPGenericShieldStylePack : PBCodable <NSCopying>
{
    NSMutableArray * _genericShields;
    NSMutableArray * _textureAtlas;
}

@property (retain, nonatomic) NSMutableArray * textureAtlas;
@property (retain, nonatomic) NSMutableArray * genericShields;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (VKPGenericShieldStylePack *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSMutableArray *)genericShields;
- (NSMutableArray *)textureAtlas;
- (void)setTextureAtlas:(NSMutableArray *)arg0;
- (void)setGenericShields:(NSMutableArray *)arg0;
- (void)addTextureAtlas:(SKTextureAtlas *)arg0;
- (void)addGenericShield:(VKPGenericShield *)arg0;
- (unsigned int)textureAtlasCount;
- (void)clearTextureAtlas;
- (NSObject *)textureAtlasAtIndex:(unsigned int)arg0;
- (unsigned int)genericShieldsCount;
- (void)clearGenericShields;
- (NSObject *)genericShieldAtIndex:(unsigned int)arg0;

@end
