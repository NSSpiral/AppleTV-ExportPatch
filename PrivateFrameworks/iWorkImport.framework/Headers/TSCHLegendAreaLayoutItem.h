/* Runtime dump - TSCHLegendAreaLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendAreaLayoutItem : TSCHChartLayoutItem
{
    NSValue * mLegendGeometryFrame;
}

@property (nonatomic) struct CGRect legendModelGeometryFrame;

- (struct CGSize)calcMinSize;
- (struct CGRect)calcDrawingRect;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg0 withBlock:(id /* block */)arg1;
- (void)clearAll;
- (void)setLayoutSize:(struct CGSize)arg0;
- (NSObject *)renderersWithRep:(NSObject *)arg0;
- (struct CGRect)legendModelGeometryFrame;
- (void)setLegendModelGeometryFrame:(struct CGRect)arg0;
- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0;
- (void)clearLayoutSize;
- (struct CGAffineTransform)transformForRenderingBadge:(unsigned int)arg0 cellType:(int)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3;
- (struct CGAffineTransform)transformForRenderingLabel:(unsigned int)arg0 cellType:(int)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3;
- (struct CGAffineTransform)transformForRenderingLabel:(unsigned int)arg0 cellType:(int)arg1 range:(struct _NSRange)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4;
- (void)updateLegendGeometryFrameFromLegendModelCache;
- (float)p_legendModelWidth;
- (struct CGAffineTransform)p_transformForRenderingLabel:(unsigned int)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 cellType:(int)arg2 rangePtr:(struct _NSRange *)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5;
- (void)resetLayoutSize;
- (struct CGAffineTransform)transformForRenderingLabel:(unsigned int)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 cellType:(int)arg2 range:(struct _NSRange)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5;
- (void)dealloc;
- (TSCHLegendAreaLayoutItem *)initWithParent:(TSCHChartLayoutItem *)arg0;

@end
