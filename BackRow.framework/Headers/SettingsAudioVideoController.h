/* Runtime dump - SettingsAudioVideoController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMenuItem;
@interface SettingsAudioVideoController : BRViewController

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)wasExhumed;
- (void)_reloadListForSettingsChange:(NSDictionary *)arg0;
- (NSString *)_localizedApplianceString:(NSString *)arg0;
- (void)_musicRepeatModeSettingSelected;
- (void)_soundCheckSettingSelected;
- (void)_soundEffectsSettingSelected;
- (void)_showPlaylistsSettingSelected;
- (void)_DolbyDigitalSettingSelected;
- (void)_audioOutputQualitySelected;
- (void)_audioLanguageSettingSelected;
- (void)_subtitleLanguageSettingSelected;
- (void)_overscanSelected;
- (void)_HDMIOutputSettingSelected;
- (void)_tvResolutionSelected;
- (void)dealloc;
- (SettingsAudioVideoController *)init;

@end
