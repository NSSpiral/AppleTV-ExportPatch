/* Runtime dump - TSCH3DChartBarSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartBarSceneObject : TSCH3DChartColumnSceneObject

+ (NSObject *)chartSeriesType;
+ (struct TSCH3DScenePart)partWithEnumerator:(NSEnumerator *)arg0 layoutSettings:(struct ?)arg1;
+ (char)isHorizontalChart;
+ (void)addHorizontalTransformToProperties:(NSDictionary *)arg0;
+ (void)updateLightingEffectsState:(NSObject *)arg0 scene:(NSObject *)arg1;
+ (char)isStacked;

- (struct tvec2<float>)labelObjectSpacePosition:(unsigned int)arg0 axisValue:(double)arg1 intercept:(double)arg2;
- (void)updateLightingEffectsState:(NSObject *)arg0 scene:(NSObject *)arg1;

@end
