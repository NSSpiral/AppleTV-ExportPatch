/* Runtime dump - SBUIFullscreenAlertController
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIFullscreenAlertController : UIViewController <NSCopying>
{
    char _shouldAnimateIn;
    NSNumber * _animationStartTime;
    NSString * _activationContext;
    NSInvocation * _pendingDeactivationInvocation;
}

@property (nonatomic) char shouldAnimateIn;
@property (retain, nonatomic) NSNumber * animationStartTime;
@property (retain, nonatomic) NSString * activationContext;

- (void)dealloc;
- (SBUIFullscreenAlertController *)init;
- (void)didReceiveMemoryWarning;
- (SBUIFullscreenAlertController *)copyWithZone:(struct _NSZone *)arg0;
- (void)setAnimationStartTime:(NSNumber *)arg0;
- (char)definesPresentationContext;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)presentViewController:(BRController *)arg0 animated:(char)arg1 completion:(id /* block */)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (NSNumber *)animationStartTime;
- (void)setActivationContext:(NSString *)arg0;
- (char)handleMenuButtonTap;
- (char)handleLockButtonPressed;
- (char)handleVolumeUpButtonPressed;
- (char)handleVolumeDownButtonPressed;
- (char)handleHeadsetButtonPressed:(char)arg0;
- (char)isSlidingViewController;
- (void)finishedAnimatingIn;
- (void)finishedAnimatingOut;
- (void)requestActivationAnimated:(char)arg0 animateCurrentDisplayOut:(char)arg1 withDelay:(char)arg2;
- (void)requestDeactivationAnimated:(char)arg0 animateOldDisplayInWithStyle:(int)arg1;
- (void)setWallpaperTunnelActive:(char)arg0;
- (void)setBackgroundStyle:(int)arg0 withDuration:(double)arg1;
- (void)removeBackgroundStyleWithDuration:(double)arg0;
- (char)allowSuspension;
- (void)viewWillAnimateIn;
- (void)viewWillAnimateOut;
- (void)animateViewIn;
- (void)animateViewOut;
- (char)viewIsReadyToBeRemoved;
- (char)hasTranslucentBackground;
- (char)allowStackingOfAlert:(id)arg0;
- (void)handleAutoLock;
- (void)didFinishLaunchingFrontmost;
- (void)setPendingDeactivationInvocation:(NSInvocation *)arg0;
- (NSInvocation *)pendingDeactivationInvocation;
- (char)shouldAnimateIn;
- (void)setShouldAnimateIn:(char)arg0;
- (NSString *)activationContext;

@end
