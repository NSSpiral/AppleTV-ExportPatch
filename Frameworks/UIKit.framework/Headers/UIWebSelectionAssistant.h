/* Runtime dump - UIWebSelectionAssistant
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate>
{
    UIView * _view;
    UIWebSelectionView * _selectionView;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UITapAndAHalfRecognizer * _tapAndAHalfGestureRecognizer;
    char _enabled;
}

@property (readonly, nonatomic) UIWebSelection * selection;
@property (readonly, nonatomic) UIWebSelectionView * selectionView;
@property (readonly, nonatomic) struct CGRect selectionFrame;
@property (nonatomic) char enabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (char)gestureRecognizer:(ADTapGestureRecognizer *)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(ADTapGestureRecognizer *)arg1;
- (char)gestureRecognizer:(ADTapGestureRecognizer *)arg0 shouldReceiveTouch:(UITouch *)arg1;
- (void)setEnabled:(char)arg0;
- (UIWebSelectionView *)selectionView;
- (UIWebSelection *)selection;
- (void)selectionChanged;
- (UIWebSelectionAssistant *)initWithView:(UIView *)arg0;
- (void)setGestureRecognizers;
- (void)resignedFirstResponder;
- (char)enabled;
- (void)clearSelection;
- (void)layoutChangedByScrolling:(char)arg0;
- (void)willStartScrollingOverflow;
- (void)didEndScrollingOverflow;
- (void)scaleChanged;
- (struct CGRect)selectionFrame;
- (void)willStartScrollingOrZoomingPage;
- (void)didEndScrollingOrZoomingPage;
- (char)isSelectionGestureRecognizer:(NSObject *)arg0;
- (void)willRotate:(SKRotate *)arg0;
- (void)didRotate:(SKRotate *)arg0;
- (void)makeWebSelection:(id)arg0;
- (void)hideCallout;
- (void)tap:(id)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1 fromView:(UIView *)arg2;

@end
