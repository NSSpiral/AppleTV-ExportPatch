/* Runtime dump - PSSoftwareUpdateTableView
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSoftwareUpdateTableView : UITableView
{
    NSString * _currentVersion;
    UILabel * _checkingStatusLabel;
    UILabel * _subtitleLabel;
    UIActivityIndicatorView * _checkingForUpdateSpinner;
    int _state;
}

@property (retain, nonatomic) NSString * currentVersion;
@property (retain, nonatomic) UILabel * checkingStatusLabel;
@property (retain, nonatomic) UILabel * subtitleLabel;
@property (retain, nonatomic) UIActivityIndicatorView * checkingForUpdateSpinner;
@property (nonatomic) int state;

- (void)dealloc;
- (void)layoutSubviews;
- (int)state;
- (void)setState:(int)arg0;
- (PSSoftwareUpdateTableView *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (UILabel *)subtitleLabel;
- (void)setSubtitleLabel:(UILabel *)arg0;
- (NSString *)currentVersion;
- (void)setCurrentVersion:(NSString *)arg0;
- (UILabel *)checkingStatusLabel;
- (void)setCheckingStatusLabel:(UILabel *)arg0;
- (UIActivityIndicatorView *)checkingForUpdateSpinner;
- (void)setCheckingForUpdateSpinner:(UIActivityIndicatorView *)arg0;

@end
