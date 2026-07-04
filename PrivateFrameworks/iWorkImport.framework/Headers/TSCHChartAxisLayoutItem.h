/* Runtime dump - TSCHChartAxisLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisLayoutItem : TSCHChartLayoutItem
{
    TSCHChartAxisID * mAxisID;
    int mAxisPosition;
    TSCHChartAxisTitleLayoutItem * mAxisTitle;
    TSCHChartAxisPaddingLayoutItem * mAxisPadding;
    TSCHChartAxisTickMarksLayoutItem * mTickMarks;
    TSCHChartAxisLineLayoutItem * mAxisLine;
    TSCHChartReferenceLineLabelPaddingLayoutItem * mRefLineLabelPadding;
    TSCHChartReferenceLineLabelsLayoutItem * mRefLineLabels;
    struct CGSize mChartBodySize;
    TSCHChartAxisID * mReferenceLineLabelAxisID;
}

@property (nonatomic) struct CGSize chartBodySize;
@property (retain, nonatomic) TSCHChartAxisID * axisID;
@property (readonly, nonatomic) int axisPosition;
@property (readonly, nonatomic) TSCHChartAxisTitleLayoutItem * axisTitleLayoutItem;
@property (readonly, nonatomic) TSCHChartAxisPaddingLayoutItem * axisPaddingLayoutItem;
@property (readonly, nonatomic) TSCHChartAxisTickMarksLayoutItem * axisTickMarksLayoutItem;
@property (readonly, nonatomic) TSCHChartAxisLineLayoutItem * axisLineLayoutItem;
@property (readonly, nonatomic) TSCHChartReferenceLineLabelPaddingLayoutItem * refLineLabelPadding;
@property (readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem * refLineLabels;
@property (retain, nonatomic) TSCHChartAxisID * referenceLineLabelAxisID;

- (TSCHChartAxisID *)axisID;
- (id)subselectionKnobPositionsForSelection:(id)arg0;
- (struct CGSize)calcMinSize;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (void)setAxisID:(TSCHChartAxisID *)arg0;
- (TSCHChartAxisTitleLayoutItem *)axisTitleLayoutItem;
- (TSCHChartAxisLineLayoutItem *)axisLineLayoutItem;
- (TSCHChartAxisTickMarksLayoutItem *)axisTickMarksLayoutItem;
- (NSObject *)renderersWithRep:(NSObject *)arg0;
- (void)setChartBodySize:(struct CGSize)arg0;
- (NSArray *)subselectionHaloPositionsForSelections:(NSArray *)arg0;
- (struct CGRect)calcOverhangRect;
- (NSString *)p_description;
- (void)p_layoutLabelsNow;
- (struct CGRect)protected_layoutSpaceRectForAllLabels;
- (id)p_subselectionKnobPositionsForLabelsSelection:(id)arg0;
- (NSArray *)p_subselectionHaloPositionsForLabelsSelections:(NSArray *)arg0;
- (TSCHChartAxisLayoutItem *)initWithParent:(NSObject *)arg0 axisPosition:(int)arg1;
- (TSCHChartAxisPaddingLayoutItem *)axisPaddingLayoutItem;
- (struct CGSize)chartBodySize;
- (TSCHChartReferenceLineLabelPaddingLayoutItem *)refLineLabelPadding;
- (TSCHChartReferenceLineLabelsLayoutItem *)refLineLabels;
- (TSCHChartAxisID *)referenceLineLabelAxisID;
- (void)setReferenceLineLabelAxisID:(TSCHChartAxisID *)arg0;
- (void)dealloc;
- (int)axisPosition;

@end
