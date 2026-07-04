/* Runtime dump - SettingsParentalLocaleController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuController.h>

@class SettingsParentalLocaleProvider;
@interface SettingsParentalLocaleController : BRMenuController
{
    SettingsParentalLocaleProvider * _localeProvider;
}

@property (retain, nonatomic) SettingsParentalLocaleProvider * localeProvider;

- (void)controlWasActivated;
- (void)itemSelected:(long)arg0;
- (void)_updateMenuWidth;
- (void)setLocaleProvider:(SettingsParentalLocaleProvider *)arg0;
- (SettingsParentalLocaleProvider *)localeProvider;
- (SettingsParentalLocaleController *)init;
- (void).cxx_destruct;

@end
