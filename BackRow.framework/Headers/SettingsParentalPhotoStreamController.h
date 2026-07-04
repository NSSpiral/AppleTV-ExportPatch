/* Runtime dump - SettingsParentalPhotoStreamController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMenuItem, BRMerchant;
@interface SettingsParentalPhotoStreamController : BRViewController
{
    BRMerchant * _merchant;
}

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (SettingsParentalPhotoStreamController *)initWithMerchant:(BRMerchant *)arg0;
- (void)dealloc;
- (void).cxx_destruct;

@end
