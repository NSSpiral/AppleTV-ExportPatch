/* Runtime dump - TSCHChartTitleRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartTitleRenderer : TSCHRenderer
{
    struct CGRect mStartingEditingFrame;
}

- (void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect)arg1;
- (void)p_drawTitle:(struct CGContext *)arg0 rangePtr:(struct _NSRange *)arg1;
- (struct CGRect)frameForEditingTextForSelectionPath:(NSString *)arg0;
- (char)canEditTextForSelectionPath:(NSString *)arg0;
- (char)canRenderSelectionPath:(NSString *)arg0;
- (void)renderIntoContext:(struct CGContext *)arg0 selection:(struct _NSRange *)arg1;
- (void)addSelection:(TSWPSelection *)arg0 toCGPath:(struct CGPath *)arg1;
- (void)useEditedString:(NSString *)arg0;
- (float)frameHeightChangeForPath:(NSString *)arg0;
- (struct CGRect)p_rawFrameForEditingTextForSelectionPath:(NSString *)arg0;

@end
