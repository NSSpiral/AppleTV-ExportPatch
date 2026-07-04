/* Runtime dump - RUIYTHeaderWithTabControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPanelControl.h>

@class BREvent, BRHeaderControl, BRTabControl;
@interface RUIYTHeaderWithTabControl : BRPanelControl
{
    BRHeaderControl * _headerControl;
    BRTabControl * _tabControl;
}

@property (readonly) BRHeaderControl * headerControl;
@property (readonly) BRTabControl * tabControl;

- (char)brEventAction:(BREvent *)arg0;
- (BRHeaderControl *)headerControl;
- (BRTabControl *)tabControl;
- (RUIYTHeaderWithTabControl *)init;
- (void).cxx_destruct;

@end
