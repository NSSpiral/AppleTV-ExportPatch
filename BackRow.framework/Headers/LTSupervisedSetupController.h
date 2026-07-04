/* Runtime dump - LTSupervisedSetupController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRTextWithSpinnerController.h>

@protocol ATVAPTestResultDelegate;
@interface LTSupervisedSetupController : BRTextWithSpinnerController <ATVAPTestResultDelegate>
{
    NSTimer * _waitForNetworkTimer;
    char _completed;
    <LTWirelessSetupResultDelegate> * _delegate;
}

@property (weak, nonatomic) <LTWirelessSetupResultDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)wasPushed;
- (void)wasPopped;
- (void)_internetAvailabilityChanged:(NSNotification *)arg0;
- (void)testCompleted:(char)arg0;
- (void)_startSetup;
- (void)_finishedSetupWithStatus:(char)arg0 failureReason:(id *)arg1;
- (void)_installStoredProfile;
- (void)_runNetworkTest;
- (void)_waitForNetwork;
- (void)_networkTimedOut:(id)arg0;
- (void)_validateNetwork;
- (void)dealloc;
- (void)setDelegate:(<LTWirelessSetupResultDelegate> *)arg0;
- (<LTWirelessSetupResultDelegate> *)delegate;
- (void).cxx_destruct;

@end
