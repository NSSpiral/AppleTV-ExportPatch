/* Runtime dump - ATVTCPIPConfigController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/SettingsNetworkAutoModeViewController.h>

@protocol ATVDottedQuadEntryDelegate;
@protocol SettingsNetworkAutoModeSelectionDelegate;

@class ATVDottedQuadEntryController;
@interface ATVTCPIPConfigController : SettingsNetworkAutoModeViewController <ATVDottedQuadEntryDelegate, SettingsNetworkAutoModeSelectionDelegate>
{
    <ATVTCPIPConfigDelegate> * _configurationDelegate;
    NSString * _address;
    NSString * _subnetMask;
    NSString * _router;
    NSString * _dns;
    ATVDottedQuadEntryController * _ipController;
    ATVDottedQuadEntryController * _maskController;
    ATVDottedQuadEntryController * _routerController;
    ATVDottedQuadEntryController * _dnsController;
    id _useDHCP;
    char _showOnlyDNS;
}

@property (nonatomic) char showOnlyDNS;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)entryComplete:(ATVDottedQuadEntryController *)arg0;
- (void)setShowOnlyDNS:(char)arg0;
- (void)_readCurrentConfiguration;
- (char)showOnlyDNS;
- (void)autoModeChosen:(char)arg0 forDNS:(char)arg1;
- (ATVTCPIPConfigController *)initWithWireless:(char)arg0 forDNS:(char)arg1 notifying:(id)arg2;
- (void).cxx_destruct;
- (void)_saveConfiguration;

@end
