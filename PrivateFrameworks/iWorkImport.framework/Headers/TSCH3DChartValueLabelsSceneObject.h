/* Runtime dump - TSCH3DChartValueLabelsSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartValueLabelsSceneObject : TSCH3DChartLabelsContainingSceneObject

- (void)renderAnnotatedLabels:(id)arg0;
- (NSDictionary *)selectionPathForInfo:(NSDictionary *)arg0 scene:(NSObject *)arg1 pickedPoint:(TSCH3DPickedPoint *)arg2;
- (id)convertSelectionPathTo3D:(id)arg0 path:(NSString *)arg1;
- (void)dispatchElementLabelHandler:(id /* block */)arg0;

@end
