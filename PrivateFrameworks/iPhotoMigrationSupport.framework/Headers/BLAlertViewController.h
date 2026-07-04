/* Runtime dump - BLAlertViewController
 * Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

@interface BLAlertViewController : UIViewController
{
    char _showsProgressIndicator;
    char _showsActivityIndicator;
    char _hasActivity;
    <BLAlertViewControllerDelegate> * _delegate;
    NSString * _message;
    float _progress;
    UILabel * _titleLabel;
    UILabel * _messageLabel;
    UIButton * _cancelButton;
    NSString * _cancelButtonTitle;
    UIButton * _firstOtherButton;
    NSString * _firstOtherButtonTitle;
    UIButton * _secondOtherButton;
    NSString * _secondOtherButtonTitle;
    UIProgressView * _progressView;
    UIActivityIndicatorView * _activityIndicator;
    struct CGSize _formSize;
}

@property (weak, nonatomic) <BLAlertViewControllerDelegate> * delegate;
@property (readonly, nonatomic) int cancelButtonIndex;
@property (retain, nonatomic) NSString * message;
@property (nonatomic) char showsProgressIndicator;
@property (nonatomic) float progress;
@property (nonatomic) char showsActivityIndicator;
@property (nonatomic) char hasActivity;
@property (retain, nonatomic) UILabel * titleLabel;
@property (retain, nonatomic) UILabel * messageLabel;
@property (retain, nonatomic) UIButton * cancelButton;
@property (retain, nonatomic) NSString * cancelButtonTitle;
@property (retain, nonatomic) UIButton * firstOtherButton;
@property (retain, nonatomic) NSString * firstOtherButtonTitle;
@property (retain, nonatomic) UIButton * secondOtherButton;
@property (retain, nonatomic) NSString * secondOtherButtonTitle;
@property (retain, nonatomic) UIProgressView * progressView;
@property (retain, nonatomic) UIActivityIndicatorView * activityIndicator;
@property (nonatomic) struct CGSize formSize;

- (void)cancelAction:(NSObject *)arg0;
- (void)setDelegate:(<BLAlertViewControllerDelegate> *)arg0;
- (void)setTitle:(NSString *)arg0;
- (<BLAlertViewControllerDelegate> *)delegate;
- (int)cancelButtonIndex;
- (void)viewDidLayoutSubviews;
- (void)setProgress:(float)arg0;
- (UILabel *)titleLabel;
- (NSString *)message;
- (UILabel *)messageLabel;
- (UIButton *)cancelButton;
- (void)setCancelButton:(UIButton *)arg0;
- (void)viewDidLoad;
- (void)setMessage:(NSString *)arg0;
- (void)setTitleLabel:(UILabel *)arg0;
- (void)setProgressView:(UIProgressView *)arg0;
- (UIProgressView *)progressView;
- (float)progress;
- (void).cxx_destruct;
- (void)setActivityIndicator:(UIActivityIndicatorView *)arg0;
- (UIActivityIndicatorView *)activityIndicator;
- (void)setCancelButtonTitle:(NSString *)arg0;
- (NSString *)cancelButtonTitle;
- (void)setFirstOtherButtonTitle:(NSString *)arg0;
- (void)setSecondOtherButtonTitle:(NSString *)arg0;
- (void)setFormSize:(struct CGSize)arg0;
- (NSString *)secondOtherButtonTitle;
- (NSString *)firstOtherButtonTitle;
- (void)updateProgressAndActivityIndicators;
- (UIButton *)firstOtherButton;
- (UIButton *)secondOtherButton;
- (void)_sizeContent;
- (void)_recalculateFormSize;
- (char)showsActivityIndicator;
- (char)showsProgressIndicator;
- (struct CGSize)formSize;
- (char)hasActivity;
- (BLAlertViewController *)initWithTitle:(NSString *)arg0 message:(NSString *)arg1 cancelButtonTitle:(NSString *)arg2 firstOtherButtonTitle:(NSString *)arg3 secondOtherButtonTitle:(NSString *)arg4;
- (void)setHasActivity:(char)arg0;
- (void)firstOtherButtonAction:(NSObject *)arg0;
- (void)secondOtherButtonAction:(NSObject *)arg0;
- (struct CGSize)formSizeForOrientation:(int)arg0;
- (void)setShowsProgressIndicator:(char)arg0;
- (void)setShowsActivityIndicator:(char)arg0;
- (void)setMessageLabel:(UILabel *)arg0;
- (void)setFirstOtherButton:(UIButton *)arg0;
- (void)setSecondOtherButton:(UIButton *)arg0;

@end
