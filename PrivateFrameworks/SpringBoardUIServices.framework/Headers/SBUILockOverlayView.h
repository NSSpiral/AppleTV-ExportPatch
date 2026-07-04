/* Runtime dump - SBUILockOverlayView
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUILockOverlayView : SBInteractionPassThroughView
{
    <SBUILockOverlayViewDelegate> * _delegate;
    UIResizableView * _textContainerView;
    UILabel * _titleLabel;
    UILabel * _subtitleLabel;
    UIButton * _actionButton;
    SBLockOverlayStylePropertiesFactory * _underlayPropertiesFactory;
    unsigned int _style;
    _UILegibilitySettings * _legibilitySettings;
}

@property (nonatomic) <SBUILockOverlayViewDelegate> * delegate;
@property (readonly, nonatomic) unsigned int style;
@property (readonly, nonatomic) SBLockOverlayStylePropertiesFactory * underlayPropertiesFactory;
@property (readonly, nonatomic) _UILegibilitySettings * legibilitySettings;
@property (readonly, nonatomic) UILabel * titleLabel;
@property (readonly, nonatomic) UILabel * subtitleLabel;
@property (readonly, nonatomic) UIButton * actionButton;

- (SBUILockOverlayView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<SBUILockOverlayViewDelegate> *)arg0;
- (void)layoutSubviews;
- (<SBUILockOverlayViewDelegate> *)delegate;
- (unsigned int)style;
- (UILabel *)titleLabel;
- (SBUILockOverlayView *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (UILabel *)subtitleLabel;
- (_UILegibilitySettings *)legibilitySettings;
- (UIFont *)_titleFont;
- (UIButton *)actionButton;
- (float)_maxLabelWidth;
- (UIFont *)_actionFont;
- (NSObject *)_legibilitySettingsForStyle:(unsigned int)arg0;
- (UIFont *)_subtitleFont;
- (void)_buttonPressed;
- (void)_sizeView:(NSObject *)arg0 forFixedWith:(char)arg1;
- (unsigned int)_numberOfLinesForText:(NSString *)arg0 font:(UIFont *)arg1 size:(struct CGSize)arg2;
- (SBLockOverlayStylePropertiesFactory *)underlayPropertiesFactory;

@end
