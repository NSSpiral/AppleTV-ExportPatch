/* Runtime dump - ADPrerollTopBar
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrerollTopBar : UIView
{
    <ADPrerollTopBarDelegate> * _delegate;
    char _isFullscreen;
    char _layoutForExpandedSize;
    UIStatusBar * _statusBar;
    ADPrerollButton * _doneButton;
    ADProgressView * _progressView;
    ADPrerollButton * _scaleToFillButton;
}

@property (weak, nonatomic) <ADPrerollTopBarDelegate> * delegate;
@property (nonatomic) char isFullscreen;
@property (nonatomic) char layoutForExpandedSize;
@property (retain, nonatomic) UIStatusBar * statusBar;
@property (retain, nonatomic) ADPrerollButton * doneButton;
@property (retain, nonatomic) ADProgressView * progressView;
@property (retain, nonatomic) ADPrerollButton * scaleToFillButton;

- (char)isFullscreen;
- (void)_doneButtonTapped:(id)arg0;
- (ADPrerollButton *)doneButton;
- (void)setDoneButton:(ADPrerollButton *)arg0;
- (ADPrerollTopBar *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<ADPrerollTopBarDelegate> *)arg0;
- (void)layoutSubviews;
- (<ADPrerollTopBarDelegate> *)delegate;
- (UIStatusBar *)statusBar;
- (void)setStatusBar:(UIStatusBar *)arg0;
- (void)setProgressView:(ADProgressView *)arg0;
- (ADProgressView *)progressView;
- (void)setElapsedTime:(double)arg0 totalTime:(double)arg1;
- (void)setScaleToFillButton:(ADPrerollButton *)arg0;
- (ADPrerollButton *)scaleToFillButton;
- (void)_scaleToFillButtonTapped:(id)arg0;
- (void)_scaleToFitButtonTapped:(id)arg0;
- (void)setIsFullscreen:(char)arg0;
- (float)requiredHeight;
- (void)setLayoutForExpandedSize:(char)arg0;
- (char)layoutForExpandedSize;

@end
