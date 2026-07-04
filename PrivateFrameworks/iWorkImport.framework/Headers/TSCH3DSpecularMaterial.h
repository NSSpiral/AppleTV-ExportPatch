/* Runtime dump - TSCH3DSpecularMaterial
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSpecularMaterial : TSCH3DTexturesMaterial

+ (TSCH3DSpecularMaterial *)instanceWithArchive:(struct Chart3DSpecularMaterialArchive *)arg0 unarchiver:(struct Chart3DSpecularMaterialArchive)arg1;

- (void)saveToArchive:(struct Chart3DSpecularMaterialArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DSpecularMaterial *)initWithArchive:(struct Chart3DSpecularMaterialArchive *)arg0 unarchiver:(struct Chart3DSpecularMaterialArchive)arg1;
- (struct MaterialShaderVariables)defaultShaderVariables;

@end
