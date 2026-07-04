/* Runtime dump - TSCH3DChartScenePropertyAccessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartScenePropertyAccessor : TSCH3DScenePropertyAccessor

@property (nonatomic) struct tvec2<float> sageChartInfoSize;

- (struct tvec2<float>)sageChartInfoSize;
- (struct tmat4x4<float>)sceneTransform;
- (void)setSageChartInfoSize:(struct tvec2<float>)arg0;
- (TSCH3DChartScenePropertyAccessor *)initWithScene:(TSCH3DScene *)arg0;

@end
