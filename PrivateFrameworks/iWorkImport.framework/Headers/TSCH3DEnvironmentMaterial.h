/* Runtime dump - TSCH3DEnvironmentMaterial
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DEnvironmentMaterial : TSCH3DTexturesMaterial
{
    char _decalMode;
}

@property (nonatomic) char decalMode;

+ (TSCH3DEnvironmentMaterial *)instanceWithArchive:(struct Chart3DEnvironmentMaterialArchive *)arg0 unarchiver:(struct Chart3DEnvironmentMaterialArchive)arg1;

- (void)saveToArchive:(struct Chart3DEnvironmentMaterialArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DEnvironmentMaterial *)initWithArchive:(struct Chart3DEnvironmentMaterialArchive *)arg0 unarchiver:(struct Chart3DEnvironmentMaterialArchive)arg1;
- (void)setDecalMode:(char)arg0;
- (char)decalMode;
- (struct MaterialShaderVariables)defaultShaderVariables;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DEnvironmentMaterial *)copyWithZone:(struct _NSZone *)arg0;

@end
