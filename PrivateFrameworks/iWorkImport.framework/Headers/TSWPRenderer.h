/* Runtime dump - TSWPRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPRenderer : NSObject
{
    struct CGContext * _context;
    char _flipShadows;
    float _viewScale;
    TSUBezierPath * _interiorClippingPath;
}

@property (nonatomic) char flipShadows;
@property (nonatomic) float viewScale;
@property (retain, nonatomic) TSUBezierPath * interiorClippingPath;

+ (struct __CTFont *)invisiblesFont;

- (float)viewScale;
- (void)willRenderFragmentsWithDrawingState:(struct TSWPDrawingState *)arg0;
- (struct CGRect)getClipBoundingBox;
- (void)drawAdornmentRects:(struct vector<TSWPAdornmentRect, std::__1::allocator<TSWPAdornmentRect> > *)arg0 forColumn:(struct vector<TSWPAdornmentRect, std::__1::allocator<TSWPAdornmentRect> >)arg1 foreground:(struct TSWPAdornmentRect *)arg2;
- (void)drawFragment:(struct TSWPLineFragment *)arg0 updateRect:(struct TSWPLineFragment)arg1 drawingState:(struct CGSize)arg2 runState:(NSObject *)arg3 lineDrawFlags:(struct CGRect)arg4;
- (void)didRenderFragments;
- (char)p_shouldClipFragment:(struct TSWPLineFragment *)arg0 drawingState:(struct TSWPLineFragment)arg1 lineDrawFlags:(struct CGSize)arg2 updateRect:(NSObject *)arg3 outClipRect:(struct CGRect)arg4;
- (void)p_drawAdornmentLineBackgroundRect:(struct TSWPAdornmentLine *)arg0 lineDrawFlags:(struct TSWPAdornmentLine)arg1 drawingState:(float)arg2 bounds:(struct CGColor *)arg3;
- (void)p_calculateMarkAdornments:(struct vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> > *)arg0 drawingState:(struct TSWPAdornmentLine *)arg1 lineFragment:(struct __compressed_pair<TSWPAdornmentLine *, std::__1::allocator<TSWPAdornmentLine> >)arg2;
- (void)p_drawDictationMarkingsFragment:(struct TSWPLineFragment *)arg0 drawingState:(struct TSWPLineFragment)arg1;
- (void)p_drawAutocorrectionMarkingsFragment:(struct TSWPLineFragment *)arg0 drawingState:(struct TSWPLineFragment)arg1;
- (void)p_drawListLabelForFragment:(struct TSWPLineFragment *)arg0 drawingState:(struct TSWPLineFragment)arg1 lineDrawFlags:(struct CGSize)arg2;
- (void)p_drawTextInRunsForLine:(struct __CTLine *)arg0 fragment:(struct TSWPLineFragment *)arg1 state:(struct TSWPLineFragment)arg2 tateChuYoko:(struct CGSize)arg3 baseRange:(NSObject *)arg4 isFirstLineRef:(struct CGRect)arg5;
- (void)p_drawAdornmentLine:(struct TSWPAdornmentLine *)arg0 drawingState:(struct TSWPAdornmentLine)arg1 lineFragment:(float)arg2 lineFragmentStart:(struct CGColor *)arg3 vertical:(float)arg4;
- (void)p_drawAdornments:(struct TSWPAdornments *)arg0 lineFragment:(struct TSWPAdornments)arg1 state:(struct __CTFont *)arg2;
- (void)p_drawInvisiblesBreakLine:(struct TSWPAdornmentLine *)arg0 lineFragment:(struct TSWPAdornmentLine)arg1 state:(float)arg2;
- (TSUBezierPath *)interiorClippingPath;
- (void)p_strokeLineFromPoint:(struct CGPoint)arg0 toPoint:(struct CGPoint)arg1 width:(float)arg2;
- (void)p_drawWordMarkingsForFragment:(struct TSWPLineFragment *)arg0 color:(struct TSWPLineFragment)arg1 ranges:(struct CGSize)arg2 suppressRange:(NSObject *)arg3 drawingState:(struct CGRect)arg4;
- (void)p_strokeWavyLineFromPoint:(struct CGPoint)arg0 toPoint:(struct CGPoint)arg1 width:(float)arg2;
- (char)p_canvasSelectionIncludesDrawableOfAttachmentAtCharIndex:(unsigned int)arg0 state:(struct TSWPDrawingState *)arg1;
- (void)p_drawAttachmentGlyphAtPosition:(struct ?)arg0 fragment:(struct TSWPLineFragment *)arg1;
- (void)p_drawInvisiblesAdornments:(struct TSWPAdornments *)arg0 lineFragment:(struct TSWPAdornments)arg1 state:(struct __CTFont *)arg2;
- (void)p_drawHiddenDeletionsAdornments:(struct TSWPAdornments *)arg0 lineFragment:(struct TSWPAdornments)arg1 state:(struct __CTFont *)arg2;
- (void)p_drawAttachmentAdornments:(struct TSWPAdornments *)arg0 lineFragment:(struct TSWPAdornments)arg1 state:(struct __CTFont *)arg2;
- (void)p_drawAdornmentGlyphs:(struct TSWPAdornments *)arg0 lineFragment:(struct TSWPAdornments)arg1 state:(struct __CTFont *)arg2;
- (struct CGSize)convertSizeToDeviceSpace:(struct CGSize)arg0;
- (char)flipShadows;
- (void)setFlipShadows:(char)arg0;
- (void)setInteriorClippingPath:(TSUBezierPath *)arg0;
- (void)dealloc;
- (TSWPRenderer *)initWithContext:(struct CGContext *)arg0;
- (void)setViewScale:(float)arg0;

@end
