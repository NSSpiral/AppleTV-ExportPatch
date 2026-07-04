/* Runtime dump - SettingsGeneralViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BREvent, BRListControl, BRMediaMenuView, BRMenuItem;
@interface SettingsGeneralViewController : BRViewController
{
    char _showFeatureEnablerByDefault;
    char _showInverseDeviceID;
    int _previewImageType;
}

- (char)brEventAction:(BREvent *)arg0;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (BRMediaMenuView *)_mediaMenuView;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)wasExhumed;
- (void)_deviceNamedChanged:(NSNotification *)arg0;
- (unsigned int)_adjustIndexBasedOnHiddenItemsForIndex:(unsigned int)arg0;
- (void)_showInstalledProfiles;
- (void)_toggleShowInverseDeviceID;
- (void)_toggleRetailMode;
- (NSString *)_sleepTimeoutString;
- (void)_toggleRetailChannelMode;
- (char)_hasInstalledProfiles;
- (void)_setImageType:(int)arg0 forPreviewView:(NSObject *)arg1;
- (void)_aboutSettingSelected;
- (void)_nameSettingSelected;
- (void)_networkSettingSelected;
- (void)_parentalControlsSettingSelected;
- (void)_remoteControlSettingSelected;
- (void)_bluetoothSettingSelected;
- (void)_softwareUpdateSettingSelected;
- (void)_languageSettingSelected;
- (void)_localeSettingSelected;
- (void)_timeZoneSelected;
- (void)_accessibilitySettingSelected;
- (void)_incrementSleepTimeout;
- (void)_toggleUsageOptInSelected;
- (void)_legalSettingSelected;
- (void)_resetSettingSelected;
- (void)_restartSettingSelected;
- (void)_featureEnablerSelected;
- (void)_troubleshootingSettingSelected;
- (void)_languageSelected:(id)arg0;
- (void)_enableRetailMode:(char)arg0;
- (void)_timeZoneChanged:(NSNotification *)arg0;
- (void)dealloc;
- (SettingsGeneralViewController *)init;
- (NSString *)accessibilityLabel;
- (void)textDidChange:(id /* <BRTextField> */)arg0;

@end
