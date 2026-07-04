/* Runtime dump - TSCHChartValueAxisLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartValueAxisLayoutItem : TSCHChartAxisLayoutItem
{
    TSCHChartValueAxisLabelsLayoutItem * mValueLabels;
}

@property (readonly, nonatomic) TSCHChartValueAxisLabelsLayoutItem * axisValueLabelsLayoutItem;

- (TSCHChartValueAxisLabelsLayoutItem *)axisValueLabelsLayoutItem;
- (NSObject *)renderersWithRep:(NSObject *)arg0;
- (void)buildSubTree;
- (void)p_layoutLabelsNow;
- (struct CGRect)protected_layoutSpaceRectForAllLabels;
- (void)dealloc;

@end
