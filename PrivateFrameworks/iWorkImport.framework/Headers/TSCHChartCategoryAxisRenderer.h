/* Runtime dump - TSCHChartCategoryAxisRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartCategoryAxisRenderer : TSCHChartAxisRenderer

- (id)transparencyLayers;
- (void)drawIntoLayer:(int)arg0 inContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (struct CGRect)frameForEditingTextForSelectionPath:(NSString *)arg0;
- (char)canEditTextForSelectionPath:(NSString *)arg0;
- (char)canRenderSelectionPath:(NSString *)arg0;
- (void)renderIntoContext:(struct CGContext *)arg0 selection:(struct _NSRange *)arg1;
- (void)addSelection:(TSWPSelection *)arg0 toCGPath:(struct CGPath *)arg1;
- (NSObject *)categoryAxisLayoutItem;
- (void)p_drawIntoLayer:(int)arg0 inContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2 limitRenderLabels:(struct CGSize)arg3 limitLabelIndex:(NSObject *)arg4 rangePtr:(int)arg5;
- (unsigned int)p_categoryIndexForSelectionPath:(NSString *)arg0;
- (unsigned int)p_seriesIndexForSelectionPath:(NSString *)arg0;
- (char)p_doesSelectionPathReferToAxisLabel:(NSString *)arg0;
- (char)p_doesSelectionPathReferToAxisSeriesLabel:(NSString *)arg0;

@end
