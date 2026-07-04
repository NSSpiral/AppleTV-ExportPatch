/* Runtime dump - ATVRadioHeaderWithTabControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BREvent, BRHeaderControl, BRTabControl;
@interface ATVRadioHeaderWithTabControl : BRControl
{
    BRHeaderControl * _headerControl;
    BRTabControl * _tabControl;
    struct ? _spacing;
}

@property (readonly, retain, nonatomic) BRHeaderControl * headerControl;
@property (readonly, retain, nonatomic) BRTabControl * tabControl;
@property (nonatomic) struct ? spacing;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (BRHeaderControl *)headerControl;
- (BRTabControl *)tabControl;
- (ATVRadioHeaderWithTabControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;
- (void).cxx_destruct;
- (void)setSpacing:(struct ?)arg0;
- (struct ?)spacing;

@end
