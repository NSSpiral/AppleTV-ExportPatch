/* Runtime dump - SettingsNetworkSpeedTestView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRMenuView, BRProgressBarWidget, BRTextControl;
@interface SettingsNetworkSpeedTestView : BRControl
{
    BRMenuView * _menuView;
    BRProgressBarWidget * _progressView;
    BRTextControl * _progressRateView;
}

- (void)layoutSubcontrols;
- (BRMenuView *)menuView;
- (BRTextControl *)progressRateView;
- (SettingsNetworkSpeedTestView *)init;
- (NSString *)accessibilityLabel;
- (BRProgressBarWidget *)progressView;
- (char)isAccessibilityElement;
- (void).cxx_destruct;
- (NSString *)accessibilitySecondaryLabel;

@end
