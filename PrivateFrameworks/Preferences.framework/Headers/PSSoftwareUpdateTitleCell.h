/* Runtime dump - PSSoftwareUpdateTitleCell
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSoftwareUpdateTitleCell : PSTableCell <UIWebViewDelegate>
{
    int _progressStyle;
    PSSoftwareUpdateAnimatedIcon * _animatedGearView;
    char _animatingGearView;
    UIProgressView * _progressBar;
    UILabel * _updateStatusLabel;
    PSWebContainerView * _releaseNotesSummaryView;
}

@property (readonly, retain, nonatomic) UIImage * gearBackgroundImage;
@property (retain, nonatomic) UIProgressView * progressBar;
@property (retain, nonatomic) UILabel * updateStatusLabel;
@property (retain, nonatomic) PSWebContainerView * releaseNotesSummaryView;
@property (nonatomic) int progressDisplayStyle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)cellStyle;

- (void)dealloc;
- (void)layoutSubviews;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)didMoveToSuperview;
- (void)setProgress:(float)arg0;
- (char)webView:(NSObject *)arg0 shouldStartLoadWithRequest:(NSURLRequest *)arg1 navigationType:(int)arg2;
- (void)setStatusMessage:(NSString *)arg0;
- (PSSoftwareUpdateTitleCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;
- (UIImage *)gearBackgroundImage;
- (NSObject *)newSoftwareUpdateAnimatedIconWithFrame:(struct CGRect)arg0;
- (void)sizeToFitWithTable:(id)arg0;
- (void)setAnimatingGearView:(char)arg0;
- (void)setReleaseNotesSummary:(id)arg0;
- (float)preferredHeightWithTable:(id)arg0;
- (int)progressDisplayStyle;
- (void)setProgressDisplayStyle:(int)arg0;
- (UIProgressView *)progressBar;
- (void)setProgressBar:(UIProgressView *)arg0;
- (UILabel *)updateStatusLabel;
- (void)setUpdateStatusLabel:(UILabel *)arg0;
- (PSWebContainerView *)releaseNotesSummaryView;
- (void)setReleaseNotesSummaryView:(PSWebContainerView *)arg0;

@end
