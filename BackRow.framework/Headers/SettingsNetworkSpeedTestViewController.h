/* Runtime dump - SettingsNetworkSpeedTestViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BRSecureResource;

@class BRAuthenticator, BRListControl, BRMenuItem, SettingsNetworkSpeedTestView;
@interface SettingsNetworkSpeedTestViewController : BRViewController <BRSecureResource>
{
    SettingsNetworkSpeedTestView * _networkSpeedTestView;
    int _speedTestDialogLevel;
    int _currentDownloadTestNumber;
    NSMutableDictionary * _userInput;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRAuthenticator *)secureResourceAuthenticator;
- (void)wasPopped;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_networkLogUpdateProgressUpdate:(NSDate *)arg0;
- (void)_downloadsComplete:(id)arg0;
- (void)_uploadsComplete:(id)arg0;
- (void)_testCanceled:(id)arg0;
- (void)_networkLogErrorNotification:(NSNotification *)arg0;
- (void)_updateCurrentScreen;
- (id)_controlNameForCurrentlyExperiencingSlowDownloadScreenAtRow:(long)arg0;
- (id)_controlNameForInternetConnectionExpectedSpeedScreenAtRow:(long)arg0;
- (id)_controlNameForResultsScreenAtRow:(long)arg0;
- (int)_bandwidthIntValueForRow:(long)arg0;
- (void)_startDownloads;
- (void)_postBandwidthVerificationInProgressErrorMessage;
- (void)_postStoreConnectionErrorMessage;
- (id)_controlNameForLegalDisclosureScreenAtRow:(long)arg0;
- (void)dealloc;
- (SettingsNetworkSpeedTestViewController *)init;
- (void).cxx_destruct;

@end
