/* Runtime dump - SettingsTVAppViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/SettingsAppViewController.h>

@class BRControl, BRListControl, BRMenuItem, BRMerchant, WLKSettingsStore;
@interface SettingsTVAppViewController : SettingsAppViewController
{
    char _didFetchConfiguration;
    WLKSettingsStore * _settings;
}

@property (retain, nonatomic) WLKSettingsStore * settings;
@property (nonatomic) char didFetchConfiguration;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (SettingsTVAppViewController *)initWithMerchant:(BRMerchant *)arg0;
- (void)setDidFetchConfiguration:(char)arg0;
- (void)_settingsDidChange:(NSDictionary *)arg0;
- (int)_sectionForSection:(int)arg0;
- (id)_preferenceMenuItemForRow:(int)arg0;
- (id)_privacyMenuItemForRow:(int)arg0;
- (NSObject *)_privateModeMenuItem;
- (NSObject *)_clearHistoryMenuItem;
- (NSObject *)_locationServicesMenuItem;
- (char)didFetchConfiguration;
- (WLKSettingsStore *)settings;
- (void)setSettings:(WLKSettingsStore *)arg0;
- (void).cxx_destruct;

@end
