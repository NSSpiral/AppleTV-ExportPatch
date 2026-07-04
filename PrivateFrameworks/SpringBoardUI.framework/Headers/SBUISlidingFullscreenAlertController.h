/* Runtime dump - SBUISlidingFullscreenAlertController
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUISlidingFullscreenAlertController : SBUIFullscreenAlertController
{
    UIView * _topBar;
    UIView * _bottomBar;
    char _animatingIn;
    char _animatingOut;
}

@property (readonly, nonatomic) UIView * topBar;
@property (readonly, nonatomic) UIView * bottomBar;

- (void)dealloc;
- (UIImageView *)backgroundView;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)viewDidLoad;
- (UIView *)topBar;
- (UIView *)bottomBar;
- (char)isSlidingViewController;
- (void)finishedAnimatingIn;
- (void)viewWillAnimateIn;
- (void)viewWillAnimateOut;
- (void)animateViewIn;
- (void)animateViewOut;
- (char)viewIsReadyToBeRemoved;
- (char)hasTranslucentBackground;
- (id)newTopBar;
- (id)newBottomBar;
- (char)isShowingWallpaper;
- (char)shouldShowBottomBar;
- (void)_performAnimateDisplayIn;
- (float)_slideOutAnimationDelay;
- (float)_slideOutAnimationDuration;
- (void)_viewAnimatedOut;
- (char)_animatingToHomescreenWallpaper;
- (float)_animationDelayForOthersActivation;
- (void)updateSpringBoardInPreparationForTransparentDismiss;

@end
