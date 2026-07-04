/* Runtime dump - TSCH3DChartStackedBarSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartStackedBarSceneObject : TSCH3DChartStackedColumnSceneObject

+ (NSObject *)chartSeriesType;
+ (struct TSCH3DScenePart)partWithEnumerator:(NSEnumerator *)arg0 layoutSettings:(struct ?)arg1;
+ (char)isHorizontalChart;
+ (char)isStacked;

- (struct tvec2<float>)labelObjectSpacePosition:(unsigned int)arg0 axisValue:(double)arg1 intercept:(double)arg2;
- (void)updateLightingEffectsState:(NSObject *)arg0 scene:(NSObject *)arg1;

@end
