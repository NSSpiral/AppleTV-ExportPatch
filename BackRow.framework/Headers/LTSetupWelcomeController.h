/* Runtime dump - LTSetupWelcomeController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@protocol ATVAPTestResultDelegate;
@protocol LTWirelessSetupResultDelegate;

@class BRController, BREvent, LTLocaleSetupController;
@interface LTSetupWelcomeController : BRController <ATVAPTestResultDelegate, LTWirelessSetupResultDelegate>
{
    BRController * _netSetupController;
    char _isNetworkSetupDone;
    char _didNetworkSetupSucceed;
    NSString * _preselectedNetworkPassword;
    NSString * _preselectedNetworkName;
    NSString * _initialSystemLanguage;
    NSString * _initialLocaleCountryCode;
    SSAccount * _initialUserAccount;
    char _wasNetworkTested;
    char _wasDeviceActivated;
    char _wasLocaleSelected;
    char _didShowPrivacyNotice;
    char _wasBuriedForSetup;
    char _supervisedSetupWasRequested;
    char _supervisedSetupSucceeded;
    char _tapToSetupSucceeded;
    char _voiceOverGreetingCancelled;
    NSTimer * _voiceOverGreetingTimer;
    LTLocaleSetupController * _localeController;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)brEventAction:(BREvent *)arg0;
- (void)_startSupervisedSetup:(id)arg0;
- (void)wasPushed;
- (void)wasPopped;
- (void)wasExhumed;
- (void)testCompleted:(char)arg0;
- (void)wirelessSetupSucceeded;
- (void)wirelessSetupFailed;
- (void)prepareForSetupWithDeviceName:(NSString *)arg0;
- (void)performSetupWithInfo:(NSDictionary *)arg0;
- (void)_showPrivacyNotice;
- (void)_showLanguageChooser;
- (void)_networkFailedNotification:(NSNotification *)arg0;
- (void)_popToNetworkSetup:(id)arg0;
- (void)_restartVoiceOverGreetingTimer:(NSObject *)arg0;
- (void)_automaticSetupDisabled:(id)arg0;
- (void)_startVoiceOverGreetingTimer:(double)arg0;
- (void)_cancelVoiceOverGreeting;
- (void)_setupNetworking;
- (void)_startNetworkTest;
- (void)_activateDeviceAndBeginLocaleAutodetect;
- (void)_waitForLocaleAutodetect;
- (void)_setupDone:(id)arg0;
- (LTLocaleSetupController *)_localeController;
- (void)_finishSetupAndRestart;
- (void)_playVoiceOverGreeting;
- (void)_supervisedSetupFinished:(id)arg0;
- (void)_enableVoiceOver;
- (void)dealloc;
- (LTSetupWelcomeController *)init;
- (void).cxx_destruct;

@end
