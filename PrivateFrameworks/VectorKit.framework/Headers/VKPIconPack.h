/* Runtime dump - VKPIconPack
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPIconPack : PBCodable <NSCopying>
{
    NSMutableArray * _atlas;
    NSMutableArray * _icons;
    unsigned int _identifier;
}

@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSMutableArray * atlas;
@property (retain, nonatomic) NSMutableArray * icons;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)identifier;
- (VKPIconPack *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(unsigned int)arg0;
- (NSMutableArray *)icons;
- (NSDictionary *)dictionaryRepresentation;
- (void)setIcons:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSMutableArray *)atlas;
- (NSObject *)atlasAtIndex:(unsigned int)arg0;
- (void)setAtlas:(NSMutableArray *)arg0;
- (void)addAtlas:(_VKLocalIconAtlas *)arg0;
- (void)addIcons:(id)arg0;
- (unsigned int)atlasCount;
- (void)clearAtlas;
- (unsigned int)iconsCount;
- (void)clearIcons;
- (NSObject *)iconsAtIndex:(unsigned int)arg0;

@end
