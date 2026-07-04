/* Runtime dump - SettingsAudioLanguageController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMenuItem;
@interface SettingsAudioLanguageController : BRViewController
{
    NSArray * _menuItemKeys;
}

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (SettingsAudioLanguageController *)initWithFrame:(struct CGRect)arg0;
- (void).cxx_destruct;

@end
