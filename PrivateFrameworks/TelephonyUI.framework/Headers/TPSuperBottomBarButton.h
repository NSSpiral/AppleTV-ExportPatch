/* Runtime dump - TPSuperBottomBarButton
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPSuperBottomBarButton : UIButton
{
    UIView * _overlayView;
    TPRingView * _ringView;
    char _usesSmallerFontSize;
    int _orientation;
    UIColor * _originalBackgroundColor;
    struct CGSize _buttonSize;
}

@property (nonatomic) int orientation;
@property (nonatomic) char usesSmallerFontSize;
@property (retain, nonatomic) UIColor * originalBackgroundColor;
@property (nonatomic) struct CGSize buttonSize;

+ (float)defaultHeight;
+ (TPSuperBottomBarButton *)defaultFont;
+ (float)defaultWidth;

- (TPSuperBottomBarButton *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (int)orientation;
- (void)setEnabled:(char)arg0;
- (struct CGSize)intrinsicContentSize;
- (void)setHighlighted:(char)arg0;
- (void)setSelected:(char)arg0;
- (void)setOrientation:(int)arg0;
- (struct CGRect)titleRectForContentRect:(NSObject *)arg0;
- (struct CGRect)imageRectForContentRect:(NSObject *)arg0;
- (TPSuperBottomBarButton *)initWithAction:(int)arg0;
- (void)setUsesSmallerFontSize:(char)arg0;
- (TPSuperBottomBarButton *)initWithTitle:(NSString *)arg0 icon:(UIImage *)arg1 color:(UIColor *)arg2;
- (void)configureForCancelAction;
- (char)usesSmallerFontSize;
- (NSObject *)newOverlayView;
- (void)setOriginalBackgroundColor:(UIColor *)arg0;
- (UIColor *)originalBackgroundColor;
- (struct CGSize)buttonSize;
- (void)setButtonSize:(struct CGSize)arg0;

@end
