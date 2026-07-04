/* Runtime dump - AAUIFamilySetupOrganizerViewController
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilySetupOrganizerViewController : AAUIConfirmIdentityViewController <AAUIFamilySetupPage>
{
    <AAUIFamilySetupPageDelegate> * _delegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (weak, nonatomic) <AAUIFamilySetupPageDelegate> * delegate;

- (void)setDelegate:(<AAUIFamilySetupPageDelegate> *)arg0;
- (<AAUIFamilySetupPageDelegate> *)delegate;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (NSString *)pageTitle;
- (id)titleForContinuebutton;
- (void)continueButtonWasTapped:(id)arg0;
- (char)shouldShowInviteeInstructions;
- (id)_createCancelButton;
- (void)_cancelButtonWasTapped:(id)arg0;
- (AAUIFamilySetupOrganizerViewController *)initWithAccount:(ACAccount *)arg0 store:(EKEventStore *)arg1;
- (NSString *)instructions;

@end
