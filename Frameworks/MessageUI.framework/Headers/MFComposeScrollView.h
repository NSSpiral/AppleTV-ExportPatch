/* Runtime dump - MFComposeScrollView
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeScrollView : UIScrollView
{
    UIGestureRecognizer * _singleTapGestureRecognizer;
    NSMutableSet * _disabledSubviews;
    struct CGPoint _tapLocation;
    int _scrollBlocked;
    char _shouldScrollToFirstResponder;
    char _subviewsDisabled;
}

@property (nonatomic) char subviewsDisabled;
@property (readonly, nonatomic) NSSet * disabledSubviews;
@property (nonatomic) char shouldScrollToFirstResponder;

- (void)beginBlockingScroll;
- (void)endBlockingScroll;
- (void)setShouldScrollToFirstResponder:(char)arg0;
- (NSSet *)disabledSubviews;
- (void)setSubviewsDisabled:(char)arg0;
- (void)disableSubview:(id)arg0;
- (void)enableSubview:(id)arg0;
- (char)shouldScrollToFirstResponder;
- (char)subviewsDisabled;
- (MFComposeScrollView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setContentOffset:(struct CGPoint)arg0 animated:(char)arg1;
- (void)didAddSubview:(_UIVisualEffectSubview *)arg0;
- (void)willRemoveSubview:(_UIVisualEffectSubview *)arg0;
- (char)_scrollsToMakeFirstResponderVisible;

@end
