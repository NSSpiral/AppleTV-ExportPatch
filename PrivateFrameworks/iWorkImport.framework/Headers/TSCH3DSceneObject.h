/* Runtime dump - TSCH3DSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSceneObject : NSObject

+ (void)setSelectionPath:(TSKSelectionPath *)arg0 selectionMode:(int)arg1 forScene:(NSObject *)arg2;
+ (TSCH3DSceneObject *)sceneObject;
+ (float)textRotationForChartInfo:(NSDictionary *)arg0;
+ (NSString *)renderCacheKey;

- (float)shadowCameraDepthLimitAdjustmentFactorForScene:(NSObject *)arg0;
- (void)getBounds:(TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds *)arg0;
- (NSDictionary *)selectionPathForInfo:(NSDictionary *)arg0 scene:(NSObject *)arg1 pickedPoint:(TSCH3DPickedPoint *)arg2;
- (id)convertSelectionPathTo3D:(id)arg0 path:(NSString *)arg1;
- (char)canRenderSelectionPath:(NSString *)arg0 forInfo:(NSDictionary *)arg1;
- (char)canEditTextForSelectionPath:(NSString *)arg0 forInfo:(NSDictionary *)arg1;
- (NSString *)renderInfoForSelectionPath:(NSString *)arg0 info:(NSDictionary *)arg1;
- (void)postrender:(id)arg0;
- (void)primeRenderCaches:(id)arg0;
- (void)postGetBounds:(id)arg0;
- (void)rayPick:(id)arg0;
- (void)getSelectionKnobsPositions:(id)arg0;
- (void)getSceneObjectElementsBounds:(id)arg0;
- (Class)chartBoundsLayoutSceneDelegateClass;
- (struct EdgeDetectionParameters)edgeDetectionParameters;
- (void)prerender:(id)arg0;
- (void)statePreservedPrerender:(id)arg0;
- (void)statePreservedRender:(id)arg0;
- (void)statePreservedPostrender:(id)arg0;
- (void)statePreservedRayPick:(id)arg0;
- (void)statePreservedPrimeRenderCaches:(id)arg0;
- (void)statePreservedGetSelectionKnobsPositions:(id)arg0;
- (void)statePreservedGetSceneObjectElementsBounds:(id)arg0;
- (void)render:(id)arg0;

@end
