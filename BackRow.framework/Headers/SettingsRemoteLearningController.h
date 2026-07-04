/* Runtime dump - SettingsRemoteLearningController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BREvent;
@interface SettingsRemoteLearningController : BRViewController
{
    NSDictionary * _remoteDictionary;
    int _currentLearningButton;
    int _firstLearningButton;
    int _lastLearningButton;
    char _editingExtendedCodes;
    char _reRecordingBasicButtons;
    char _showingBasicSetupCompleteMessage;
}

- (char)brEventAction:(BREvent *)arg0;
- (void)wasPushed;
- (void)wasPopped;
- (void)wasExhumed;
- (NSString *)_defaultCustomName;
- (NSString *)_localizedString:(NSString *)arg0;
- (void)_process3rdPartyError:(NSError *)arg0;
- (void)_process3rdPartyProgress:(id)arg0;
- (void)_process3rdPartyCaptureDone:(id)arg0;
- (void)_process3rdPartyDuplicate:(id)arg0;
- (void)_process3rdPartySuccess:(id)arg0;
- (void)_startLearningCurrentButton;
- (char)_goToPreviousLearningButton;
- (void)_advanceToNextLearningButton;
- (NSObject *)_learningView;
- (void)setRemoteSetToEdit:(id)arg0 forExtendedCodes:(char)arg1;
- (void)_showButtonExistsMessage;
- (void)_nameCustomRemoteSet;
- (void)_learnCurrentButton;
- (void)_usagePageAndCodeForCurrentButton:(struct ? *)arg0;
- (void)_buttonExistsOptionSelected:(id)arg0;
- (NSString *)_dictionaryForRemoteWithName:(NSString *)arg0;
- (char)_remoteHasExtendedButtons:(id)arg0;
- (void)_showBasicCompleteMessage;
- (void)_showBasicCompleteMessageOptionSelected:(id)arg0;
- (void)_beginExtendedRemoteSetup;
- (SettingsRemoteLearningController *)init;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void).cxx_destruct;

@end
