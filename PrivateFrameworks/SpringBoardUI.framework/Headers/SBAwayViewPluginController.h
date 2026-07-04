/* Runtime dump - SBAwayViewPluginController
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBAwayViewPluginController : NSObject
{
    UIView * _view;
    char _viewCanBeDisplayed;
    char _fullscreen;
    char _alwaysFullscreen;
    int _orientation;
    id _disableTransitionBlock;
    unsigned int _effectivePresentationStyle;
    NSString * _enablingApplicationBundleIdentifier;
}

@property (retain, nonatomic) UIView * view;
@property (nonatomic) int orientation;
@property (nonatomic) char viewCanBeDisplayed;
@property (nonatomic) unsigned int effectivePresentationStyle;
@property (nonatomic) char alwaysFullscreen;
@property (copy, nonatomic) NSString * enablingApplicationBundleIdentifier;

+ (void)enableBundleNamed:(id)arg0 activationContext:(NSString *)arg1;
+ (void)disableBundleNamed:(id)arg0 deactivationContext:(NSObject *)arg1;
+ (void)enableBundleNamed:(id)arg0;
+ (void)disableBundleNamed:(id)arg0;

- (UIView *)customHeaderView;
- (char)isFullscreen;
- (void)setFullscreen:(char)arg0 animated:(char)arg1;
- (void)dealloc;
- (SBAwayViewPluginController *)init;
- (UIView *)view;
- (int)orientation;
- (void)setView:(UIView *)arg0;
- (unsigned int)presentationStyle;
- (UIImageView *)backgroundView;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (double)transitionDuration;
- (void)willRotateToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg0;
- (void)setOrientation:(int)arg0;
- (_UILegibilitySettings *)legibilitySettings;
- (void)disableWithTransitionBlock:(id /* block */)arg0;
- (void)_setDisableTransitionBlock:(id /* block */)arg0;
- (void)setFullscreen:(char)arg0 duration:(double)arg1;
- (char)viewWantsOverlayLayout;
- (char)disablesAwayItemsCompletely;
- (char)shouldAutoHideNotifications;
- (double)viewFadeInDuration;
- (char)canBeAlwaysFullscreen;
- (void)alwaysFullscreenValueHasChanged;
- (char)showDateView;
- (void)purgeView;
- (void)setViewCanBeDisplayed:(char)arg0;
- (void)setActivationContext:(NSString *)arg0;
- (void)setDeactivationContext:(NSObject *)arg0;
- (id /* block */)_disableTransitionBlock;
- (id /* block */)enableTransitionBlock;
- (char)viewWantsFullscreenLayout;
- (unsigned int)notificationBehavior;
- (char)shouldDisableOnRelock;
- (char)shouldDisableOnUnlock;
- (char)shouldShowLockStatusBarTime;
- (char)allowsNotificationCenter;
- (char)allowsControlCenter;
- (char)allowsTimer;
- (char)allowsLockScreenHint;
- (void)setAlwaysFullscreen:(char)arg0;
- (char)isAlwaysFullscreen;
- (void)deviceLockViewWillShow;
- (void)deviceLockViewDidHide;
- (char)retainsPriorityWhileInactive;
- (int)pluginPriority;
- (char)animateResumingToApplicationWithIdentifier:(NSString *)arg0;
- (id)bundleIDForUnlock;
- (unsigned int)unlockAnimationStyleForDestinationApp:(id)arg0;
- (char)showAwayItems;
- (char)showBatteryChargingText;
- (char)showDate;
- (char)hasCustomSubtitle;
- (NSString *)customSubtitleText;
- (UIColor *)customSubtitleColor;
- (char)showStatusBar;
- (char)showHeaderView;
- (char)canScreenDim;
- (char)allowsLockScreenCamera;
- (char)allowsLockScreenMediaControls;
- (char)allowsPhotoSlideshow;
- (char)allowsSiri;
- (char)wantsToOpenURLsWhilePasscodeLocked;
- (char)wantsHardwareEventsWhenScreenDimmed;
- (char)wantsUserWallpaper;
- (char)showsDuringCall;
- (NSString *)slideToUnlockText;
- (char)handleMenuButtonTap;
- (char)handleMenuButtonDoubleTap;
- (char)wantsMenuButtonHeldEvent;
- (char)handleMenuButtonHeld;
- (char)handleGesture:(int)arg0 fingerCount:(unsigned int)arg1;
- (char)handleLockButtonPressed;
- (char)handleVolumeUpButtonPressed;
- (char)handleVolumeDownButtonPressed;
- (char)handleHeadsetButtonPressed:(char)arg0;
- (char)wantsAutomaticFullscreenTimer;
- (char)wantsSwipeGestureRecognizer;
- (char)wantsMesaAutoUnlock;
- (void)lockScreenMediaControlsShown:(char)arg0;
- (char)legibilitySettingsOverridesVibrancy;
- (char)isContentViewWhiteUnderSlideToUnlockText;
- (void)setNeedsLegibilityAppearanceUpdate;
- (char)viewCanBeDisplayed;
- (unsigned int)_effectivePresentationStyle;
- (void)_setEffectivePresentationStyle:(unsigned int)arg0;
- (NSString *)enablingApplicationBundleIdentifier;
- (void)setEnablingApplicationBundleIdentifier:(NSString *)arg0;
- (unsigned int)overlayStyle;
- (void)disable;

@end
