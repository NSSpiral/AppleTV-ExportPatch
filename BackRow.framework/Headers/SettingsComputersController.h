/* Runtime dump - SettingsComputersController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRListControl, BRMenuItem;
@interface SettingsComputersController : BRViewController
{
    char _isDiagnosticsItemEnabled;
}

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (id)_settingsItemForRow:(long)arg0;
- (void)_handleSettingsItemSelectedForRow:(long)arg0;
- (void)_preferredAccountChangedState:(NSObject *)arg0;
- (void)_iTunesConnectForHomeShare;
- (void)_diagnoseHomeSharing;
- (void)_inspectHomeShareAccount;
- (void)_existingHomeShareOptionSelected:(id)arg0;
- (void)dealloc;
- (SettingsComputersController *)init;

@end
