/* Runtime dump - ATVMainTemplateView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVNavigationBar, BRControl, BRImageControl;
@interface ATVMainTemplateView : BRControl
{
    ATVNavigationBar * _menuBar;
    BRImageControl * _backgroundImage;
    BRControl * _bannerView;
}

@property (retain, nonatomic) ATVNavigationBar * menuBar;
@property (retain, nonatomic) BRImageControl * backgroundImage;
@property (retain, nonatomic) BRControl * bannerView;

- (void)layoutSubcontrols;
- (void)setMenuBar:(ATVNavigationBar *)arg0;
- (BRControl *)bannerView;
- (ATVMainTemplateView *)init;
- (BRImageControl *)backgroundImage;
- (void)setBackgroundImage:(BRImageControl *)arg0;
- (void).cxx_destruct;
- (void)setBannerView:(BRControl *)arg0;
- (ATVNavigationBar *)menuBar;

@end
