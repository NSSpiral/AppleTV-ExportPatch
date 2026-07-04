/* Runtime dump - SettingsAccessibilityCaptioningOpacityController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/SettingsAccessibilityCaptioningStyleBaseController.h>

@class BRControl, BRListControl, BRMenuItem;
@interface SettingsAccessibilityCaptioningOpacityController : SettingsAccessibilityCaptioningStyleBaseController
{
    int _opacityType;
    NSNumber * _selectedOpacity;
}

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_reloadList;
- (void)_toggleVideoOverridesStyle;
- (char)_videoOverridesStyle;
- (SettingsAccessibilityCaptioningOpacityController *)initWithTitle:(NSString *)arg0 andProfileID:(NSString *)arg1 andOpacityType:(int)arg2;
- (void).cxx_destruct;

@end
