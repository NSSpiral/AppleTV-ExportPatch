/* Runtime dump - TSCHChartReferenceLineLabelsLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartReferenceLineLabelsLayoutItem : TSCHChartLayoutItem
{
    TSCHChartAxisID * mAxisID;
}

@property (readonly, nonatomic) TSCHChartAxisID * axisID;

- (TSCHChartAxisID *)axisID;
- (id)subselectionKnobPositionsForSelection:(id)arg0;
- (TSCHChartReferenceLineLabelsLayoutItem *)initWithParent:(NSObject *)arg0 axisID:(TSCHChartAxisID *)arg1;
- (struct CGSize)calcMinSize;
- (struct CGRect)calcDrawingRect;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg0 withBlock:(id /* block */)arg1;
- (NSObject *)p_areaLayoutItem;
- (void)dealloc;

@end
