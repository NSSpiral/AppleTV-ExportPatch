/* Runtime dump - VKPShieldPack
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPShieldPack : PBCodable <NSCopying>
{
    NSMutableArray * _atlas;
    NSMutableArray * _shields;
}

@property (retain, nonatomic) NSMutableArray * atlas;
@property (retain, nonatomic) NSMutableArray * shields;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (VKPShieldPack *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSMutableArray *)shields;
- (NSMutableArray *)atlas;
- (NSObject *)atlasAtIndex:(unsigned int)arg0;
- (void)setAtlas:(NSMutableArray *)arg0;
- (void)addAtlas:(_VKLocalIconAtlas *)arg0;
- (unsigned int)atlasCount;
- (void)clearAtlas;
- (void)setShields:(NSMutableArray *)arg0;
- (void)addShields:(id)arg0;
- (unsigned int)shieldsCount;
- (void)clearShields;
- (NSObject *)shieldsAtIndex:(unsigned int)arg0;

@end
