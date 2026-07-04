/* Runtime dump - ATVActionButtonMenuItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BREvent, BRMenuItem;
@interface ATVActionButtonMenuItem : BRControl
{
    BRMenuItem * _menuItem;
    NSArray * _actionButtons;
    NSArray * _preferredSizes;
    BRControl * _activeControl;
}

@property (retain, nonatomic) BRMenuItem * menuItem;
@property (retain, nonatomic) BRControl * actionButton;
@property (copy, nonatomic) NSArray * actionButtons;
@property (nonatomic) struct ? actionButtonPreferredSize;
@property (nonatomic) BRControl * activeControl;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (struct CGRect)focusCursorFrame;
- (BRControl *)activeControl;
- (void)setMenuItem:(BRMenuItem *)arg0;
- (void)setActionButtonPreferredSize:(struct ?)arg0;
- (void)setActiveControl:(BRControl *)arg0;
- (void)setPreferredSize:(struct ?)arg0 forActionButtonAtIndex:(NSObject *)arg1;
- (void)setActionButtons:(NSArray *)arg0;
- (NSArray *)actionButtons;
- (struct ?)preferredSizeForActionButtonAtIndex:(NSObject *)arg0;
- (struct ?)actionButtonPreferredSize;
- (NSArray *)accessibilityRangeStringForChildren;
- (ATVActionButtonMenuItem *)init;
- (void).cxx_destruct;
- (void)setActionButton:(BRControl *)arg0;
- (BRControl *)actionButton;
- (BRMenuItem *)menuItem;

@end
