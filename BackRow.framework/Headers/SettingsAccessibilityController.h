/* Runtime dump - SettingsAccessibilityController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRListControl, BRMenuItem;
@interface SettingsAccessibilityController : BRViewController

+ (void)setAccessibilityImage:(UIImage *)arg0;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_voiceOverToggled:(id)arg0;
- (void)_subtitleSettingsChanged:(NSNotification *)arg0;
- (void)_videoDescriptionSettingsChanged:(NSNotification *)arg0;
- (void)dealloc;
- (SettingsAccessibilityController *)init;

@end
