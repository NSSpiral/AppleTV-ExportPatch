/* Runtime dump - ATVAPNetworkMenuController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuController.h>

@protocol ATVAPPasswordEntryDelegate;
@protocol ATVAPTestResultDelegate;
@protocol BRTextFieldDelegate;

@class ATVAPTestController, BRAirportNetwork, BRAirportNetworksProvider, BREvent;
@interface ATVAPNetworkMenuController : BRMenuController <ATVAPTestResultDelegate, ATVAPPasswordEntryDelegate, BRTextFieldDelegate>
{
    <ATVAPNetworkSelectionDelegate> * _delegate;
    ATVAPTestController * _testController;
    NSArray * _networks;
    BRAirportNetwork * _selectedNetwork;
    NSString * _otherNetworkName;
    NSString * _attemptedPassword;
    NSString * _passwordFromSetupInfo;
    char _isCollectingNetworks;
    char _forOOB;
    BRAirportNetworksProvider * _networksProvider;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)brEventAction:(BREvent *)arg0;
- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (void)itemSelected:(long)arg0;
- (ATVAPNetworkMenuController *)initWithNotifying:(id)arg0 duringOOB:(char)arg1 networkName:(NSString *)arg2 password:(NSString *)arg3;
- (void)_collectWirelessNetworks;
- (void)_collectNetworkWithName:(NSString *)arg0 password:(NSString *)arg1;
- (NSObject *)_otherNetworkListItem;
- (NSObject *)_currentNetworkListItem;
- (void)_updateMenuWidth;
- (void)_collectPasswordForNetwork:(id)arg0;
- (ATVAPNetworkMenuController *)initWithNotifying:(id)arg0 duringOOB:(char)arg1;
- (void)_networkHasBeenCollected:(id)arg0;
- (void)_showFailedNetworkConnection:(NSURLConnection *)arg0 error:(NSError *)arg1;
- (void)_networksHaveBeenCollected:(id)arg0;
- (void)_removeSetupTextControllerIfPresent;
- (void)_selectNetwork:(id)arg0 usingPassword:(NSString *)arg1;
- (void)_removeDirectedScanControllerIfPresent;
- (void)_associateWithNetworkCompleted:(id)arg0;
- (char)_exitErrorDialogWithAnyPress:(id)arg0;
- (void)_updateNetworksProvider;
- (void)_removeTestControllerIfPresent;
- (void)testCompleted:(char)arg0;
- (void)passwordEntered:(NSString *)arg0 forNetwork:(BRAirportNetwork *)arg1;
- (void)dealloc;
- (void)textDidChange:(id /* <BRTextField> */)arg0;
- (void).cxx_destruct;
- (void)_networkStateChanged:(NSNotification *)arg0;

@end
