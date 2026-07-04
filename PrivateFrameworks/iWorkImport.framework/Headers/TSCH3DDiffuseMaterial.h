/* Runtime dump - TSCH3DDiffuseMaterial
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DDiffuseMaterial : TSCH3DTexturesMaterial

+ (TSCH3DDiffuseMaterial *)instanceWithArchive:(struct Chart3DDiffuseMaterialArchive *)arg0 unarchiver:(struct Chart3DDiffuseMaterialArchive)arg1;

- (void)saveToArchive:(struct Chart3DDiffuseMaterialArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DDiffuseMaterial *)initWithArchive:(struct Chart3DDiffuseMaterialArchive *)arg0 unarchiver:(struct Chart3DDiffuseMaterialArchive)arg1;
- (struct MaterialShaderVariables)defaultShaderVariables;

@end
