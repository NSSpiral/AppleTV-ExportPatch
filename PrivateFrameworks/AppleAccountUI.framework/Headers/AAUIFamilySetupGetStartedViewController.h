/* Runtime dump - AAUIFamilySetupGetStartedViewController
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilySetupGetStartedViewController : UIViewController <AAUIFamilySetupPage>
{
    ACAccount * _account;
    ACAccountStore * _accountStore;
    AAFamilyEligibilityResponse * _familyEligibilityResponse;
    UIScrollView * _scrollView;
    UIView * _contentView;
    UILabel * _titleLabel;
    UIImageView * _familySharingLogo;
    UILabel * _descriptionLabel;
    UIButton * _getStartedButton;
    AAUIFamilySharingFeaturesView * _familyFeaturesView;
    <AAUIFamilySetupPageDelegate> * _delegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (weak, nonatomic) <AAUIFamilySetupPageDelegate> * delegate;

- (void)setDelegate:(<AAUIFamilySetupPageDelegate> *)arg0;
- (<AAUIFamilySetupPageDelegate> *)delegate;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (AAUIFamilySetupGetStartedViewController *)initWithAccount:(ACAccount *)arg0 store:(EKEventStore *)arg1;
- (float)_heightForText:(NSString *)arg0 constrainedToWidth:(float)arg1;
- (AAUIFamilySetupGetStartedViewController *)initWithAccount:(ACAccount *)arg0 store:(EKEventStore *)arg1 familyEligibilityResponse:(AAFamilyEligibilityResponse *)arg2;
- (NSString *)_createDescriptionLabelForText:(NSString *)arg0;
- (void)_getStartedButtonWasTapped:(id)arg0;

@end
