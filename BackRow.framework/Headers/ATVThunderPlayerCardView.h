/* Runtime dump - ATVThunderPlayerCardView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRAsyncImageControl, BRTextControl;
@interface ATVThunderPlayerCardView : BRControl
{
    BRAsyncImageControl * _background;
    BRAsyncImageControl * _playerImage;
    BRTextControl * _playerNumber;
    BRTextControl * _playerName;
}

- (void)layoutSubcontrols;
- (void)dealloc;
- (ATVThunderPlayerCardView *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)accessibilityLabel;

@end
