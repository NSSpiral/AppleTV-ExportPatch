/* Runtime dump - TSCH3DChartCacheableGetProjectedBoundsPipeline
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartCacheableGetProjectedBoundsPipeline : TSCH3DChartGetProjectedBoundsPipeline
{
    char mUseIndividualBounds;
    char mLayoutBoundsValid;
    struct box<glm::detail::tvec3<float> > mShadowsLayout3DBounds;
    struct box<glm::detail::tvec3<float> > mLayout3DBounds;
    struct box<glm::detail::tvec3<float> > mBodyLayout3DBounds;
    struct box<glm::detail::tvec3<float> > mConstantDepthBodyLayout3DBounds;
    TSCH3DGetBoundsProjector * mProjector;
}

@property (nonatomic) char useIndividualBounds;

+ (char)includesDepthForUnitScaleForScene:(NSObject *)arg0;
+ (void)setIncludesDepthForUnitScale:(char)arg0 forScene:(NSObject *)arg1;

- (NSObject *)updatedConstantDepthSceneFromScene:(NSObject *)arg0;
- (struct box<glm::detail::tvec3<float> >)boundsFromObjectBoundsOfType:(NSObject *)arg0;
- (void)calculateLayoutBounds;
- (void)calculateBounds;
- (void)updateLayoutBounds;
- (void)updateRenderBounds;
- (void)calculateLayoutLabelsBounds;
- (char)useIndividualBounds;
- (void)invalidateCachedBounds;
- (void)setUseIndividualBounds:(char)arg0;
- (Class)labelsMeshRendererClassForLabelsRenderer:(NSObject *)arg0;
- (TSCH3DChartCacheableGetProjectedBoundsPipeline *)initWithScene:(NSObject *)arg0;
- (void)dealloc;
- (void).cxx_construct;
- (void)updateBounds;

@end
