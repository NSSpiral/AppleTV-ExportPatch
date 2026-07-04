/* Runtime dump - TSCH3DFixedFunctionLightingModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFixedFunctionLightingModel : TSCH3DPhongLikeLightingModel

+ (TSCH3DFixedFunctionLightingModel *)instanceWithArchive:(struct Chart3DLightingModelArchive *)arg0 unarchiver:(struct Chart3DLightingModelArchive)arg1;
+ (Class)effectClass;
+ (Class)materialEffectClass;

- (void)saveToArchive:(struct Chart3DLightingModelArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DFixedFunctionLightingModel *)initWithArchive:(struct Chart3DLightingModelArchive *)arg0 unarchiver:(struct Chart3DLightingModelArchive)arg1;

@end
