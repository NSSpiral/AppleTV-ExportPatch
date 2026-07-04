/* Runtime dump - SettingsAccessibilityCaptioningTextHighlightController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/SettingsAccessibilityCaptioningStyleBaseController.h>

@class BRControl, BRListControl, BRMenuItem;
@interface SettingsAccessibilityCaptioningTextHighlightController : SettingsAccessibilityCaptioningStyleBaseController
{
    struct CGColor * _selectedHighlightColor;
    NSNumber * _selectedHighlightOpacity;
}

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (SettingsAccessibilityCaptioningTextHighlightController *)initWithTitle:(NSString *)arg0 andProfileID:(NSString *)arg1;
- (void)_reloadList;
- (void)dealloc;
- (void).cxx_destruct;

@end
