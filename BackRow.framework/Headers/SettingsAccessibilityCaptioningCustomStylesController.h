/* Runtime dump - SettingsAccessibilityCaptioningCustomStylesController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/SettingsAccessibilityCaptioningStyleBaseController.h>

@class BRControl, BRListControl, BRMenuItem;
@interface SettingsAccessibilityCaptioningCustomStylesController : SettingsAccessibilityCaptioningStyleBaseController
{
    NSArray * _styleProfiles;
    NSArray * _customStyleProfiles;
}

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 willFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (SettingsAccessibilityCaptioningCustomStylesController *)initWithTitle:(NSString *)arg0 andProfileID:(NSString *)arg1;
- (void)_loadCaptionStyles;
- (NSString *)_styleNameAtIndexPath:(NSIndexPath *)arg0;
- (void)_reloadList;
- (void).cxx_destruct;

@end
