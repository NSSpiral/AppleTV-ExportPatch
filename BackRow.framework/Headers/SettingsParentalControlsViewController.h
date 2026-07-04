/* Runtime dump - SettingsParentalControlsViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRListControl, BRMenuItem;
@interface SettingsParentalControlsViewController : BRViewController
{
    char _correctPIN;
    NSInvocation * _correctPINAction;
}

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)controlWasActivated;
- (void)_reloadMenuItems;
- (void)_setTextForPCStoreSectionMenuItem:(NSObject *)arg0 atRow:(long)arg1;
- (void)_setTextForPCAirPlaySectionMenuItem:(NSObject *)arg0 atRow:(long)arg1;
- (void)_handlePCEnabledSectionSelectionForRow:(long)arg0;
- (void)_handlePCStoreSectionSelectionForRow:(long)arg0;
- (void)_handlePCAirPlaySectionSelectionForRow:(long)arg0;
- (NSObject *)_ratingThresholdStringForMediaType:(NSObject *)arg0;
- (void)_toggleParentalControls;
- (void)_changePIN;
- (void)_togglePurchaseRentalMode;
- (void)_toggleRatingSystem;
- (void)_toggleRestrictMoviesMode;
- (void)_toggleRestrictTVShowsMode;
- (void)_toggleExplicitContentMode;
- (void)_toggleAirPlaySettings;
- (void)_toggleAirPlayCRD;
- (void)_askForPINWithCorrectPINAction:(SEL)arg0;
- (void)_toggleITunesMusicMode;
- (void)_iterateRatingThresholdForMediaType:(NSObject *)arg0;
- (void)_askForPINWithCorrectPINAction:(SEL)arg0 argument:(void *)arg1;
- (id)_buildPasscodeControllerWithMode:(int)arg0;
- (void)_successfulPINEntry:(id)arg0;
- (void)dealloc;
- (SettingsParentalControlsViewController *)init;
- (void).cxx_destruct;

@end
