/* Runtime dump - TSCH3DChartBarElementProperties
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartBarElementProperties : TSCH3DChartBasicElementProperties
{
    struct vector<float, std::__1::allocator<float> > mMaxValues;
    struct vector<TSCH3D::BarElementInfo, std::__1::allocator<TSCH3D::BarElementInfo> > mElementInfos;
    char mStacked;
    char mBevelEdges;
    float mBarWidth;
    float mElementsXOffset;
    float mSeriesOffset;
    float mSetWidth;
    int mBarShape;
    TSCH3DLabelResources * mSeriesLabels;
    struct array<TSCH3D::BarExtrusionDetails, 2> mExtrusionDetails;
    TSCH3DBarChartDefaultAppearance * mAppearance;
    struct vector<<anonymous>::Range, std::__1::allocator<<anonymous>::Range> > mRangeCache;
}

@property (retain, nonatomic) TSCH3DLabelResources * seriesLabels;
@property (readonly, nonatomic) <TSCH3DBarChartAppearance> * appearance;
@property (readonly, nonatomic) int barShape;
@property (readonly, nonatomic) char hasBevelEdges;

- (void)p_createAppearance;
- (void)releaseAndClearAppearance;
- (int)flatIndex:(struct tvec2<int> *)arg0;
- (struct BarElementInfo *)elementInfoAtIndex:(struct tvec2<int> *)arg0;
- (struct BarIntercept)calculateInterceptForSeries:(id)arg0;
- (struct Range)p_calculateRangeForSeries:(id)arg0 index:(SEL)arg1 intercept:(id)arg2;
- (struct Range)rangeForSeries:(id)arg0 index:(SEL)arg1;
- (float)elementTransformDepthFromPropertyAccessor:(struct ChartScenePropertyAccessor *)arg0;
- (char)beveledAtIndex:(struct tvec2<int> *)arg0;
- (NSObject *)p_appearance;
- (struct BarExtrusionDetails *)extrusionDetailsForShape:(id)arg0;
- (NSObject *)p_barResourceCacheItemAtIndex:(struct tvec2<int> *)arg0;
- (void)setElementInfo:(struct BarElementInfo *)arg0 atIndex:(struct BarElementInfo)arg1;
- (void)setMaxValueForSeries:(int)arg0 value:(float)arg1;
- (void)createResources;
- (void)setSeriesLabels:(TSCH3DLabelResources *)arg0;
- (TSCH3DLabelResources *)seriesLabels;
- (void)p_updateAppearance;
- (float)chartInitialDepthOffset;
- (void)calculateLayout;
- (void)p_updateRangeCache;
- (void)updateMaxValuesAndBevels;
- (NSArray *)p_appearanceClasses;
- (void)p_resetExtrusionDetails;
- (struct BarElementInfo)barElementInfoAtIndex:(struct tvec2<int> *)arg0;
- (void)setBeveledAtIndex:(struct tvec2<int> *)arg0;
- (float)interceptValueForSeries:(id)arg0;
- (float)barWidth;
- (char)applyElementTransform:(struct ObjectTransforms *)arg0 series:(struct Transform * *)arg1 index:(struct Transform)arg2 propertyAccessor:(struct Transform * *)arg3;
- (struct GeometryResource)geometryForSeries:(id)arg0 index:(NSObject *)arg1;
- (struct GeometryResource)boundsGeometryForSeries:(id)arg0 index:(NSObject *)arg1;
- (id)normalsForSeries:(id)arg0 index:(struct tvec2<int> *)arg1;
- (id)texcoordsForSeries:(id)arg0 index:(struct tvec2<int> *)arg1;
- (float)maxValueForSeries:(int)arg0;
- (void)setExtrusionDetails:(struct BarExtrusionDetails *)arg0 forShape:(struct BarExtrusionDetails)arg1;
- (int)barShape;
- (char)hasBevelEdges;
- (void)dealloc;
- (void)reset;
- (TSCH3DChartBarElementProperties *)copyWithZone:(struct _NSZone *)arg0;
- (<TSCH3DBarChartAppearance> *)appearance;
- (void).cxx_construct;
- (void)updateLabels;
- (void).cxx_destruct;

@end
