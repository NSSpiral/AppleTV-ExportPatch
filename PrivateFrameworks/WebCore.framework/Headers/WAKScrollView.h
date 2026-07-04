/* Runtime dump - WAKScrollView
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WAKScrollView : WAKView <WebCoreFrameScrollView>
{
    WAKView * _documentView;
    WAKClipView * _contentView;
    id _delegate;
    struct CGPoint _scrollOrigin;
}

- (WAKScrollView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (NSString *)description;
- (NSObject *)delegate;
- (WAKClipView *)contentView;
- (void)scrollWheel:(id)arg0;
- (void)setDrawsBackground:(char)arg0;
- (WAKView *)documentView;
- (struct CGRect)unobscuredContentRect;
- (void).cxx_construct;
- (char)drawsBackground;
- (void)setDocumentView:(WAKView *)arg0;
- (void)setScrollingModes:(int)arg0 vertical:(int)arg1 andLock:(char)arg2;
- (void)scrollingModes:(int *)arg0 vertical:(int *)arg1;
- (struct CGRect)exposedContentRect;
- (void)setActualScrollPosition:(struct CGPoint)arg0;
- (struct CGRect)documentVisibleRect;
- (void)setScrollBarsSuppressed:(char)arg0 repaintOnUnsuppress:(char)arg1;
- (struct CGPoint)scrollOrigin;
- (void)scrollPoint:(struct CGPoint)arg0;
- (void)setScrollOrigin:(struct CGPoint)arg0 updatePositionAtAll:(char)arg1 immediately:(char)arg2;
- (char)_selfHandleEvent:(NSObject *)arg0;
- (void)setHasVerticalScroller:(char)arg0;
- (char)hasVerticalScroller;
- (void)setHasHorizontalScroller:(char)arg0;
- (char)hasHorizontalScroller;
- (void)setLineScroll:(float)arg0;
- (float)verticalLineScroll;
- (float)horizontalLineScroll;
- (void)reflectScrolledClipView:(NSObject *)arg0;
- (void)setHorizontalScrollingMode:(int)arg0;
- (void)setVerticalScrollingMode:(int)arg0;
- (void)setScrollingMode:(int)arg0;
- (int)horizontalScrollingMode;
- (int)verticalScrollingMode;
- (char)inProgrammaticScroll;
- (void)_adjustScrollers;

@end
