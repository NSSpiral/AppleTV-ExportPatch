/* Runtime dump - UISearchDisplayControllerContainerView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchDisplayControllerContainerView : UIView
{
    char _collapsedTopView;
    UIView * _topView;
    UIView * _bottomView;
    UIView * _behindView;
    NSLayoutConstraint * _topViewHeightConstraint;
    NSLayoutConstraint * _topViewAttributeTopConstraint;
}

@property (readonly, nonatomic) UIView * topView;
@property (readonly, nonatomic) UIView * bottomView;
@property (readonly, nonatomic) UIView * behindView;
@property (retain, nonatomic) NSLayoutConstraint * topViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint * topViewAttributeTopConstraint;

- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setFrame:(struct CGRect)arg0;
- (void)_didMoveFromWindow:(NSObject *)arg0 toWindow:(NSObject *)arg1;
- (UIView *)topView;
- (void)setBottomViewUserInteractionEnabled:(char)arg0;
- (void)updateTopViewHeight:(float)arg0;
- (void)updateTopAttributeConstant:(float)arg0;
- (void)collapseTopView;
- (void)updateTopViewHeight:(float)arg0 animateUpdate:(char)arg1;
- (void)configureInteractionForContainment:(char)arg0;
- (void)adjustTopAttributeConstantByDelta:(float)arg0;
- (UISearchDisplayControllerContainerView *)initWithFrame:(struct CGRect)arg0 topViewHeight:(struct CGSize)arg1;
- (UIView *)bottomView;
- (UIView *)behindView;
- (void)setTopViewHeightConstraint:(NSLayoutConstraint *)arg0;
- (void)setTopViewAttributeTopConstraint:(NSLayoutConstraint *)arg0;
- (NSLayoutConstraint *)topViewHeightConstraint;
- (NSLayoutConstraint *)topViewAttributeTopConstraint;

@end
