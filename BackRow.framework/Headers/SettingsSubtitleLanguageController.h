/* Runtime dump - SettingsSubtitleLanguageController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMediaMenuView, BRMenuItem;
@interface SettingsSubtitleLanguageController : BRViewController
{
    NSArray * _menuItemKeys;
    BRMediaMenuView * _mediaMenuView;
}

@property (retain, nonatomic) NSArray * menuItemKeys;
@property (retain, nonatomic) BRMediaMenuView * mediaMenuView;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (BRMediaMenuView *)mediaMenuView;
- (void)setMediaMenuView:(BRMediaMenuView *)arg0;
- (void)_subtitleSettingsChanged:(NSNotification *)arg0;
- (void)_populateMenuItemKeys;
- (NSArray *)menuItemKeys;
- (void)setMenuItemKeys:(NSArray *)arg0;
- (SettingsSubtitleLanguageController *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void).cxx_destruct;

@end
