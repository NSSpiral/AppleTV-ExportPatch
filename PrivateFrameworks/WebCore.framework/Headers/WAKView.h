/* Runtime dump - WAKView
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WAKView : WAKResponder
{
    struct _WKViewContext viewContext;
    struct _WKView * viewRef;
    NSMutableSet * subviewReferences;
    char _isHidden;
    char _drawsOwnDescendants;
}

+ (WAKView *)_wrapperForViewRef:(struct _WKView *)arg0;
+ (CAMFocusPointView *)focusView;
+ (void)_setInterpolationQuality:(int)arg0;

- (WKFrameInfo *)_frame;
- (NSObject *)_webView;
- (NSObject *)_web_parentWebFrameView;
- (NSObject *)_web_superviewOfClass:(Class)arg0;
- (char)_web_firstResponderIsSelfOrDescendantView;
- (struct CGRect)_web_convertRect:(NSObject *)arg0 toView:(SEL)arg1;
- (void)_web_addDescendantWebHTMLViewsToArray:(NSArray *)arg0;
- (WAKView *)initWithFrame:(struct CGRect)arg0;
- (void)setAutoresizingMask:(unsigned int)arg0;
- (void)dealloc;
- (struct CGRect)bounds;
- (void)drawRect:(struct CGRect)arg0;
- (struct CGPoint)convertPoint:(struct CGPoint)arg0 fromView:(UIView *)arg1;
- (BRWindow *)window;
- (void)setHidden:(char)arg0;
- (WAKView *)init;
- (void)setFrame:(struct CGRect)arg0;
- (void)addSubview:(_UIVisualEffectSubview *)arg0;
- (void)removeFromSuperview;
- (struct CGRect)frame;
- (NSString *)description;
- (id)superview;
- (void)setFrameOrigin:(struct CGPoint)arg0;
- (NSArray *)subviews;
- (struct CGRect)convertRect:(NSObject *)arg0 toView:(SEL)arg1;
- (void)layoutIfNeeded;
- (WAKView *)nextResponder;
- (void)display;
- (float)scale;
- (void)handleEvent:(NSObject *)arg0;
- (struct CGRect)convertRect:(NSObject *)arg0 fromView:(SEL)arg1;
- (char)isHiddenOrHasHiddenAncestor;
- (struct CGPoint)convertPoint:(struct CGPoint)arg0 toView:(UIView *)arg1;
- (unsigned int)autoresizingMask;
- (struct CGSize)convertSize:(struct CGSize)arg0 toView:(UIView *)arg1;
- (void)willRemoveSubview:(_UIVisualEffectSubview *)arg0;
- (void)setNeedsDisplayInRect:(struct CGRect)arg0;
- (char)needsDisplay;
- (void)displayIfNeeded;
- (void)setScale:(float)arg0;
- (void)layout;
- (struct CGRect)visibleRect;
- (void)setFrameSize:(struct CGSize)arg0;
- (void)viewDidMoveToWindow;
- (void)invalidateGState;
- (void)setNeedsLayout:(char)arg0;
- (void)setNeedsDisplay:(char)arg0;
- (void)viewWillDraw;
- (void)displayRect:(struct CGRect)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0;
- (id)lastScrollableAncestor;
- (void)displayRectIgnoringOpacity:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (void).cxx_construct;
- (void)_appendDescriptionToString:(NSString *)arg0 atLevel:(int)arg1;
- (char)accessibilityIsIgnored;
- (char)needsPanelToBecomeKey;
- (void)setBoundsSize:(struct CGSize)arg0;
- (void)scrollPoint:(struct CGPoint)arg0;
- (WAKView *)_initWithViewRef:(struct _WKView *)arg0;
- (struct _WKView *)_viewRef;
- (void)setBoundsOrigin:(struct CGPoint)arg0;
- (char)_selfHandleEvent:(NSObject *)arg0;
- (NSMutableSet *)_subviewReferences;
- (void)_lockFocusViewInContext:(struct CGContext *)arg0;
- (void)_drawRect:(struct CGRect)arg0 context:(struct CGSize)arg1 lockFocus:(id)arg2;
- (void)_unlockFocusViewInContext:(struct CGContext *)arg0;
- (char)isDescendantOf:(id)arg0;
- (char)_handleResponderCall:(int)arg0;
- (void)frameSizeChanged;
- (void)displayRectIgnoringOpacity:(struct CGRect)arg0;
- (void)lockFocus;
- (void)unlockFocus;
- (char)mouse:(struct CGPoint)arg0 inRect:(struct CGRect)arg1;
- (void)setNextKeyView:(NSObject *)arg0;
- (NSObject *)previousValidKeyView;
- (NSObject *)nextKeyView;
- (NSObject *)nextValidKeyView;
- (NSObject *)previousKeyView;
- (void)releaseGState;
- (char)inLiveResize;
- (char)scrollRectToVisible:(struct CGRect)arg0;
- (void)_setDrawsOwnDescendants:(char)arg0;

@end
