/* Runtime dump - TSCH3DChartPieElementProperties
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartPieElementProperties : TSCH3DChartBasicElementProperties
{
    struct vector<float, std::__1::allocator<float> > mPercentOfTotal;
    struct vector<float, std::__1::allocator<float> > mRotation;
    struct vector<float, std::__1::allocator<float> > mExplode;
}

- (int)flatIndex:(struct tvec2<int> *)arg0;
- (float)elementTransformDepthFromPropertyAccessor:(struct ChartScenePropertyAccessor *)arg0;
- (char)applyElementTransform:(struct ObjectTransforms *)arg0 series:(struct Transform * *)arg1 index:(struct Transform)arg2 propertyAccessor:(struct Transform * *)arg3;
- (struct GeometryResource)boundsGeometryForSeries:(id)arg0 index:(NSObject *)arg1;
- (float)percentOfTotalAtElementIndex:(struct tvec2<int> *)arg0;
- (float)explosionAtElementIndex:(struct tvec2<int> *)arg0;
- (void)setExplosion:(float)arg0 atElementIndex:(struct tvec2<int> *)arg1;
- (char)anyHasExplosion;
- (float)explosionAtElementIndex:(struct tvec2<int> *)arg0 propertyAccessor:(struct tvec2<int>)arg1;
- (float)rotationAtElementIndex:(struct tvec2<int> *)arg0;
- (void)setPercentOfTotal:(float)arg0 atElementIndex:(struct tvec2<int> *)arg1;
- (void)setRotation:(float)arg0 atElementIndex:(struct tvec2<int> *)arg1;
- (void)updateValues;
- (void)reset;
- (TSCH3DChartPieElementProperties *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (void)updateLabels;
- (void).cxx_destruct;

@end
