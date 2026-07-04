/* Runtime dump - CMDrawingContext
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDrawingContext : NSObject
{
    CMDrawableMapper * _mapper;
    NSMutableArray * _actions;
    struct CGRect _frame;
    struct CGRect _finalFrame;
    struct __CFData * _data;
    struct CGDataConsumer * _dataConsumer;
    struct CGContext * _cgContext;
    NSAffineTransform * _currentTransform;
    NSMutableArray * _transforms;
    struct CGImage * _fillImage;
}

- (CMDrawingContext *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (struct CGRect)frame;
- (void)setLineWidth:(float)arg0;
- (void)setFillColor:(struct CGColor *)arg0;
- (void)setStrokeColor:(struct CGColor *)arg0;
- (void).cxx_construct;
- (void)setFillImage:(struct CGImage *)arg0;
- (void)addTransform:(NSObject *)arg0;
- (void)restoreLastTransform;
- (struct CGRect)transformRectToGroup:(NSObject *)arg0;
- (struct CGRect)pdfFrame;
- (id)copyPDF;
- (void)_applyTransform:(NSObject *)arg0;
- (void)_copyCGContext;
- (void)_playbackActions;
- (void)_closeContext;
- (void)_addTransform:(NSObject *)arg0;
- (void)_restoreLastTransform;
- (struct CGRect)_transformRect:(NSObject *)arg0 withTransform:(SEL)arg1;
- (struct CGContext *)_cgContext;
- (void)setMapper:(CMDrawableMapper *)arg0;
- (CMDrawableMapper *)mapper;
- (float)currentScaleFactor;
- (struct CGAffineTransform)currentTransform;
- (void)setLineDash:(float *)arg0;
- (void)addDebugPath:(struct CGPath *)arg0;
- (void)addPath:(struct CGPath *)arg0;
- (struct CGRect)transformRectToPage:(id)arg0;

@end
