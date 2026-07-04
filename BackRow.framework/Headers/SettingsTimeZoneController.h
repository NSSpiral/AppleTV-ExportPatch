/* Runtime dump - SettingsTimeZoneController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMenuItem;
@interface SettingsTimeZoneController : BRViewController

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_timeZoneChanged:(NSNotification *)arg0;
- (void)dealloc;
- (SettingsTimeZoneController *)init;

@end
