/* Runtime dump - SettingsTVResolutionController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMenuItem;
@interface SettingsTVResolutionController : BRViewController
{
    NSArray * _resolutionList;
    long _currentSavedSelection;
}

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_refreshDisplaySettings:(NSDictionary *)arg0;
- (void)_buildSupportedResolutionList;
- (void)_handleResolutionChangeResult:(int)arg0 forMode:(struct __CFString *)arg1;
- (void)dealloc;
- (SettingsTVResolutionController *)init;
- (void).cxx_destruct;

@end
