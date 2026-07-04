/* Runtime dump - AAUIExplainAppleIDViewController
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIExplainAppleIDViewController : UIViewController
{
    UIScrollView * _scrollView;
    UIView * _contentView;
    UILabel * _titleLabel;
    UILabel * _descriptionLabel;
    UIButton * _goToSettingsButton;
    char _shouldShowInviteeInstructions;
}

@property (nonatomic) char shouldShowInviteeInstructions;

- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (char)shouldShowInviteeInstructions;
- (void)setShouldShowInviteeInstructions:(char)arg0;
- (float)_heightForText:(NSString *)arg0 constrainedToWidth:(float)arg1;

@end
