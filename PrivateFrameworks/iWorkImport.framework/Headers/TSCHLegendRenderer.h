/* Runtime dump - TSCHLegendRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendRenderer : TSCHRenderer
{
    struct CGPoint _textEditingPixelAlignmentOffset;
}

@property (nonatomic) struct CGPoint textEditingPixelAlignmentOffset;

- (void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect)arg1;
- (char)canRenderSelectionPath:(NSString *)arg0;
- (void)renderIntoContext:(struct CGContext *)arg0 selection:(struct _NSRange *)arg1;
- (void)addSelection:(TSWPSelection *)arg0 toCGPath:(struct CGPath *)arg1;
- (void)p_drawLineAreaBadgeIntoContext:(struct CGContext *)arg0 forCell:(NSObject *)arg1;
- (void)p_drawPieBadgeIntoContext:(struct CGContext *)arg0 forCell:(NSObject *)arg1;
- (void)p_draw3DLineBadgeIntoContext:(struct CGContext *)arg0 forCell:(NSObject *)arg1;
- (void)p_drawDefaultBadgeIntoContext:(struct CGContext *)arg0 forCell:(NSObject *)arg1;
- (NSObject *)p_selectionPathForCell:(NSObject *)arg0;
- (void)p_drawBadgeForCell:(NSObject *)arg0 intoContext:(struct CGContext *)arg1;
- (void)p_drawLabelForCell:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 rangePtr:(struct _NSRange *)arg2;
- (struct CGPoint)textEditingPixelAlignmentOffset;
- (void)setTextEditingPixelAlignmentOffset:(struct CGPoint)arg0;

@end
