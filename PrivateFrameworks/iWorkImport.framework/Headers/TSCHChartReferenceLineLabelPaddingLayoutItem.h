/* Runtime dump - TSCHChartReferenceLineLabelPaddingLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartReferenceLineLabelPaddingLayoutItem : TSCHChartLayoutItem
{
    TSCHChartAxisID * mAxisID;
}

@property (retain, nonatomic) TSCHChartAxisID * axisID;

- (TSCHChartAxisID *)axisID;
- (TSCHChartReferenceLineLabelPaddingLayoutItem *)initWithParent:(NSObject *)arg0 axisID:(TSCHChartAxisID *)arg1;
- (struct CGSize)calcMinSize;
- (void)setAxisID:(TSCHChartAxisID *)arg0;
- (char)p_hasReferenceLineLabels;
- (void)dealloc;

@end
