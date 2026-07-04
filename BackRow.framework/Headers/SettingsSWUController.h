/* Runtime dump - SettingsSWUController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMediaMenuView, BRMenuItem;
@interface SettingsSWUController : BRViewController
{
    char _showingCancelDialog;
    float _updateDownloadPercentage;
}

@property (nonatomic) float updateDownloadPercentage;
@property (nonatomic) char showingCancelDialog;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (BRMediaMenuView *)_mediaMenuView;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_updateCheckFinished:(id)arg0;
- (void)_updateDownloadFinished:(id)arg0;
- (void)_updateApplyFailed:(id)arg0;
- (void)_reloadList;
- (void)_updateCheckStarted:(id)arg0;
- (void)_updateDownloadStarted:(id)arg0;
- (void)_seedSoftwareUpdateSettingSelected;
- (void)_showHideProgressUI;
- (void)_softwareUpdate:(char)arg0;
- (float)updateDownloadPercentage;
- (void)setUpdateDownloadPercentage:(float)arg0;
- (char)showingCancelDialog;
- (void)setShowingCancelDialog:(char)arg0;
- (void)_updateProgress:(id)arg0;
- (void)dealloc;
- (SettingsSWUController *)init;

@end
