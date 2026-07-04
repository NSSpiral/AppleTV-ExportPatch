/* Runtime dump - SettingsNetworkViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol ATVAPNetworkSelectionDelegate;

@class BRAirportNetwork, BRIPConfiguration, BRListControl, BRMediaMenuView, BRMenuItem, SettingsMetadataView;
@interface SettingsNetworkViewController : BRViewController <ATVAPNetworkSelectionDelegate>
{
    int _controllerState;
    BRIPConfiguration * _ipConfig;
    BRMediaMenuView * _mediaMenuView;
    SettingsMetadataView * _infoView;
    NSTimer * _updateTimer;
    char _forWireless;
    char _showSpeedTest;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSArray *)accessibilityScreenContent;
- (void)wasPushed;
- (void)wasPopped;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)wasBuried;
- (void)wasExhumed;
- (void)network:(BRAirportNetwork *)arg0 wasSelected:(char)arg1;
- (void)_updateNetworkInfo:(NSDictionary *)arg0;
- (void)_commissionNetworkUpdateTimer;
- (void)_decommissionNetworkUpdateTimer;
- (NSArray *)_networkMenuStateItemForList:(NSArray *)arg0 atIndexPath:(NSIndexPath *)arg1;
- (id)_selectionFinishedStateItemForRow:(long)arg0;
- (id)_configFailedStateItemForRow:(long)arg0;
- (void)_networkMenuStateSelectItemForRow:(long)arg0;
- (void)_selectionFinishedStateSelectItem;
- (void)_configFailedStateSelectItemForRow:(long)arg0;
- (void)_updateNetworkSummary;
- (void)_updateNetworkChangeText;
- (void)_configureSelectionFinishedStateMenu:(id)arg0 forInterface:(int)arg1;
- (void)_configureFailedMenuTextForReason:(int)arg0 withNetworkNamed:(id)arg1 withMenu:(id)arg2;
- (void)_configureEthernet;
- (void)_configureWiFi;
- (void)_doNetworkDownloadSpeedTest;
- (void)_swapToAPNetworkMenu;
- (void)_swapToTCPIPConfig;
- (void)dealloc;
- (SettingsNetworkViewController *)init;
- (void).cxx_destruct;
- (void)_networkChanged:(NSNotification *)arg0;

@end
