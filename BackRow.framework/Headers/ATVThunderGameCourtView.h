/* Runtime dump - ATVThunderGameCourtView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRAsyncImageControl, BRControl, BRImageControl;
@interface ATVThunderGameCourtView : BRControl
{
    NSDictionary * _data;
    BRAsyncImageControl * _court;
    BRControl * _courtContainer;
    BRImageControl * _courtGlass;
    NSMutableArray * _homePlayerCards;
    NSMutableArray * _awayPlayerCards;
}

- (void)layoutSubcontrols;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (ATVThunderGameCourtView *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)accessibilityLabel;

@end
