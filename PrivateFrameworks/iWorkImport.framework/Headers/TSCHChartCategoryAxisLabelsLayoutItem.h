/* Runtime dump - TSCHChartCategoryAxisLabelsLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartCategoryAxisLabelsLayoutItem : TSCHChartAxisLabelsLayoutItem

- (unsigned int)numberOfLabelsForAxis:(id)arg0;
- (id)labelStringForAxis:(id)arg0 index:(unsigned int)arg1;
- (double)unitSpaceValueForAxis:(id)arg0 index:(unsigned int)arg1;
- (unsigned int)selectionPathLabelIndexForIndex:(unsigned int)arg0 axis:(id)arg1;
- (NSObject *)selectionPathLabelType;
- (struct CGPoint)axisAnchorForPosition:(int)arg0 degrees:(float)arg1 area:(struct CGRect)arg2 unrotatedSize:(struct CGSize)arg3 unitSpaceValue:(id)arg4;
- (struct CGPoint)labelAnchorForPosition:(int)arg0 degrees:(float)arg1;
- (TSCHChartCategoryAxisLabelsLayoutItem *)initWithParent:(TSCHChartLayoutItem *)arg0;

@end
