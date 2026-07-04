/* Runtime dump - SettingsProfileInstallationController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BRAlertControl, BRWaitPromptControl;
@interface SettingsProfileInstallationController : BRController
{
    BRWaitPromptControl * _prompt;
    BRAlertControl * _error;
}

+ (void)initialize;

- (void)layoutSubcontrols;
- (void)wasPushed;
- (void)wasPopped;
- (NSURL *)_promptForURL;
- (void)_profileLoaded:(id)arg0;
- (SettingsProfileInstallationController *)init;
- (void).cxx_destruct;

@end
