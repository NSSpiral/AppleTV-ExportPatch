/* Runtime dump - SettingsNetworkAdvancedViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol ATVDottedQuadEntryDelegate;
@protocol ATVTCPIPConfigDelegate;

@class ATVDottedQuadEntryController, BRControl, BRIPConfiguration, BRListControl, BRMenuItem;
@interface SettingsNetworkAdvancedViewController : BRViewController <ATVDottedQuadEntryDelegate, ATVTCPIPConfigDelegate>
{
    ATVDottedQuadEntryController * _ipController;
    ATVDottedQuadEntryController * _maskController;
    ATVDottedQuadEntryController * _routerController;
    ATVDottedQuadEntryController * _dnsController;
    NSString * _address;
    NSString * _subnetMask;
    NSString * _router;
    NSString * _dns;
    BRIPConfiguration * _ipConfig;
    char _forWireless;
    char _usesDHCP;
    char _usesManualDNS;
    char _showForgetNetwork;
    char _isForgettingNetwork;
    char _userHasSetManualDNS;
    char _contentDirty;
    NSTimer * _updateTimer;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)entryComplete:(ATVDottedQuadEntryController *)arg0;
- (SettingsNetworkAdvancedViewController *)initForWireless:(char)arg0;
- (void)_readCurrentConfiguration;
- (void)configurationComplete:(char)arg0 forInterface:(int)arg1;
- (void)_commissionNetworkUpdateTimer;
- (void)_decommissionNetworkUpdateTimer;
- (void)_networkStateWillChange:(NSDictionary *)arg0;
- (void)_exitErrorDialogWithAnyPress;
- (void)_reloadMenuItems;
- (void)configureDHCP;
- (void)_configureIP;
- (void)_configureSubnet;
- (void)_configureRouter;
- (void)_configureAutoDNS;
- (void)_configureDNS;
- (void)_forgetNetwork;
- (void)_saveCurrentConfigurationShowingProgress:(char)arg0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_networkChanged:(NSNotification *)arg0;

@end
