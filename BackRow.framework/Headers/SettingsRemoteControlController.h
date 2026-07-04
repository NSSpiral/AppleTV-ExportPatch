/* Runtime dump - SettingsRemoteControlController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRListControl, BRMenuItem;
@interface SettingsRemoteControlController : BRViewController

+ (void)initialize;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)wasExhumed;
- (void)_pairingUpdate:(NSDate *)arg0;
- (char)_showOtherRemotesSectionDivider;
- (char)_showPairableOrPairedRemotes;
- (void)_configureMenuItemForSingleSectionDisplay:(NSObject *)arg0 forRow:(long)arg1;
- (void)_configureMenuItemForMultiSectionDisplay:(NSObject *)arg0 forSection:(long)arg1 forRow:(long)arg2;
- (id)_instructionsForPairedRemoteAtRow:(long)arg0;
- (void)_handleAppleRemoteSettingSelected;
- (void)_handleRemoteAppItemSelected;
- (void)_handle3rdPartyRemoteSettingSelectedAtRow:(long)arg0;
- (void)_handlePairedRemoteSettingSelectedAtRow:(long)arg0;
- (char)_havePairableRemotes;
- (char)_havePairedRemotes;
- (void)_configureAppleRemotePairingMenuItem:(NSObject *)arg0;
- (void)_configurePairedRemoteMenuItem:(NSObject *)arg0 forRow:(long)arg1;
- (void)_configure3rdPartyRemotePairingMenuItem:(NSObject *)arg0 forRow:(long)arg1;
- (void)_removePairedRemoteDialogOptionSelected:(id)arg0;
- (void)_openingMessageOptionSelected:(id)arg0;
- (void)_learnRemoteOptionSelected:(id)arg0;
- (void)dealloc;
- (SettingsRemoteControlController *)init;

@end
