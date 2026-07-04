/* Runtime dump - TSCH3DEmissiveMaterial
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DEmissiveMaterial : TSCH3DTexturesMaterial

+ (TSCH3DEmissiveMaterial *)instanceWithArchive:(struct Chart3DEmissiveMaterialArchive *)arg0 unarchiver:(struct Chart3DEmissiveMaterialArchive)arg1;

- (void)saveToArchive:(struct Chart3DEmissiveMaterialArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DEmissiveMaterial *)initWithArchive:(struct Chart3DEmissiveMaterialArchive *)arg0 unarchiver:(struct Chart3DEmissiveMaterialArchive)arg1;
- (struct MaterialShaderVariables)defaultShaderVariables;

@end
