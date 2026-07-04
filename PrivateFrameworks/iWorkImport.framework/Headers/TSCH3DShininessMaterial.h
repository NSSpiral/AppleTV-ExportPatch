/* Runtime dump - TSCH3DShininessMaterial
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShininessMaterial : TSCH3DTexturesMaterial

+ (TSCH3DShininessMaterial *)instanceWithArchive:(struct Chart3DShininessMaterialArchive *)arg0 unarchiver:(struct Chart3DShininessMaterialArchive)arg1;

- (void)saveToArchive:(struct Chart3DShininessMaterialArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DShininessMaterial *)initWithArchive:(struct Chart3DShininessMaterialArchive *)arg0 unarchiver:(struct Chart3DShininessMaterialArchive)arg1;
- (struct MaterialShaderVariables)defaultShaderVariables;

@end
