/* Runtime dump - ATVLanguageChooserController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol TVPeripheralManagerUIBluetoothDelegate;

@class BREvent, BRHorizontalDividerControl, BRListView, BRMenuItem, BRMenuView, BRTextControl, TVPeripheralManagerUI;
@interface ATVLanguageChooserController : BRViewController <TVPeripheralManagerUIBluetoothDelegate>
{
    NSArray * _languageKeys;
    NSDictionary * _languageKeysAndPrompts;
    char _canBePopped;
    char _useVoiceOverGreeting;
    double _lastPlayButtonPress;
    int _playButtonPressCount;
    char _isOOB;
    BRListView * _list;
    BRMenuView * _menuView;
    BRTextControl * _setupPrompt;
    BRTextControl * _setupPromptDisclaimer;
    BRHorizontalDividerControl * _setupPromptDivider;
    char _scanningForBluetoothDevicesDisabled;
    char _promptForAutomaticSetupDisabled;
    NSString * _highlightedLocalization;
    TVPeripheralManagerUI * _peripheralManager;
}

@property (nonatomic) char scanningForBluetoothDevicesDisabled;
@property (nonatomic) char promptForAutomaticSetupDisabled;
@property (nonatomic) char useVoiceOverGreeting;
@property (copy, nonatomic) NSString * highlightedLocalization;
@property (retain) TVPeripheralManagerUI * peripheralManager;

+ (ATVLanguageChooserController *)controlOOB;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)wasPushed;
- (BRMenuItem *)list:(BRListView *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListView *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListView *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListView *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (long)_defaultIndex;
- (ATVLanguageChooserController *)initWithOOBLayout:(char)arg0;
- (NSString *)_localizedStringKeyForSetupPrompt;
- (NSString *)_localizedStringForSetupPromptDisclaimer;
- (void)_collectLanguages;
- (void)setCanBePopped:(char)arg0;
- (char)canBePopped;
- (char)useVoiceOverGreeting;
- (void)setHighlightedLocalization:(NSString *)arg0;
- (NSString *)highlightedLocalization;
- (void)_showProgressForLanguage:(NSString *)arg0;
- (void)_performLanguageChange:(NSDictionary *)arg0;
- (void)peripheralManager:(TVPeripheralManagerUI *)arg0 deviceDiscovered:(BluetoothDevice *)arg1;
- (void)peripheralManager:(TVPeripheralManagerUI *)arg0 deviceReadyToPair:(BluetoothDevice *)arg1;
- (void)setPromptForAutomaticSetupDisabled:(char)arg0;
- (void)setScanningForBluetoothDevicesDisabled:(char)arg0;
- (void)setUseVoiceOverGreeting:(char)arg0;
- (char)scanningForBluetoothDevicesDisabled;
- (char)promptForAutomaticSetupDisabled;
- (TVPeripheralManagerUI *)peripheralManager;
- (void)setPeripheralManager:(TVPeripheralManagerUI *)arg0;
- (void)dealloc;
- (ATVLanguageChooserController *)init;
- (void).cxx_destruct;
- (NSString *)accessibilitySecondaryLabel;

@end
