/* Runtime dump - PLProgressView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLProgressView : UIView
{
    UIButton * _cancelButton;
    UILabel * _labelView;
    UIProgressView * _progressView;
    UIView * _topDivider;
    id _didLayout;
    id _didSetPermanantTextOnLabelView;
    NSNumberFormatter * _progressFormatter;
    int _backgroundType;
    UIView * _backgroundView;
    UIView * _backgroundTintedView;
    _UIBackdropView * _backgroundBlurredView;
    char _showsCancelButton;
    id _cancelationHandler;
}

@property (nonatomic) int backgroundType;
@property (retain, nonatomic) UIView * backgroundView;
@property (retain, nonatomic) UIView * backgroundTintedView;
@property (retain, nonatomic) _UIBackdropView * backgroundBlurredView;
@property (nonatomic) float percentComplete;
@property (nonatomic) char showsCancelButton;
@property (copy, nonatomic) id cancelationHandler;

- (void)setLabelText:(NSString *)arg0;
- (void)_cancel:(SADomainObjectCancel *)arg0;
- (void)setBackgroundType:(int)arg0;
- (int)backgroundType;
- (PLProgressView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (float)percentComplete;
- (void)setBackgroundView:(UIView *)arg0;
- (UIView *)backgroundView;
- (void)setShowsCancelButton:(char)arg0;
- (char)showsCancelButton;
- (void)setPercentComplete:(float)arg0;
- (void)_installBackgroundView;
- (void)_syncToBackgroundType;
- (void)_removeBackgroundTintedView;
- (void)_removeBackgroundBlurredView;
- (void)_installBackgroundBlurredView;
- (void)_installBackgroundTintedView;
- (_UIBackdropView *)backgroundBlurredView;
- (void)setBackgroundBlurredView:(_UIBackdropView *)arg0;
- (UIView *)backgroundTintedView;
- (void)setBackgroundTintedView:(UIView *)arg0;
- (void)setCancelationHandler:(id /* block */)arg0;
- (void)updateUIForPublishingAgent:(id)arg0;
- (id /* block */)cancelationHandler;

@end
