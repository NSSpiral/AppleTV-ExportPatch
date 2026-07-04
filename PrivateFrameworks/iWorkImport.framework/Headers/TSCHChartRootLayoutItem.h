/* Runtime dump - TSCHChartRootLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartRootLayoutItem : TSCHChartLayoutItem <TSCHUnretainedParent>
{
    TSCHChartInfo * mChartInfo;
    TSCHChartAbstractAreaLayoutItem * mChartArea;
    TSCHLegendAreaLayoutItem * mLegend;
    struct ? mLayoutSettings;
    struct CGRect mLegendInnerFrame;
    struct CGRect mChartInnerFrame;
    char mInResize;
    struct CGSize mStartingSize;
    NSDictionary * mSeriesIndexedPieWedgeExplosions;
    TSCHChartModel * mChartModel;
}

@property (readonly, nonatomic) TSCHChartAbstractAreaLayoutItem * chartAreaLayoutItem;
@property (readonly, nonatomic) TSCHLegendAreaLayoutItem * legendAreaLayoutItem;
@property (copy, nonatomic) NSDictionary * seriesIndexedPieWedgeExplosions;
@property (nonatomic) unsigned int dataSetIndex;

- (NSDictionary *)chartInfo;
- (void)clearParent;
- (struct CGRect)calcDrawingRect;
- (void)setLegendSize:(struct CGSize)arg0;
- (struct ?)layoutSettings;
- (void)clearAll;
- (void)setLayoutSettings:(struct ?)arg0;
- (char)isInResize;
- (struct CGSize)startingSize;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (TSCHChartRootLayoutItem *)initWithChartInfo:(NSDictionary *)arg0;
- (TSCHChartAbstractAreaLayoutItem *)chartAreaLayoutItem;
- (NSObject *)renderersWithRep:(NSObject *)arg0;
- (TSCHLegendAreaLayoutItem *)legendAreaLayoutItem;
- (void)updateLayoutOffset;
- (void)setChartInnerFrame:(struct CGRect)arg0 legendInnerFrame:(struct CGSize)arg1;
- (void)setChartBodySize:(struct CGSize)arg0;
- (NSDictionary *)seriesIndexedPieWedgeExplosions;
- (void)setSeriesIndexedPieWedgeExplosions:(NSDictionary *)arg0;
- (unsigned int)dataSetIndex;
- (void)setDataSetIndex:(unsigned int)arg0;
- (struct CGRect)calcOverhangRect;
- (void)buildSubTree;
- (void)updateLayoutSize;
- (void)p_updatePieWedgeExplosionsFromModel;
- (void)beginResizeWithStartingSize:(struct CGSize)arg0;
- (void)updateSizeDuringResizeTo:(struct CGSize)arg0;
- (void)endResizeOperation;
- (void)invalidateSeriesIndexedPieWedgeExplosions;
- (void)invalidateTransientModel;
- (void)dealloc;
- (ABModel *)model;
- (<TSKModel> *)root;
- (TSCHChartRootLayoutItem *)initWithParent:(TSCHChartLayoutItem *)arg0;

@end
