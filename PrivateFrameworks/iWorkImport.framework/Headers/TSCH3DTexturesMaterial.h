/* Runtime dump - TSCH3DTexturesMaterial
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTexturesMaterial : TSCH3DMaterial
{
    TSCH3DVector * _color;
    NSArray * _textures;
    NSArray * _tilings;
}

@property (nonatomic) struct tvec4<float> color;

+ (TSCH3DTexturesMaterial *)instanceWithArchive:(struct Chart3DTexturesMaterialArchive *)arg0 unarchiver:(struct Chart3DTexturesMaterialArchive)arg1;

- (void)didInitFromSOS;
- (void)saveToArchive:(struct Chart3DTexturesMaterialArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DTexturesMaterial *)initWithArchive:(struct Chart3DTexturesMaterialArchive *)arg0 unarchiver:(struct Chart3DTexturesMaterialArchive)arg1;
- (void)addTexture:(NSObject *)arg0 tiling:(TSCH3DImageTextureTiling *)arg1;
- (unsigned int)textureCount;
- (id)firstTiling;
- (NSObject *)firstTexture;
- (char)hasCompleteData;
- (NSArray *)tilings;
- (NSEnumerator *)textureEnumerator;
- (void)dealloc;
- (TSCH3DTexturesMaterial *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DTexturesMaterial *)copyWithZone:(struct _NSZone *)arg0;
- (struct tvec4<float>)color;
- (void)setColor:(struct tvec4<float>)arg0;
- (NSArray *)textures;

@end
