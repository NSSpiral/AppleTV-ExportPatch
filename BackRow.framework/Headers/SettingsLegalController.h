/* Runtime dump - SettingsLegalController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMenuItem;
@interface SettingsLegalController : BRViewController

- (NSArray *)accessibilityScreenContent;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_termsOfUseSettingSelected;
- (void)_acknowledgementsSettingSelected;
- (void)_regulatorySettingSelected;
- (SettingsLegalController *)init;
- (NSString *)accessibilityLabel;

@end
