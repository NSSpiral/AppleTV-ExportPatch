/* Runtime dump - TSCH3DChartBoundsLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartBoundsLayout : NSObject
{
    TSCH3DScene * mScene;
    TSCH3DScene * mBounds;
    Class mGetBoundsClass;
    TSCH3DChartGetProjectedBoundsPipeline * mGetBounds;
    TSCH3DChartBoundsLayoutSceneDelegate * mSceneDelegate;
    struct box<glm::detail::tvec2<float> > mLayoutInPage;
    struct box<glm::detail::tvec2<float> > mBodyLayoutInPage;
    struct tvec2<int> mOriginalContainingViewport;
    int mMode;
    struct ? mLayoutSettings;
}

@property (readonly, nonatomic) TSCH3DScene * scene;
@property (nonatomic) struct box<glm::detail::tvec2<float> > layoutInPage;
@property (nonatomic) struct box<glm::detail::tvec2<float> > bodyLayoutInPage;
@property (nonatomic) struct tvec2<int> containingViewport;
@property (nonatomic) struct tvec2<int> originalContainingViewport;
@property (nonatomic) int mode;
@property (retain, nonatomic) Class getBoundsClass;
@property (readonly, nonatomic) struct ? layoutSettings;

- (struct box<glm::detail::tvec2<float> >)layoutInPage;
- (void)setLayoutInPage:(struct box<glm::detail::tvec2<float> >)arg0;
- (struct box<glm::detail::tvec2<float> >)bodyLayoutInPage;
- (void)setBodyLayoutInPage:(struct box<glm::detail::tvec2<float> >)arg0;
- (struct tvec2<int>)containingViewport;
- (void)setContainingViewport:(struct tvec2<int>)arg0;
- (struct ?)layoutSettings;
- (struct ChartProjectedBoundsSpaces *)projectedBounds;
- (void)invalidateBounds;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg0 boundsIndex:(int)arg1;
- (void)resetSceneDelegate;
- (void)setOriginalContainingViewport:(struct tvec2<int>)arg0;
- (NSObject *)cacheableGetBoundsPipeline;
- (struct ChartProjectedBoundsSpaces *)p_projectedBoundsWithLabelsMode:(int)arg0;
- (char)isInward;
- (void)p_updateLabelWrapBoundsPass;
- (char)isSage;
- (TSCH3DChartBoundsLayout *)initWithScene:(TSCH3DScene *)arg0 containingViewport:(struct tvec2<int> *)arg1 originalContainingViewport:(struct tvec2<int>)arg2 layoutSettings:(struct tvec2<int> *)arg3;
- (struct ResizingSize)resizingSize;
- (void)resetContainingViewport;
- (void)cacheLabels;
- (id)debugBounds;
- (struct tvec2<int>)originalContainingViewport;
- (Class)getBoundsClass;
- (void)setGetBoundsClass:(Class)arg0;
- (TSCH3DScene *)scene;
- (void)dealloc;
- (TSCH3DChartBoundsLayout *)init;
- (void)setMode:(int)arg0;
- (int)mode;
- (void).cxx_construct;

@end
