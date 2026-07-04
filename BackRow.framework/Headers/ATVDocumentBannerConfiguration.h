/* Runtime dump - ATVDocumentBannerConfiguration
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVTextConfiguration;
@interface ATVDocumentBannerConfiguration : NSObject
{
    char _allowsBanner;
    char _allowsButtons;
    char _showsDivider;
    struct ? _bannerBottomInset;
    struct ? _overlayMarginWidth;
    ATVTextConfiguration * _titleConfiguration;
    ATVTextConfiguration * _subscriptConfiguration;
    ATVTextConfiguration * _subtitleConfiguration;
}

@property (nonatomic) char allowsBanner;
@property (nonatomic) char allowsButtons;
@property (nonatomic) char showsDivider;
@property (nonatomic) struct ? bannerBottomInset;
@property (nonatomic) struct ? overlayMarginWidth;
@property (readonly, retain, nonatomic) ATVTextConfiguration * titleConfiguration;
@property (readonly, retain, nonatomic) ATVTextConfiguration * subscriptConfiguration;
@property (readonly, retain, nonatomic) ATVTextConfiguration * subtitleConfiguration;

- (void)setShowsDivider:(char)arg0;
- (ATVTextConfiguration *)titleConfiguration;
- (ATVTextConfiguration *)subtitleConfiguration;
- (char)showsDivider;
- (char)allowsBanner;
- (struct ?)bannerBottomInset;
- (struct ?)overlayMarginWidth;
- (void)setAllowsBanner:(char)arg0;
- (char)allowsButtons;
- (void)setAllowsButtons:(char)arg0;
- (void)setBannerBottomInset:(struct ?)arg0;
- (void)setOverlayMarginWidth:(struct ?)arg0;
- (ATVTextConfiguration *)subscriptConfiguration;
- (ATVDocumentBannerConfiguration *)init;
- (void).cxx_destruct;

@end
