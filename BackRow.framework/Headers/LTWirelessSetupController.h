/* Runtime dump - LTWirelessSetupController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol ATVAPNetworkSelectionDelegate;

@class BRAirportNetwork;
@interface LTWirelessSetupController : BRViewController <ATVAPNetworkSelectionDelegate>
{
    <LTWirelessSetupResultDelegate> * _delegate;
    char _didJoinNetwork;
    NSString * _networkName;
    NSString * _networkPassword;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)wasPushed;
- (void)wasPopped;
- (void)wasExhumed;
- (void)network:(BRAirportNetwork *)arg0 wasSelected:(char)arg1;
- (LTWirelessSetupController *)initWithNetworkName:(NSString *)arg0 password:(NSString *)arg1;
- (void)_showNetworkMenu;
- (void)setDelegate:(<LTWirelessSetupResultDelegate> *)arg0;
- (LTWirelessSetupController *)init;
- (<LTWirelessSetupResultDelegate> *)delegate;
- (void).cxx_destruct;

@end
