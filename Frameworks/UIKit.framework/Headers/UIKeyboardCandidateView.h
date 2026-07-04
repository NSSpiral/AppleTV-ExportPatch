/* Runtime dump - UIKeyboardCandidateView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateView : UIInputView
{
    UIKeyboardCandidateBar * _bar;
    UIKeyboardCandidateSortControl * _sortControl;
    UIKeyboardCandidateGrid * _extendedView;
    UIView<UIKeyboardCandidateList> * _inlineView;
    UIImageView * _leftBackground;
    UIImageView * _rightBackground;
    UIKeyboardCandidateUnsplitKeyboardToggleButton * _leftButton;
    UIKeyboardCandidateSplitKeyboardToggleButton * _rightButton;
    struct ? _candidateBarFlags;
}

@property (retain, nonatomic) UIView<UIKeyboardCandidateList> * inlineView;

+ (UIKeyboardCandidateView *)sharedInstance;
+ (NSObject *)activeCandidateView;
+ (UIKeyboardCandidateView *)sharedInstanceForInlineView:(char)arg0;
+ (NSArray *)activeCandidateList;
+ (void)setActiveCandidateView:(NSObject *)arg0;
+ (float)defaultExtendedControlHeight;
+ (UIKeyboardCandidateView *)sharedInstanceForInlineView;

- (UIKeyboardCandidateView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(UIView *)arg0;
- (void)candidatesDidChange;
- (UIView<UIKeyboardCandidateList> *)inlineView;
- (char)isExtended;
- (void)setCandidateViewExtended:(char)arg0;
- (NSArray *)activeCandidateList;
- (void)_toggleExtendedCandidateView:(NSObject *)arg0;
- (void)updatePageControlStatus;
- (void)setCandidateBarCanExtend:(char)arg0;
- (unsigned int)_numberOfColumns:(char)arg0;
- (float)barHeight;
- (void)setCandidatesToExtendedViewFromCollapsedView:(NSObject *)arg0;
- (float)extendedViewAnimationDuration;
- (void)setInlineView:(UIView<UIKeyboardCandidateList> *)arg0;

@end
