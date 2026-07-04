/* Runtime dump - TSCH3DChartMixinElementProperties
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartMixinElementProperties : TSCH3DChartElementProperties
{
    TSCH3DChartElementProperties * mOriginal;
}

+ (NSDictionary *)propertiesWithProperties:(NSDictionary *)arg0;

- (float)elementTransformDepthFromPropertyAccessor:(struct ChartScenePropertyAccessor *)arg0;
- (TSCH3DTransform *)chartTransform;
- (char)applyElementTransform:(struct ObjectTransforms *)arg0 series:(struct Transform * *)arg1 index:(struct Transform)arg2 propertyAccessor:(struct Transform * *)arg3;
- (struct GeometryResource)geometryForSeries:(id)arg0 index:(NSObject *)arg1;
- (struct GeometryResource)boundsGeometryForSeries:(id)arg0 index:(NSObject *)arg1;
- (id)normalsForSeries:(id)arg0 index:(struct tvec2<int> *)arg1;
- (id)texcoordsForSeries:(id)arg0 index:(struct tvec2<int> *)arg1;
- (NSObject *)getPropertiesOfType:(Class)arg0;
- (id)renderingLightingModelForSeries:(id)arg0;
- (void)applyChartElementsTransform:(struct ObjectTransforms *)arg0;
- (TSCH3DTransform *)elementsTransform;
- (void)dealloc;
- (TSCH3DChartMixinElementProperties *)copyWithZone:(struct _NSZone *)arg0;
- (TSCH3DChartMixinElementProperties *)initWithProperties:(NSDictionary *)arg0;
- (NSArray *)labels;

@end
