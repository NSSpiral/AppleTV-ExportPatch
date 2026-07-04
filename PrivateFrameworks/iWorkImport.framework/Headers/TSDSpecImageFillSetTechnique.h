/* Runtime dump - TSDSpecImageFillSetTechnique
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecImageFillSetTechnique : TSDSpecFill
{
    int _technique;
}

+ (void)saveObject:(NSObject *)arg0 toArchive:(struct SpecImageFillSetTechniqueArchive *)arg1 archiver:(NSObject *)arg2;
+ (TSDSpecImageFillSetTechnique *)newFromArchive:(struct SpecImageFillSetTechniqueArchive *)arg0 unarchiver:(struct SpecImageFillSetTechniqueArchive)arg1;

- (TSDSpecImageFillSetTechnique *)initWithCurrentProperty:(NSObject *)arg0;
- (char)canApplyOnObject:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (id)imageFillModifiedFromImageFill:(id)arg0;
- (void)saveSpecImageFillSetTechniqueToArchive:(struct SpecImageFillSetTechniqueArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDSpecImageFillSetTechnique *)initSpecImageFillSetTechniqueWithArchive:(struct SpecImageFillSetTechniqueArchive *)arg0 unarchiver:(struct SpecImageFillSetTechniqueArchive)arg1;
- (id)apply:(id /* block */)arg0;

@end
