/* Runtime dump - UIKeyboardCandidateView_iPhone
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateView_iPhone : UIKeyboardCandidateView <UICollectionViewDelegate, UIGestureRecognizerDelegate>
{
    UIKeyboardCandidateGridHeader * _header;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (float)defaultExtendedControlHeight;

- (void)dealloc;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg0;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (void)handleTap;
- (void)_handleKeyboardShowOrHide:(NSNotification *)arg0;
- (char)_shouldShowHideKeyboard;
- (char)_shouldUseFullMetrics;
- (void)_setupKeyboardInteraction;

@end
