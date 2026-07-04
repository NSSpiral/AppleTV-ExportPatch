/* Runtime dump - TSCH3DChartSeriesNameLabelsSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartSeriesNameLabelsSceneObject : TSCH3DChartLabelsContainingSceneObject

- (void)renderAnnotatedLabels:(id)arg0;
- (NSDictionary *)selectionPathForInfo:(NSDictionary *)arg0 scene:(NSObject *)arg1 pickedPoint:(TSCH3DPickedPoint *)arg2;
- (int)knobsModeForLabelType:(int)arg0 scene:(NSObject *)arg1;
- (void)dispatchElementLabelHandler:(id /* block */)arg0;
- (NSObject *)p_axisLabelsFromScene:(NSObject *)arg0;

@end
