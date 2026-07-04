/* Runtime dump - TSCH2DChartLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH2DChartLayout : TSCHChartLayout
{
    TSCHChartRootLayoutItem * mLayoutTreeRoot;
    struct CGSize mLastChartBodySize;
    struct CGSize mStartingSize;
    struct CGRect mStartingLegendInnerFrame;
    struct CGRect mStartingChartInnerFrame;
    NSValue * mCachedOriginRelativeToChartAreaFrame;
}

@property (copy, nonatomic) NSDictionary * seriesIndexedPieWedgeExplosions;
@property (readonly) TSCHChartRootLayoutItem * p_layoutTree;

+ (NSObject *)propertiesThatInvalidateLayout;

- (id)subselectionKnobPositionsForSelection:(id)arg0;
- (void)layoutForChartAreaSize:(struct CGSize)arg0;
- (struct CGRect)chartBodyFrame;
- (void)setLegendSize:(struct CGSize)arg0;
- (struct CGRect)chartAreaFrame;
- (struct CGRect)legendFrame;
- (struct CGRect)outerLayoutFrame;
- (void)layoutForCircumscribingSize:(struct CGSize)arg0;
- (void)setLayoutSettings:(struct ?)arg0;
- (struct CGRect)titleFrame;
- (TSCH2DChartLayout *)initWithChartInfo:(NSDictionary *)arg0;
- (void)layoutForChartBodySize:(struct CGSize)arg0;
- (void)layoutForResizingSize:(struct CGSize)arg0;
- (struct CGRect)boundsForResize;
- (NSObject *)renderersWithRep:(NSObject *)arg0;
- (struct CGRect)outerShadowFrame;
- (TSCHChartRootLayoutItem *)p_layoutTree;
- (struct CGRect)legendModelGeometryFrame;
- (struct CGPoint)p_cachedOriginRelativeToChartAreaFrame;
- (void)setLegendModelGeometryFrame:(struct CGRect)arg0;
- (void)p_ensureValidForInwardLayout;
- (void)p_layoutNowForCircumscribingSize:(struct CGSize)arg0;
- (void)p_layoutNowForChartAreaSize:(struct CGSize)arg0;
- (void)p_layoutNowForChartBodySize:(struct CGSize)arg0;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (NSDictionary *)seriesIndexedPieWedgeExplosions;
- (void)setSeriesIndexedPieWedgeExplosions:(NSDictionary *)arg0;
- (unsigned int)dataSetIndex;
- (void)setDataSetIndex:(unsigned int)arg0;
- (id)hitChartElements:(struct CGPoint)arg0 passingTest:(id /* block */)arg1;
- (NSArray *)subselectionHaloPositionsForSelections:(NSArray *)arg0;
- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0;
- (struct CGRect)legendDrawingFrame;
- (void)invalidateCachedOriginRelativeToChartAreaFrame;
- (struct CGRect)legendGeometryFrame;
- (void)setLegendGeometryFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)invalidate;
- (ABModel *)model;

@end
