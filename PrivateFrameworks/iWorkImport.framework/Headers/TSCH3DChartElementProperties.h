/* Runtime dump - TSCH3DChartElementProperties
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartElementProperties : NSObject <NSCopying>
{
    TSCH3DTexturePool * mPool;
}

@property (readonly, nonatomic) TSCH3DTexturePool * pool;

+ (NSDictionary *)properties;

- (float)elementTransformDepthFromPropertyAccessor:(struct ChartScenePropertyAccessor *)arg0;
- (char)applyElementTransform:(struct ObjectTransforms *)arg0 series:(struct Transform * *)arg1 index:(struct Transform)arg2 propertyAccessor:(struct Transform * *)arg3;
- (char)applyCombinedTransform:(struct ObjectTransforms *)arg0 series:(struct Transform * *)arg1 index:(struct Transform)arg2 propertyAccessor:(struct Transform * *)arg3;
- (NSObject *)getPropertiesOfType:(Class)arg0;
- (id)renderingLightingModelForSeries:(id)arg0;
- (char)applyElementTransformToProcessor:(id)arg0 series:(struct Transform * *)arg1 index:(struct tvec2<int> *)arg2 propertyAccessor:(struct tvec2<int>)arg3;
- (void)applyChartElementsTransform:(struct ObjectTransforms *)arg0;
- (void)applyChartElementsTransformToProcessor:(id)arg0;
- (void)addTexcoordsToProcessor:(id)arg0 series:(struct Transform * *)arg1 index:(struct tvec2<int> *)arg2;
- (void)dealloc;
- (TSCH3DChartElementProperties *)init;
- (TSCH3DChartElementProperties *)copyWithZone:(struct _NSZone *)arg0;
- (TSCH3DTexturePool *)pool;

@end
