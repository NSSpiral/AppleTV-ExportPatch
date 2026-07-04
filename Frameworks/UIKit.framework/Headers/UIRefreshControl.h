/* Runtime dump - UIRefreshControl
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRefreshControl : UIControl
{
    int _style;
    _UIRefreshControlContentView * _contentView;
    UIScrollView * _scrollView;
    float _refreshControlHeight;
    float _visibleHeight;
    float _snappingHeight;
    float _additionalTopInset;
    char _insetsApplied;
    char _adjustingInsets;
    struct UIEdgeInsets _appliedInsets;
    int _refreshControlState;
}

@property (readonly, nonatomic) char refreshing;
@property (retain, nonatomic) UIColor * tintColor;
@property (retain, nonatomic) NSAttributedString * attributedTitle;
@property (readonly, nonatomic) int refreshControlState;
@property (readonly, nonatomic) int style;
@property (readonly, nonatomic) float _refreshControlHeight;
@property (readonly, nonatomic) float _snappingHeight;
@property (readonly, nonatomic) float _visibleHeight;
@property (readonly, nonatomic) char _applyingInsets;
@property (readonly, nonatomic) struct UIEdgeInsets appliedInsets;

+ (Class)_contentViewClassForStyle:(int)arg0;
+ (UIColor *)_defaultColor;

- (UIRefreshControl *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (UIRefreshControl *)initWithCoder:(NSCoder *)arg0;
- (void)_populateArchivedSubviews:(NSMutableArray *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIRefreshControl *)init;
- (void)setFrame:(struct CGRect)arg0;
- (_UIPageViewControllerContentView *)_contentView;
- (void)setBounds:(struct CGRect)arg0;
- (void)setAttributedTitle:(NSAttributedString *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (int)style;
- (UIColor *)tintColor;
- (void)setTintColor:(UIColor *)arg0;
- (void)sizeToFit;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(UIView *)arg0;
- (void)_didScroll;
- (void)_setTintColor:(UIColor *)arg0;
- (UIColor *)_tintColor;
- (float)_refreshControlHeight;
- (char)_isApplyingInsets;
- (int)refreshControlState;
- (void)_removeInsets;
- (void)_update;
- (void)_addInsets;
- (void)beginRefreshing;
- (void)endRefreshing;
- (struct UIEdgeInsets)_appliedInsets;
- (UIRefreshControl *)initWithStyle:(int)arg0;
- (NSString *)_attributedTitle;
- (void)_setAttributedTitle:(NSString *)arg0;
- (NSAttributedString *)attributedTitle;
- (float)_visibleHeight;
- (void)_updateSnappingHeight;
- (void)setRefreshControlState:(int)arg0;
- (void)_resizeToFitContents;
- (void)_removeInsetHeight:(float)arg0;
- (void)_addInsetHeight:(float)arg0;
- (float)revealedFraction;
- (int)_recomputeNewState;
- (void)_updateHiddenStateIfNeeded;
- (void)_updateConcealingMask;
- (struct CGPoint)_originForContentOffset:(struct CGPoint)arg0;
- (float)_visibleHeightForContentOffset:(struct CGPoint)arg0 origin:(struct CGPoint)arg1;
- (void)_setVisibleHeight:(float)arg0;
- (float)_stiffnessForVelocity:(float)arg0;
- (void)_setRefreshControlState:(int)arg0 notify:(char)arg1;
- (char)_canTransitionFromState:(int)arg0 toState:(int)arg1;
- (char)isRefreshing;
- (float)_snappingHeight;
- (float)_scrollViewHeight;

@end
