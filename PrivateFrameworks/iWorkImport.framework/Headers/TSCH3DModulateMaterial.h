/* Runtime dump - TSCH3DModulateMaterial
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DModulateMaterial : TSCH3DTexturesMaterial

+ (TSCH3DModulateMaterial *)instanceWithArchive:(struct Chart3DModulateMaterialArchive *)arg0 unarchiver:(struct Chart3DModulateMaterialArchive)arg1;

- (void)saveToArchive:(struct Chart3DModulateMaterialArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DModulateMaterial *)initWithArchive:(struct Chart3DModulateMaterialArchive *)arg0 unarchiver:(struct Chart3DModulateMaterialArchive)arg1;
- (struct MaterialShaderVariables)defaultShaderVariables;

@end
