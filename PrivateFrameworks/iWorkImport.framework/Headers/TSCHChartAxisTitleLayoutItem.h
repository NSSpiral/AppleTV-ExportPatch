/* Runtime dump - TSCHChartAxisTitleLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisTitleLayoutItem : TSCHChartLayoutItem
{
    struct CGSize mChartBodySize;
    float mMinHitSize;
}

@property (nonatomic) struct CGSize chartBodySize;
@property (nonatomic) float minHitSize;

- (id)subselectionKnobPositionsForSelection:(id)arg0;
- (struct CGSize)calcMinSize;
- (struct CGRect)calcDrawingRect;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg0 withBlock:(id /* block */)arg1;
- (NSObject *)axisLayoutItem;
- (struct CGAffineTransform)transformForRenderingOutElementSize:(struct CGSize *)arg0 outClipRect:(struct CGRect *)arg1;
- (struct CGAffineTransform)transformForRenderingRange:(struct _NSRange)arg0 outElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2;
- (char)isTitleOn;
- (void)setChartBodySize:(struct CGSize)arg0;
- (NSArray *)subselectionHaloPositionsForSelections:(NSArray *)arg0;
- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0;
- (struct CGSize)chartBodySize;
- (struct CGAffineTransform)p_transformForRenderingRangePtr:(struct _NSRange *)arg0 outElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2;
- (float)minHitSize;
- (void)setMinHitSize:(float)arg0;
- (float)titlePaddingForAxis:(id)arg0;
- (TSCHChartAxisTitleLayoutItem *)initWithParent:(TSCHChartLayoutItem *)arg0;

@end
