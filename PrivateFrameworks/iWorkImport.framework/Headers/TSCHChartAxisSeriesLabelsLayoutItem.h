/* Runtime dump - TSCHChartAxisSeriesLabelsLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisSeriesLabelsLayoutItem : TSCHChartCategoryAxisLabelsLayoutItem

- (unsigned int)numberOfLabelsForAxis:(id)arg0;
- (id)labelStringForAxis:(id)arg0 index:(unsigned int)arg1;
- (double)unitSpaceValueForAxis:(id)arg0 index:(unsigned int)arg1;
- (struct CGSize)calcMinSize;
- (unsigned int)selectionPathLabelIndexForIndex:(unsigned int)arg0 axis:(id)arg1;
- (char)showLabelsForAxis:(id)arg0;
- (unsigned int)strideInLayoutArea:(struct CGRect)arg0;
- (NSObject *)selectionPathLabelType;
- (TSCHChartAxisSeriesLabelsLayoutItem *)initWithParent:(TSCHChartLayoutItem *)arg0;

@end
