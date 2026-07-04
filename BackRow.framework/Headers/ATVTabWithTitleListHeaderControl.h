/* Runtime dump - ATVTabWithTitleListHeaderControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BREvent, BRTabControl, BRTextControl;
@interface ATVTabWithTitleListHeaderControl : BRControl
{
    BRTabControl * _tab;
    BRTextControl * _title;
    BRTextControl * _subtitle;
}

@property (readonly) BRTabControl * tab;
@property (readonly) BRTextControl * title;
@property (readonly) BRTextControl * subtitle;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (BRTabControl *)tab;
- (void)dealloc;
- (ATVTabWithTitleListHeaderControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (BRTextControl *)title;
- (NSString *)accessibilityLabel;
- (BRTextControl *)subtitle;

@end
