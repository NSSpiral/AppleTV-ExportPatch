/* Runtime dump - AAUIFamilySetupPrompter
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilySetupPrompter : NSObject <AAUIFamilySetupDelegate>
{
    ACAccountStore * _accountStore;
    ACAccount * _appleAccount;
    ACAccount * _grandSlamAccount;
    SSAccount * _iTunesAccount;
    UIViewController * _presentingViewController;
    NSOperationQueue * _networkingQueue;
    char _isRequestInFlight;
    <AAUIFamilySetupPrompterDelegate> * _delegate;
}

@property (weak, nonatomic) <AAUIFamilySetupPrompterDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<AAUIFamilySetupPrompterDelegate> *)arg0;
- (AAUIFamilySetupPrompter *)init;
- (<AAUIFamilySetupPrompterDelegate> *)delegate;
- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;
- (void).cxx_destruct;
- (AAUIFamilySetupPrompter *)initWithiTunesAccount:(NSObject *)arg0;
- (void)_handleFamilyEligibilityResponse:(NSURLResponse *)arg0 isFirstRun:(char)arg1;
- (void)_showUnderageAlertWithEligibilityResponse:(NSURLResponse *)arg0;
- (void)_showConfirmationForStartingFamilySetupWithPendingInvite;
- (void)_showConfirmationForStartingFamilySetup;
- (void)_showPendingInvitesDialog;
- (void)_startFamilySetupFlowWithEligibilityResponse:(NSURLResponse *)arg0;
- (void)_goToInvitations;
- (void)_goToFamilySetup;
- (void)familySetupViewController:(BRController *)arg0 didCompleteWithSuccess:(char)arg1;
- (void)promptIfEligibleWithPresentingViewController:(UIViewController *)arg0 isFirstRun:(char)arg1;

@end
