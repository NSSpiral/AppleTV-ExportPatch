/* Runtime dump - TSCHChartBodyLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartBodyLayoutItem : TSCHChartLayoutItem
{
    char mVertical;
}

- (id)subselectionKnobPositionsForSelection:(id)arg0;
- (struct CGRect)calcDrawingRect;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg0 withBlock:(id /* block */)arg1;
- (void)p_layoutOutward;
- (struct CGAffineTransform)transformForRenderingLabelForSeries:(unsigned int)arg0 forGroup:(unsigned int)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3;
- (NSObject *)renderersWithRep:(NSObject *)arg0;
- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0;
- (struct CGRect)calcOverhangRect;
- (struct CGRect)p_calcDrawingRectForModel:(NSObject *)arg0;
- (struct CGRect)p_calcDrawingRectForReferenceLines;
- (unsigned int)countOfElementsForModel:(NSObject *)arg0 series:(struct Transform * *)arg1 forGroupsBySeries:(id)arg2 outNewElementBounds:(struct CGRect * *)arg3 outNewClipRects:(struct CGRect)arg4 outNewElementPaths:(struct CGRect * *)arg5;
- (struct CGRect)p_exactLabelsDrawingRectForSeries:(id)arg0;
- (void)p_addRendererOfClass:(Class)arg0 andRep:(NSObject *)arg1 toArray:(NSArray *)arg2;
- (void)p_nudgeBarElementFrame:(struct CGRect *)arg0 usingBarModelCache:(struct CGSize)arg1 unitSpaceValueBegin:(id)arg2 unitSpaceValueEnd:(id)arg3;
- (struct CGAffineTransform)p_transformForRenderingLabelForBarColSeries:(unsigned int)arg0 forGroup:(unsigned int)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3;
- (struct CGAffineTransform)p_transformForRenderingLabelForLineAreaSeries:(unsigned int)arg0 forGroup:(unsigned int)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3;
- (id)p_valueLabelSubselectionKnobsForSeries:(id)arg0;
- (id)p_errorBarSubselectionKnobsForSeries:(id)arg0 axisID:(TSCHChartAxisID *)arg1;
- (id)p_trendLineSubselectionKnobsForSeries:(id)arg0;
- (id)p_trendLineEquationSubselectionKnobsForSeries:(id)arg0;
- (id)p_trendLineR2SubselectionKnobsForSeries:(id)arg0;
- (NSObject *)p_refLineSubselectionKnobsForStyleSwapIndex:(unsigned int)arg0;
- (TSCHChartBodyLayoutItem *)initWithParent:(TSCHChartLayoutItem *)arg0;

@end
