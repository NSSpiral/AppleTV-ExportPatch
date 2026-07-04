/* Runtime dump - TSCH3DChartLineSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartLineSceneObject : TSCH3DChartSeriesSceneObject

+ (NSObject *)chartSeriesType;
+ (struct MeshData)createMeshForSeries:(id)arg0;
+ (float)chartSeriesDepth;
+ (char)supportsChartSeriesDepthOffset;

- (struct EdgeDetectionParameters)edgeDetectionParameters;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState *)arg0 properties:(struct tvec2<float>)arg1 textureTiling:(TSCH3DImageTextureTiling *)arg2 size:(struct CGSize)arg3;
- (char)shouldRenderSeries:(id)arg0;

@end
