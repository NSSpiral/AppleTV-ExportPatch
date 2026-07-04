/* Runtime dump - TSCH3DChartAxisTitleSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartAxisTitleSceneObject : TSCH3DChartTitleSceneObject

+ (unsigned int)styleIndexForInfo:(NSDictionary *)arg0;
+ (NSDictionary *)paragraphStyleForTitleFontForInfo:(NSDictionary *)arg0;

- (NSDictionary *)selectionPathForInfo:(NSDictionary *)arg0 scene:(NSObject *)arg1 pickedPoint:(TSCH3DPickedPoint *)arg2;
- (id)convertSelectionPathTo3D:(id)arg0 path:(NSString *)arg1;
- (char)canRenderSelectionPath:(NSString *)arg0 forInfo:(NSDictionary *)arg1;
- (char)canEditTextForSelectionPath:(NSString *)arg0 forInfo:(NSDictionary *)arg1;
- (char)enabledForInfo:(NSDictionary *)arg0;
- (struct LabelTransform)labelTransformForPositioner:(float)arg0;
- (NSDictionary *)textForInfo:(NSDictionary *)arg0;

@end
