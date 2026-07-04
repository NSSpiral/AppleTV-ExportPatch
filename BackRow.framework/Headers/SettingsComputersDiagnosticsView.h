/* Runtime dump - SettingsComputersDiagnosticsView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRMenuView, BRWaitSpinnerControl;
@interface SettingsComputersDiagnosticsView : BRControl
{
    BRMenuView * _menuView;
    BRWaitSpinnerControl * _progressSpinner;
}

- (void)layoutSubcontrols;
- (BRMenuView *)menuView;
- (BRWaitSpinnerControl *)progressSpinner;
- (SettingsComputersDiagnosticsView *)init;
- (void).cxx_destruct;

@end
