/* Runtime dump - RUIYTCenteredMenuView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuView.h>

@class BRControl, BRHeaderControl, BRImageControl, BRTextControl;
@interface RUIYTCenteredMenuView : BRMenuView
{
    BRHeaderControl * _headerControl;
    BRTextControl * _descriptionControl;
    BRImageControl * _backgroundImageControl;
}

- (void)layoutSubcontrols;
- (void)setListHeader:(BRControl *)arg0;
- (void)setMenuDescription:(BRTextControl *)arg0;
- (RUIYTCenteredMenuView *)init;
- (UIImage *)backgroundImage;
- (void)setBackgroundImage:(UIImage *)arg0;
- (void).cxx_destruct;

@end
