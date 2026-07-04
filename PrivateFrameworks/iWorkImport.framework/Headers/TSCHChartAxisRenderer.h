/* Runtime dump - TSCHChartAxisRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisRenderer : TSCHRenderer <TSCHCompositeRendering>
{
    TSCHSelectionPath * mAxisTitleSelectionPath;
    struct CGRect mStartingEditingFrame;
    NSString * mEditingString;
}

@property (retain, nonatomic) NSString * editingString;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (id)transparencyLayers;
- (void)drawIntoLayer:(int)arg0 inContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect)arg1;
- (NSObject *)axisLayoutItem;
- (char)p_needsSharedTickMarkLayer;
- (char)p_needsPositionBasedTransparencyLayer;
- (NSString *)axisTitleSelectionPath;
- (void)p_addLinePath:(struct CGContext *)arg0 stroke:(TSDStroke *)arg1;
- (void)p_addTickmarkPaths:(struct CGContext *)arg0 axis:(id)arg1 locations:(id *)arg2 stroke:(TSDStroke *)arg3 width:(float)arg4;
- (void)p_drawTitle:(struct CGContext *)arg0 rangePtr:(struct _NSRange *)arg1;
- (char)p_isTitleVisible;
- (struct CGRect)frameForEditingTextForSelectionPath:(NSString *)arg0;
- (char)canEditTextForSelectionPath:(NSString *)arg0;
- (void)setEditingString:(NSString *)arg0;
- (char)needsAnySeparateLayers;
- (void)willBeginTransparencyLayer:(int)arg0 inContext:(struct CGContext *)arg1;
- (char)isCompositeRenderer;
- (void)p_debugRenderTickmarkArea:(struct CGContext *)arg0;
- (char)canRenderSelectionPath:(NSString *)arg0;
- (void)renderIntoContext:(struct CGContext *)arg0 selection:(struct _NSRange *)arg1;
- (void)addSelection:(TSWPSelection *)arg0 toCGPath:(struct CGPath *)arg1;
- (void)useEditedString:(NSString *)arg0;
- (NSString *)editingString;
- (void)dealloc;

@end
