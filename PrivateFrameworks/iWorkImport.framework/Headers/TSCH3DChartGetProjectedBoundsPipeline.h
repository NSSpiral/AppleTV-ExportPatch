/* Runtime dump - TSCH3DChartGetProjectedBoundsPipeline
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartGetProjectedBoundsPipeline : TSCH3DGetBoundsPipeline
{
    struct box<glm::detail::tvec2<float> > mLayoutInPage;
    struct box<glm::detail::tvec2<float> > mBodyLayoutInPage;
    struct box<glm::detail::tvec2<float> > mContainingViewport;
    struct ChartProjectedBoundsSpaces mSpaces;
    TSCH3DCamera * mOriginalCamera;
    struct ChartScenePropertyAccessor * mOriginalSceneAccessor;
    struct box<glm::detail::tvec3<float> > mShadowsLayoutBounds;
    struct box<glm::detail::tvec3<float> > mLayoutBounds;
    struct box<glm::detail::tvec3<float> > mConstantDepthBodyLayoutBounds;
    struct box<glm::detail::tvec3<float> > mBodyLayoutBounds;
    struct box<glm::detail::tvec3<float> > mLabelsLayoutBounds;
    struct box<glm::detail::tvec3<float> > mChartBounds;
    struct box<glm::detail::tvec3<float> > mOrientBounds;
    struct box<glm::detail::tvec3<float> > mDrawingBounds;
    struct box<glm::detail::tvec3<float> > mLabelsBounds;
    char mEnableScaledDepth;
    int mLabelsMode;
}

@property (readonly, nonatomic) struct ChartProjectedBoundsSpaces * spaces;
@property (nonatomic) struct box<glm::detail::tvec2<float> > layoutInPage;
@property (nonatomic) struct box<glm::detail::tvec2<float> > bodyLayoutInPage;
@property (nonatomic) struct box<glm::detail::tvec2<float> > containingViewport;
@property (nonatomic) char enableScaledDepth;
@property (nonatomic) int labelsMode;

- (NSObject *)updatedConstantDepthSceneFromScene:(NSObject *)arg0;
- (struct box<glm::detail::tvec3<float> >)boundsFromObjectBoundsOfType:(NSObject *)arg0;
- (NSArray *)drawingBoundsSceneObjectClasses;
- (NSArray *)labelsSceneObjectClasses;
- (NSArray *)chartSceneObjectClasses;
- (int)p_depthBoundsTypes;
- (struct box<glm::detail::tvec3<float> >)getBoundsFromObjectBoundsForScene:(NSObject *)arg0 boundsType:(SEL)arg1;
- (void)calculateLayoutBoundsSkippingLayoutSceneBounds:(char)arg0;
- (void)calculateLayoutBounds;
- (char)p_excludesLabels;
- (void)calculateLabelsBounds;
- (char)p_updatesLabelsOnly;
- (void)calculateBounds;
- (void)calculateLabelsBoundsIfNecssary;
- (void)calculateBoundsIfNecessary;
- (void)updateLayoutBounds;
- (void)updateLayoutBoundsIfNecessary;
- (void)updateRenderBounds;
- (struct box<glm::detail::tvec3<float> >)p_extendLabelsBoundsToBounds:(id)arg0;
- (void)calculateLayoutLabelsBounds;
- (struct ChartProjectedBoundsSpaces *)spaces;
- (struct box<glm::detail::tvec2<float> >)layoutInPage;
- (void)setLayoutInPage:(struct box<glm::detail::tvec2<float> >)arg0;
- (struct box<glm::detail::tvec2<float> >)bodyLayoutInPage;
- (void)setBodyLayoutInPage:(struct box<glm::detail::tvec2<float> >)arg0;
- (struct box<glm::detail::tvec2<float> >)containingViewport;
- (void)setContainingViewport:(struct box<glm::detail::tvec2<float> >)arg0;
- (char)enableScaledDepth;
- (void)setEnableScaledDepth:(char)arg0;
- (int)labelsMode;
- (void)setLabelsMode:(int)arg0;
- (Class)labelsMeshRendererClassForLabelsRenderer:(NSObject *)arg0;
- (void)dealloc;
- (char)run;
- (void).cxx_construct;
- (void)updateBounds;

@end
