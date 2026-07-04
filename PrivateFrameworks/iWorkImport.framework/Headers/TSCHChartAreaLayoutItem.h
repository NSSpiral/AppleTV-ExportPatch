/* Runtime dump - TSCHChartAreaLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem
{
    TSCHChartAxisLayoutItem * mTopHorizontalAxis;
    TSCHChartAxisLayoutItem * mBottomHorizontalAxis;
    TSCHChartAxisLayoutItem * mLeftVerticalAxis;
    TSCHChartAxisLayoutItem * mRightVerticalAxis;
    unsigned int mRelayoutDepth;
    char mInOutwardLayout;
}

@property (readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem * rightRefLineLabels;
@property (readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem * topRefLineLabels;

- (void)protected_iterateHitChartElements:(struct CGPoint)arg0 withBlock:(id /* block */)arg1;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (struct CGRect)titleFrame;
- (TSCHChartReferenceLineLabelsLayoutItem *)rightRefLineLabels;
- (TSCHChartReferenceLineLabelsLayoutItem *)topRefLineLabels;
- (NSObject *)renderersWithRep:(NSObject *)arg0;
- (void)buildSubTree;
- (struct CGRect)i_currentBufferAreaUnitRect;
- (float)p_dataSetNameLabelPadding;
- (Class)p_axisLayoutItemClassForAxisID:(NSObject *)arg0;
- (void)p_arrangeSizedChildren;
- (void)p_updateMinHitSizes;
- (void)dealloc;

@end
