/* Runtime dump - UIPDFPageContentDelegate
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPageContentDelegate : NSObject
{
    UIPDFDocument * _document;
    unsigned int _pageIndex;
    UIPDFPageView * _view;
    struct CGRect _bounds;
    struct CGAffineTransform _transform;
    struct CGColor * _white;
    struct CGColor * _highlightColor;
    CALayer * _owner;
    struct CGRect _box;
    unsigned int _pageRotation;
    int _lock;
    unsigned int _threadCount;
    char _isCancelled;
}

@property (retain) UIPDFDocument * document;
@property unsigned int pageIndex;
@property UIPDFPageView * view;
@property CALayer * owner;
@property struct CGRect box;
@property unsigned int pageRotation;
@property struct CGColor * highlightColor;
@property (readonly) struct CGAffineTransform transform;
@property char isCancelled;

- (struct CGRect)box;
- (void)dealloc;
- (UIPDFPageContentDelegate *)init;
- (UIPDFPageView *)view;
- (void)setView:(UIPDFPageView *)arg0;
- (struct CGAffineTransform)transform;
- (void)drawLayer:(CALayer *)arg0 inContext:(struct CGContext *)arg1;
- (char)isCancelled;
- (struct CGColor *)highlightColor;
- (void)setHighlightColor:(struct CGColor *)arg0;
- (UIPDFDocument *)document;
- (void)setDocument:(UIPDFDocument *)arg0;
- (unsigned int)pageIndex;
- (void)setPageIndex:(unsigned int)arg0;
- (void)setIsCancelled:(char)arg0;
- (CALayer *)owner;
- (void)computeTransform;
- (char)pageHasSelection;
- (void)drawSelectionLayer:(id)arg0 inContext:(struct CGContext *)arg1;
- (void)setPageRotation:(unsigned int)arg0;
- (void)setBox:(struct CGRect)arg0;
- (void)drawSelectionLayerBlockMode:(id)arg0 inContext:(struct CGContext *)arg1;
- (void)addRect:(struct CGRect)arg0 toPath:(struct CGSize)arg1 transform:(struct CGAffineTransform)arg2 view:(struct CGPath *)arg3 owner:(struct CGAffineTransform *)arg4;
- (unsigned int)pageRotation;
- (void)setOwner:(CALayer *)arg0;

@end
