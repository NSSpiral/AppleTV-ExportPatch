/* Runtime dump - VKPTextureAtlas
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPTextureAtlas : PBCodable <NSCopying>
{
    unsigned int _quadHeight;
    unsigned int _quadWidth;
    NSData * _texture;
}

@property (retain, nonatomic) NSData * texture;
@property (nonatomic) unsigned int quadWidth;
@property (nonatomic) unsigned int quadHeight;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (VKPTextureAtlas *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSData *)texture;
- (unsigned int)quadWidth;
- (unsigned int)quadHeight;
- (void)setTexture:(NSData *)arg0;
- (void)setQuadWidth:(unsigned int)arg0;
- (void)setQuadHeight:(unsigned int)arg0;

@end
