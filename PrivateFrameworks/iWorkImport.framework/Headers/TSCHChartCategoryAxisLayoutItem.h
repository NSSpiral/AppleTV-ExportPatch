/* Runtime dump - TSCHChartCategoryAxisLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartCategoryAxisLayoutItem : TSCHChartAxisLayoutItem
{
    TSCHChartAxisSeriesLabelsLayoutItem * mSeriesLabels;
    TSCHChartCategoryAxisLabelsLayoutItem * mCategoryLabels;
}

@property (readonly, nonatomic) TSCHChartAxisSeriesLabelsLayoutItem * axisSeriesLabelsLayoutItem;
@property (readonly, nonatomic) TSCHChartCategoryAxisLabelsLayoutItem * axisCategoryLabelsLayoutItem;

- (TSCHChartCategoryAxisLabelsLayoutItem *)axisCategoryLabelsLayoutItem;
- (TSCHChartAxisSeriesLabelsLayoutItem *)axisSeriesLabelsLayoutItem;
- (NSObject *)renderersWithRep:(NSObject *)arg0;
- (void)buildSubTree;
- (void)p_layoutLabelsNow;
- (struct CGRect)protected_layoutSpaceRectForAllLabels;
- (void)dealloc;

@end
