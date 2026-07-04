/* Runtime dump - CACentralTableViewCell
 * Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CACentralTableViewCell : UITableViewCell
{
    UILabel * _deviceNameLabel;
    UILabel * _connectionStatusLabel;
    UILabel * _inputLabel;
    UILabel * _slashLabel;
    UILabel * _outputLabel;
    UIActivityIndicatorView * _activityIndicator;
    NSArray * _labelConstraints;
    NSArray * _activityHConstraints;
    NSArray * _activityVConstraints;
}

@property (retain, nonatomic) UILabel * deviceNameLabel;
@property (retain, nonatomic) UILabel * connectionStatusLabel;
@property (retain, nonatomic) UILabel * inputLabel;
@property (retain, nonatomic) UILabel * slashLabel;
@property (retain, nonatomic) UILabel * outputLabel;
@property (retain, nonatomic) UIActivityIndicatorView * activityIndicator;
@property (retain, nonatomic) NSArray * labelConstraints;
@property (retain, nonatomic) NSArray * activityHConstraints;
@property (retain, nonatomic) NSArray * activityVConstraints;

- (void)createInitialConstraints;
- (void)setActivityHConstraints:(NSArray *)arg0;
- (void)setActivityVConstraints:(NSArray *)arg0;
- (NSArray *)activityHConstraints;
- (NSArray *)activityVConstraints;
- (void)startIndicator;
- (void)stopIndicator;
- (UILabel *)deviceNameLabel;
- (void)setDeviceNameLabel:(UILabel *)arg0;
- (UILabel *)connectionStatusLabel;
- (void)setConnectionStatusLabel:(UILabel *)arg0;
- (UILabel *)inputLabel;
- (void)setInputLabel:(UILabel *)arg0;
- (UILabel *)slashLabel;
- (void)setSlashLabel:(UILabel *)arg0;
- (UILabel *)outputLabel;
- (void)setOutputLabel:(UILabel *)arg0;
- (NSArray *)labelConstraints;
- (void)setLabelConstraints:(NSArray *)arg0;
- (void)dealloc;
- (CACentralTableViewCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)updateConstraints;
- (void)setActivityIndicator:(UIActivityIndicatorView *)arg0;
- (UIActivityIndicatorView *)activityIndicator;

@end
