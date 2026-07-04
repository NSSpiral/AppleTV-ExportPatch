/* Runtime dump - TSCH3DPhongLightingModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPhongLightingModel : TSCH3DPhongLikeLightingModel

+ (TSCH3DPhongLightingModel *)instanceWithArchive:(struct Chart3DLightingModelArchive *)arg0 unarchiver:(struct Chart3DLightingModelArchive)arg1;
+ (NSObject *)effectClass;
+ (NSObject *)materialEffectClass;

- (void)saveToArchive:(struct Chart3DLightingModelArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DPhongLightingModel *)initWithArchive:(struct Chart3DLightingModelArchive *)arg0 unarchiver:(struct Chart3DLightingModelArchive)arg1;

@end
