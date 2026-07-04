/* Runtime dump - CAMTopBar
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTopBar : UIView <CAMExpandableMenuButtonDelegate>
{
    char __flashButtonExpanded;
    char __HDRButtonExpanded;
    char __timerButtonExpanded;
    int _style;
    int _backgroundStyle;
    <CAMTopBarDelegate> * _delegate;
    CAMFlashButton * _flashButton;
    CAMElapsedTimeView * _elapsedTimeView;
    CAMHDRButton * _HDRButton;
    CAMFlipButton * _flipButton;
    CAMTimerButton * _timerButton;
    int _orientation;
    UIView * __backgroundView;
    NSMutableArray * __allowedControls;
    CAMExpandableMenuButton * __expandedMenuButton;
    UIView * __flipButtonTopLayoutSpacer;
    struct UIEdgeInsets __expandedMenuButtonTappableInsets;
}

@property (nonatomic) int style;
@property (nonatomic) int backgroundStyle;
@property (nonatomic) <CAMTopBarDelegate> * delegate;
@property (retain, nonatomic) CAMFlashButton * flashButton;
@property (retain, nonatomic) CAMElapsedTimeView * elapsedTimeView;
@property (retain, nonatomic) CAMHDRButton * HDRButton;
@property (retain, nonatomic) CAMFlipButton * flipButton;
@property (retain, nonatomic) CAMTimerButton * timerButton;
@property (nonatomic) int orientation;
@property (readonly, nonatomic) char floating;
@property (readonly, nonatomic) UIView * _backgroundView;
@property (readonly, nonatomic) NSMutableArray * _allowedControls;
@property (nonatomic) char _flashButtonExpanded;
@property (nonatomic) char _HDRButtonExpanded;
@property (nonatomic) char _timerButtonExpanded;
@property (retain, nonatomic) CAMExpandableMenuButton * _expandedMenuButton;
@property (nonatomic) struct UIEdgeInsets _expandedMenuButtonTappableInsets;
@property (readonly, nonatomic) UIView * _flipButtonTopLayoutSpacer;

- (char)isFloating;
- (CAMTopBar *)initWithFrame:(struct CGRect)arg0;
- (CAMTopBar *)initWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<CAMTopBarDelegate> *)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (<CAMTopBarDelegate> *)delegate;
- (UIView *)_backgroundView;
- (int)orientation;
- (int)style;
- (struct CGSize)intrinsicContentSize;
- (void)setStyle:(int)arg0;
- (void)setStyle:(int)arg0 animated:(char)arg1;
- (void)setOrientation:(int)arg0;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(int)arg0;
- (int)backgroundStyle;
- (void)setBackgroundStyle:(int)arg0 animated:(char)arg1;
- (void)_updateBackgroundStyleAnimated:(char)arg0;
- (CAMFlipButton *)flipButton;
- (CAMElapsedTimeView *)elapsedTimeView;
- (CAMExpandableMenuButton *)_expandedMenuButton;
- (struct CGRect)expandedFrameForMenuButton:(CAMExpandableMenuButton *)arg0;
- (void)_updateHiddenViewsForButtonExpansionAnimated:(char)arg0;
- (char)_shouldHideElapsedTimeView;
- (char)_shouldHideHDRButton;
- (char)_shouldHideFlipButton;
- (char)_shouldHideTimerButton;
- (char)_isTimerButtonExpanded;
- (char)_isHDRButtonExpanded;
- (struct CGRect)collapsedFrameForMenuButton:(CAMExpandableMenuButton *)arg0;
- (void)_setExpandedMenuButton:(id)arg0;
- (void)_setTimerButtonExpanded:(char)arg0;
- (void)_setHDRButtonExpanded:(char)arg0;
- (void)collapseMenuButton:(CAMExpandableMenuButton *)arg0 animated:(char)arg1;
- (void)expandMenuButton:(CAMExpandableMenuButton *)arg0 animated:(char)arg1;
- (void)setFlipButton:(CAMFlipButton *)arg0;
- (void)setElapsedTimeView:(CAMElapsedTimeView *)arg0;
- (void)setHDRButton:(CAMHDRButton *)arg0;
- (void)setTimerButton:(CAMTimerButton *)arg0;
- (CAMHDRButton *)HDRButton;
- (CAMTimerButton *)timerButton;
- (void)configureForMode:(int)arg0;
- (void)setFlashButton:(CAMFlashButton *)arg0;
- (void)_commonCAMTopBarInitialization;
- (void)_updateStyleAnimated:(char)arg0;
- (char)_shouldHideFlashButton;
- (char)_isFlashButtonExpanded;
- (char)_buttonsExpandHorizontally;
- (UIView *)_flipButtonTopLayoutSpacer;
- (void)_setupDefaultBackgroundConstraints;
- (void)_setupDefaultFlipButtonConstraints;
- (void)_setupDefaultElapsedTimeViewConstraints;
- (void)_setupFloatingBackgroundConstraints;
- (void)_setupFloatingFlipButtonConstraints;
- (void)_setupFloatingRecordingBackgroundConstraints;
- (void)_setupFloatingRecordingElapsedTimeViewConstraints;
- (NSMutableArray *)_allowedControls;
- (void)_layoutControls:(id)arg0 apply:(char)arg1 withExpandedMenuButton:(CAMExpandableMenuButton *)arg2 collapsingMenuButton:(id)arg3 collapsingFrame:(struct CGRect *)arg4;
- (id)_allowedControlsForStillImageMode;
- (id)_allowedControlsForVideoMode;
- (id)_allowedControlsForPanoramaMode;
- (id)_allowedControlsForTimelapseMode;
- (struct UIEdgeInsets)_expandedMenuButtonTappableInsets;
- (void)_setFlashButtonExpanded:(char)arg0;
- (void)_setupConstraintsForDefaultStyle;
- (void)_setupConstraintsForFloatingStyle;
- (void)_setupConstraintsForFloatingRecordingStyle;
- (CAMFlashButton *)flashButton;
- (void)_setExpandedMenuButtonTappableInsets:(struct UIEdgeInsets)arg0;

@end
