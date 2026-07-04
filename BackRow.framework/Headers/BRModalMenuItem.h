/* Runtime dump - BRModalMenuItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BREvent, BRMenuItem;
@interface BRModalMenuItem : BRControl
{
    BRMenuItem * _menuItem;
    BRControl * _modeSwitch;
    id _onModeSwitch;
    int _mode;
    struct ? _modeSwitchPreferredSize;
}

@property (retain, nonatomic) BRMenuItem * menuItem;
@property (retain, nonatomic) BRControl * modeSwitch;
@property (nonatomic) struct ? modeSwitchPreferredSize;
@property (copy, nonatomic) id onModeSwitch;
@property (nonatomic) int mode;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (struct CGRect)focusCursorFrame;
- (void)setMenuItem:(BRMenuItem *)arg0;
- (void)setModeSwitch:(BRControl *)arg0;
- (void)setOnModeSwitch:(id)arg0;
- (struct ?)modeSwitchPreferredSize;
- (BRControl *)modeSwitch;
- (id)onModeSwitch;
- (void)setModeSwitchPreferredSize:(struct ?)arg0;
- (BRModalMenuItem *)init;
- (void)setMode:(int)arg0;
- (int)mode;
- (void).cxx_destruct;
- (BRMenuItem *)menuItem;

@end
