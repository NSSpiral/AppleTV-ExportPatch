/* Runtime dump - UIWKSelectionView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWKSelectionView : UIWebSelectionView
{
    UIView<UIWKInteractionViewProtocol> * _interactionView;
    UIWebSelectionHandle * _handle;
    char _selectionIsBlock;
    char _thresholdIsValid;
    char _usingGesture;
    struct CGPoint _lastTouchPoint;
}

- (void)updateSelectionRects;
- (void)selectionChanged;
- (struct CGRect)visibleRect;
- (UIWKSelectionView *)initWithView:(WKContentView *)arg0;
- (void)clearSelection;
- (void)showControls;
- (UIScrollView *)scroller;
- (NSArray *)selectionRects;
- (void)startSelectionCreationWithPoint:(struct CGPoint)arg0;
- (void)updateSelectionCreationWithPoint:(struct CGPoint)arg0;
- (void)endSelectionCreationWithPoint:(struct CGPoint)arg0;
- (NSObject *)tintView;
- (char)updateRectForCalloutBar:(id)arg0 inWindow:(NSObject *)arg1;
- (void)onBeforeScrollOrZoomHidingSelection:(char)arg0;
- (void)onAfterScrollOrZoomShowingSelection:(char)arg0;
- (void)updateTextRangeViewSelectionRects;
- (void)showCopyCalloutWithAnimation:(char)arg0;
- (void)setHandleCenters;
- (struct CGRect)fetchSelectionBoundingRect;
- (char)shouldExpandForActiveHandle;
- (char)shouldContractForActiveHandle;
- (void)switchToTextModeForHandle:(id)arg0;
- (char)shouldSwitchToBlockModeForHandle:(id)arg0;
- (char)isHorizontalWritingMode;
- (void)touchChanged:(id)arg0 forHandle:(_NSStdIOFileHandle *)arg1;
- (void)touchChanged:(id)arg0 forHandleInText:(NSString *)arg1;
- (void)setSelectionMode:(char)arg0;
- (void)selectionCreationStartedWithPoint:(struct CGPoint)arg0;
- (void)selectionCreationUpdatedWithPoint:(struct CGPoint)arg0;
- (void)selectionCreationEndedWithPoint:(struct CGPoint)arg0;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg0 withSelectionTouch:(int)arg1 withFlags:(int)arg2;
- (void)blockSelectionChangedWithTouch:(int)arg0 withFlags:(int)arg1 growThreshold:(float)arg2 shrinkThreshold:(float)arg3;
- (struct CGRect)unobscuredRect;
- (void)switchToBlockModeForHandle:(id)arg0 withPoint:(struct CGPoint)arg1;
- (float)handleOffsetForPoint:(struct CGPoint)arg0 handlePosition:(int)arg1;
- (void)updateRangedSelectionData;
- (void)updateFrameAndHandlesWithAnimation:(char)arg0 showHandles:(char)arg1;

@end
