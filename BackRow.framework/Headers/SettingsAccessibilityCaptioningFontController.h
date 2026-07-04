/* Runtime dump - SettingsAccessibilityCaptioningFontController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/SettingsAccessibilityCaptioningStyleBaseController.h>

@class BRControl, BRListControl, BRMenuItem;
@interface SettingsAccessibilityCaptioningFontController : SettingsAccessibilityCaptioningStyleBaseController
{
    long _fontStyle;
    struct CGFont * _selectedFont;
    NSArray * _availableFonts;
}

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_reloadList;
- (void)_toggleVideoOverridesStyle;
- (char)_videoOverridesStyle;
- (SettingsAccessibilityCaptioningFontController *)initWithTitle:(NSString *)arg0 andProfileID:(NSString *)arg1 andFontStyle:(long)arg2;
- (void)dealloc;
- (void).cxx_destruct;

@end
