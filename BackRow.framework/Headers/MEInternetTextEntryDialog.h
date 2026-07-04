/* Runtime dump - MEInternetTextEntryDialog
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BRTextFieldDelegate;

@class ATVAddSiteEntry, BRTextEntryController, BRWaitPromptControl;
@interface MEInternetTextEntryDialog : BRViewController <BRTextFieldDelegate>
{
    BRTextEntryController * _textEntryControl;
    NSString * _URLString;
    NSString * _name;
    char _verified;
    int _currentStep;
    ATVAddSiteEntry * _currentSiteEntry;
    NSTimer * _spinnerTimer;
    BRWaitPromptControl * _spinner;
}

+ (MEInternetTextEntryDialog *)editAddSite:(id)arg0;
+ (void)initialize;

- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (void)_spinnerTimerHandler:(id /* block */)arg0;
- (MEInternetTextEntryDialog *)initWithExistingSiteInfo:(NSDictionary *)arg0;
- (void)_showNextPrompt;
- (void)_setURLTextEntryOptions;
- (void)_setNameTextEntryOptions;
- (void)_verifySiteInfo;
- (void)_addSiteAndPop;
- (void)_showVerificationAlert;
- (MEInternetTextEntryDialog *)init;
- (void)textDidChange:(id /* <BRTextField> */)arg0;
- (void).cxx_destruct;

@end
