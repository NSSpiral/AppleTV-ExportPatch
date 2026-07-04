/* Runtime dump - SettingsScreenSaverController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRListControl, BRMenuItem, SettingsChooseAlbumArtworkController;
@interface SettingsScreenSaverController : BRViewController
{
    char _screensaverThemeItemsRequireRefreshing;
    NSArray * _screensaverThemeItems;
    SettingsChooseAlbumArtworkController * _albumArtworkController;
}

@property (copy, nonatomic) NSArray * screensaverThemeItems;
@property (nonatomic) char screensaverThemeItemsRequireRefreshing;
@property (retain, nonatomic) SettingsChooseAlbumArtworkController * albumArtworkController;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)wasExhumed;
- (void)_dataServersChanged:(NSNotification *)arg0;
- (void)_screenSaverPrefetchStarted:(id)arg0;
- (void)_screenSaverPrefetchStopped:(id)arg0;
- (void)_reloadListByRefreshingScreensaverThemeItems;
- (id)_settingsItemAtRow:(long)arg0;
- (id)_screenSaverItemAtRow:(long)arg0;
- (NSArray *)_slideshowThemeItems;
- (void)_handleSettingsSelectionAtRow:(long)arg0;
- (void)_handleScreenSaverSelectionAtRow:(long)arg0;
- (NSArray *)screensaverThemeItems;
- (void)setScreensaverThemeItems:(NSArray *)arg0;
- (char)screensaverThemeItemsRequireRefreshing;
- (void)setScreensaverThemeItemsRequireRefreshing:(char)arg0;
- (SettingsChooseAlbumArtworkController *)albumArtworkController;
- (void)setAlbumArtworkController:(SettingsChooseAlbumArtworkController *)arg0;
- (char)_isAlbumArtSelected;
- (NSString *)_timeoutString;
- (void)_incrementTimeout;
- (void)_toggleMusicPref;
- (void)_showChoosePhotos;
- (NSString *)_prefetchIndicatorIndexPath;
- (void)dealloc;
- (SettingsScreenSaverController *)init;
- (void).cxx_destruct;

@end
