/* Runtime dump - LTLanguageController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BREvent;
@interface LTLanguageController : BRViewController
{
    char _useVoiceOverGreeting;
    char _scanningForBluetoothDevicesDisabled;
    char _promptForAutomaticSetupDisabled;
}

@property (nonatomic) char scanningForBluetoothDevicesDisabled;
@property (nonatomic) char promptForAutomaticSetupDisabled;
@property (nonatomic) char useVoiceOverGreeting;

- (char)brEventAction:(BREvent *)arg0;
- (void)wasPushed;
- (char)useVoiceOverGreeting;
- (NSString *)highlightedLocalization;
- (void)setPromptForAutomaticSetupDisabled:(char)arg0;
- (void)setScanningForBluetoothDevicesDisabled:(char)arg0;
- (void)setUseVoiceOverGreeting:(char)arg0;
- (char)scanningForBluetoothDevicesDisabled;
- (char)promptForAutomaticSetupDisabled;
- (void)languageSelected:(id)arg0;
- (void)_showLanguageChooser;
- (void)dealloc;
- (LTLanguageController *)init;

@end
