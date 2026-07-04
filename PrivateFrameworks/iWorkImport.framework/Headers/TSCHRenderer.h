/* Runtime dump - TSCHRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHRenderer : NSObject <TSCHSupportsTextEditing>
{
    <TSCHSupportsRendering> * mChartRep;
    TSCHChartLayoutItem * mChartLayoutItem;
}

@property (readonly, nonatomic) TSCHChartInfo * chartInfo;
@property (readonly, nonatomic) TSCHChartModel * model;
@property (readonly, nonatomic) <TSCHSupportsRendering> * chartRep;
@property (readonly, nonatomic) TSCHChartLayoutItem * layoutItem;
@property (readonly, nonatomic) float viewScale;
@property (readonly, nonatomic) char supportsSeparateLabelsRenderPass;
@property (readonly, nonatomic) char debugLayout;
@property (readonly, nonatomic) struct CGColor * debugColor;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (float)viewScale;
- (TSCHChartLayoutItem *)layoutItem;
- (TSCHChartInfo *)chartInfo;
- (void)renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect)arg1;
- (<TSCHSupportsRendering> *)chartRep;
- (struct CGRect)tLayerRectForContext:(NSObject *)arg0;
- (void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect)arg1;
- (int)textDrawingFlagForSelectionPath:(NSString *)arg0;
- (struct CGRect)frameForEditingTextForSelectionPath:(NSString *)arg0;
- (char)canEditTextForSelectionPath:(NSString *)arg0;
- (char)isCompositeRenderer;
- (char)canRenderSelectionPath:(NSString *)arg0;
- (void)renderIntoContext:(struct CGContext *)arg0 selection:(struct _NSRange *)arg1;
- (void)addSelection:(TSWPSelection *)arg0 toCGPath:(struct CGPath *)arg1;
- (void)useEditedString:(NSString *)arg0;
- (TSCHRenderer *)initWithChartRep:(<TSCHSupportsRendering> *)arg0 layoutItem:(TSCHChartLayoutItem *)arg1;
- (void)drawErrorBarsInContext:(struct CGContext *)arg0 chartVertical:(char)arg1 elementRenderClass:(Class)arg2;
- (void)drawTrendLinesInContext:(struct CGContext *)arg0 chartVertical:(char)arg1 elementRenderClass:(Class)arg2;
- (int)chunkPlane;
- (char)supportsSeparateLabelsRenderPass;
- (struct CGRect)chartLayoutSpaceRenderingRect;
- (char)debugLayout;
- (void)p_debugLayoutInContext:(struct CGContext *)arg0;
- (struct CGColor *)debugColor;
- (void)strokeRectInContext:(struct CGContext *)arg0 rect:(struct CGRect)arg1 color:(struct CGSize)arg2;
- (NSString *)textEditorForSelectionPath:(NSString *)arg0 chartEditor:(id)arg1;
- (float)frameHeightChangeForPath:(NSString *)arg0;
- (void)dealloc;
- (TSCHChartModel *)model;

@end
