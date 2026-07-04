/* Runtime dump - TSCH3DChartSceneAreaLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartSceneAreaLayoutItem : TSCHChartAbstractAreaLayoutItem
{
    struct CGRect mChartBodyLayoutRect;
    TSCH3DChartResizerHelper * mResizerHelper;
    TSCH3DScene * mScene;
    struct tvec2<float> mChartBodyLayoutOffsetInChartAreaLayoutSpace;
    char mIsInvariant;
    char mIsInvalidated;
    struct tvec4<float> mInitialInfoChartScale;
}

@property (nonatomic) struct CGRect chartBodyLayoutRect;
@property (readonly, nonatomic) struct tvec2<int> containingViewport;
@property (readonly, nonatomic) TSCH3DVector * containingViewportVector;
@property (readonly, nonatomic) struct ChartProjectedBoundsSpaces * projectedBounds;
@property (readonly, nonatomic) TSCH3DScene * scene;
@property (nonatomic) char isInvariant;

+ (NSObject *)worldBoundsDescriptionForScene:(NSObject *)arg0;

- (struct tvec2<int>)containingViewport;
- (struct CGRect)calcDrawingRect;
- (void)p_validate;
- (void)clearAll;
- (NSObject *)p_updatedResizerHelper;
- (TSCH3DVector *)containingViewportVector;
- (id)p_updatedResizerHelperForcingAccurateBounds:(char)arg0;
- (struct ChartProjectedBoundsSpaces *)projectedBounds;
- (NSObject *)boundsLayout:(struct CGRect)arg0 scene:(struct CGSize)arg1 forcesAccurateBounds:(id)arg2 allowsEmptyBodyLayoutBounds:(id)arg3;
- (TSCH3DChartBoundsLayout *)boundsLayout;
- (void)invalidateBounds;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg0 boundsIndex:(int)arg1;
- (struct CGRect)p_frameForSelectionPath:(NSString *)arg0 sceneObjectClass:(SEL)arg1;
- (void)p_updateBodyLayoutRect;
- (void)p_updateLayoutSize:(struct CGSize)arg0 chartBodyLayoutOffsetInChartAreaLayoutSpace:(struct tvec2<float> *)arg1;
- (struct tvec2<int>)p_currentModelSize;
- (char)p_validCacheItem:(NSObject *)arg0 inward:(char)arg1;
- (void)p_updateFromCacheItem:(NSObject *)arg0;
- (char)p_needsRefinementForInwardLayout;
- (void)p_layoutInward;
- (NSCache *)p_cache;
- (char)p_inwardLayoutCanUseCacheItem:(NSObject *)arg0;
- (NSObject *)p_cacheInwardLayout;
- (void)p_layoutOutward;
- (char)p_outwardLayoutCanUseCacheItem:(NSObject *)arg0;
- (NSObject *)p_cacheOutwardLayout;
- (void)setLayoutOffset:(struct CGPoint)arg0;
- (struct ChartProjectedBoundsSpaces *)projectedBoundsWithScene:(TSCH3DScene *)arg0 forcesAccurateBounds:(struct box<glm::detail::tvec2<float> >)arg1 allowsEmptyBodyLayoutBounds:(struct tvec2<float>)arg2;
- (id)debug_rotationBounds;
- (struct CGRect)titleFrame;
- (void)setStabilizedChartBodyLayoutRectUsingConverter:(struct ChartProjectedBoundsConverter *)arg0;
- (void)setChartBodyLayoutSize:(struct CGSize)arg0;
- (struct CGRect)chartBodyLayoutRect;
- (void)setChartBodyLayoutRect:(struct CGRect)arg0;
- (char)isInvariant;
- (void)setIsInvariant:(char)arg0;
- (TSCH3DScene *)scene;
- (void)dealloc;
- (void).cxx_construct;
- (void)clearScene;
- (TSCH3DChartSceneAreaLayoutItem *)initWithParent:(TSCHChartLayoutItem *)arg0;

@end
