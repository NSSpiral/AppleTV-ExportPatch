/* Runtime dump - TSCH3DChartResizerHelper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartResizerHelper : NSObject
{
    TSCHChartInfo * mChartInfo;
    struct tvec2<int> mContainingViewport;
    struct tvec2<int> mOriginalContainingViewport;
    TSCH3DChartBoundsLayout * mBoundsLayout;
    struct ? mLayoutSettings;
}

@property (readonly, nonatomic) TSCHChartInfo * chartInfo;
@property (nonatomic) struct tvec2<int> containingViewport;
@property (readonly, nonatomic) TSCH3DVector * containingViewportVector;
@property (readonly, nonatomic) struct tvec2<int> originalContainingViewport;
@property (nonatomic) struct ? layoutSettings;

+ (struct tvec2<int>)containingViewportForVector:(id)arg0;
+ (TSCH3DChartResizerHelper *)vectorForContainingViewport:(struct tvec2<int> *)arg0;
+ (NSDictionary *)helperWithInfo:(NSDictionary *)arg0;

- (TSCHChartInfo *)chartInfo;
- (struct tvec2<int>)containingViewport;
- (void)setContainingViewport:(struct tvec2<int>)arg0;
- (struct ?)layoutSettings;
- (TSCH3DVector *)containingViewportVector;
- (void)setLayoutSettings:(struct ?)arg0;
- (NSObject *)boundsLayoutForScene:(NSObject *)arg0 mode:(int)arg1;
- (void)invalidateBounds;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg0 boundsIndex:(int)arg1;
- (struct tvec2<float>)chartBodySizeByResizingScene:(NSObject *)arg0 toLayoutSize:(struct tvec2<float> *)arg1 resizeStartingSize:(struct tvec2<float>)arg2 returningChartBodyLayoutOffsetInChartAreaLayoutSpace:(struct tvec2<float> *)arg3 resultLayoutSize:(struct tvec2<float> *)arg4;
- (struct tvec2<float>)layoutSizeByResizingScene:(NSObject *)arg0 toChartBodyLayoutSize:(struct tvec2<float> *)arg1 resizeStartingSize:(struct tvec2<float>)arg2 returningChartBodyLayoutBoundsInChartAreaLayoutSpace:(struct tvec2<float> *)arg3;
- (struct tvec2<float>)chartBodyLayoutOffsetInChartAreaLayoutSpaceUsingConverter:(struct ChartProjectedBoundsConverter *)arg0;
- (struct tvec2<int>)originalContainingViewport;
- (void)initializeOriginalContainingViewport;
- (NSObject *)boundsLayoutResizedForScene:(NSObject *)arg0 bounds:(struct box<glm::detail::tvec2<float> > *)arg1 resizeStartingSize:(struct box<glm::detail::tvec2<float> >)arg2 mode:(struct tvec2<float>)arg3 returningResultSize:(NSObject *)arg4;
- (TSCH3DChartResizerHelper *)initWithInfo:(NSDictionary *)arg0;
- (void)dealloc;
- (void).cxx_construct;

@end
