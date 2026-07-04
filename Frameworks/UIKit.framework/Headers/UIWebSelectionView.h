/* Runtime dump - UIWebSelectionView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelectionView : UIView
{
    UIView * _center;
    struct CGRect _selectionFrame;
    UIWebSelectionHandle * _top;
    UIWebSelectionHandle * _right;
    UIWebSelectionHandle * _bottom;
    UIWebSelectionHandle * _left;
    UIWebSelectionOutline * _outline;
    UIWebTextRangeView * _textRangeView;
    UIWebDocumentView * _documentView;
    UIWebSelectionNode * _selectionNode;
    UIWebSelectionGraph * _selectionGraph;
    float _growThreshold;
    float _shrinkThreshold;
    struct ? _autoscrollData;
    struct ? _blockSelectionData;
    struct ? _rangedSelectionData;
    char _creatingSelection;
    int _nestedLayoutCalls;
    char _calloutBarIsHiddenBeforeRotation;
    char _rotating;
    int _selectionInFixedPosition;
}

@property (readonly, nonatomic) UIWebSelection * selection;
@property (retain, nonatomic) UIWebSelectionNode * selectionNode;
@property (nonatomic) struct CGRect selectionFrame;

- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)removeFromSuperview;
- (void)_subscribeToScrollNotificationsIfNecessary:(id)arg0;
- (void)_didScroll;
- (UIWebSelection *)selection;
- (void)updateSelectionRects;
- (void)selectionChanged;
- (struct CGRect)visibleRect;
- (void)clearSelection;
- (void)layoutChangedByScrolling:(char)arg0;
- (void)willStartScrollingOverflow;
- (void)didEndScrollingOverflow;
- (void)scaleChanged;
- (struct CGRect)selectionFrame;
- (void)willStartScrollingOrZoomingPage;
- (void)didEndScrollingOrZoomingPage;
- (void)showControls;
- (UIScrollView *)scroller;
- (UIWebSelectionView *)initWithWebDocumentView:(UIWebDocumentView *)arg0;
- (void)hideControls;
- (void)startSelectionCreationWithPoint:(struct CGPoint)arg0;
- (void)updateSelectionCreationWithPoint:(struct CGPoint)arg0;
- (void)endSelectionCreationWithPoint:(struct CGPoint)arg0;
- (void)hideControlsBeforeRotation;
- (void)showControlsAfterRotation;
- (NSObject *)tintView;
- (NSObject *)handleWithPosition:(int)arg0;
- (char)updateRectForCalloutBar:(id)arg0 inWindow:(NSObject *)arg1;
- (void)onBeforeScrollOrZoomHidingSelection:(char)arg0;
- (void)onAfterScrollOrZoomShowingSelection:(char)arg0;
- (void)updateTextRangeViewSelectionRects;
- (void)showCopyCalloutWithAnimation:(char)arg0;
- (NSSet *)handles;
- (void)hideCopyCallout;
- (void)setHandleCenters;
- (struct CGRect)fetchSelectionBoundingTextSelectionRect;
- (struct CGRect)fetchSelectionBoundingRect;
- (void)setSelectionFrame:(struct CGRect)arg0;
- (void)setSelectionNode:(UIWebSelectionNode *)arg0;
- (struct CGRect)desiredBox;
- (void)computeExpandAndContractThresholdsForActiveHandle;
- (char)shouldExpandForActiveHandle;
- (void)expandForActiveHandle;
- (char)shouldContractForActiveHandle;
- (void)contractForActiveHandle;
- (void)switchToTextModeForHandle:(id)arg0;
- (void)updateAutoscrollForHandle:(id)arg0;
- (void)stopAnyAutoscrolling;
- (void)considerFlipping;
- (void)setOrientationOfMagnifier:(id)arg0 forHandleInText:(NSString *)arg1;
- (char)shouldSwitchToBlockModeForHandle:(id)arg0;
- (void)switchToBlockModeForHandle:(id)arg0;
- (void)animateSloppyReleaseOfHandleInText:(NSString *)arg0 withMagnifier:(UITextMagnifier *)arg1;
- (char)isHorizontalWritingMode;
- (UIWebSelectionNode *)selectionNode;
- (int)autoscrollDirectionsForHandle:(id)arg0;
- (void)autoscrollTimerFired:(id)arg0;
- (void)touchChanged:(id)arg0 forHandle:(_NSStdIOFileHandle *)arg1;
- (void)shiftWebRangeSelectionAnimationDidStop:(id)arg0 finished:(id /* block */)arg1;
- (void)resetSelection;
- (NSObject *)nodeInPristineGraphAtPoint:(struct CGPoint)arg0;
- (void)updateFrameAndHandlesWithAnimation:(char)arg0;
- (id)activeHandle;
- (char)activelyManipulatingTextSelectionHandle;
- (void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;
- (char)activelyManipulatingBlockSelectionHandle;
- (void)updateForChangedLayoutWhileManipulatingBlockSelectionHandle;
- (void)calloutBar:(UICalloutBar *)arg0 selectedCommand:(NSObject *)arg1;
- (void)setSelectionFrame:(struct CGRect)arg0 animated:(struct CGSize)arg1;
- (void)touchChanged:(id)arg0 forHandleInText:(NSString *)arg1;
- (char)canFlip;

@end
