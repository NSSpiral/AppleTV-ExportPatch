/* Runtime dump - ATVBannerView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVMusicStoreOfferControl, BRControl, BRImageControl, BRTextControl;
@interface ATVBannerView : BRControl
{
    char _sizesToFill;
    int _imageTitleAlignment;
    BRImageControl * _imageView;
    BRTextControl * _titleView;
    BRTextControl * _subtitleView;
    BRControl * _buttonsPanel;
    BRTextControl * _footerView;
    BRImageControl * _ratingView;
    ATVMusicStoreOfferControl * _badgesView;
    BRTextControl * _summaryView;
    BRImageControl * _decoratorImage;
    struct ? _padding;
}

@property (nonatomic) int imageTitleAlignment;
@property (retain, nonatomic) BRImageControl * imageView;
@property (retain, nonatomic) BRTextControl * titleView;
@property (retain, nonatomic) BRTextControl * subtitleView;
@property (retain, nonatomic) BRControl * buttonsPanel;
@property (retain, nonatomic) BRTextControl * footerView;
@property (retain, nonatomic) BRImageControl * ratingView;
@property (retain, nonatomic) ATVMusicStoreOfferControl * badgesView;
@property (retain, nonatomic) BRTextControl * summaryView;
@property (retain, nonatomic) BRImageControl * decoratorImage;
@property (nonatomic) struct ? padding;
@property (nonatomic) char sizesToFill;

- (void)layoutSubcontrols;
- (struct CGRect)focusCursorFrame;
- (BRTextControl *)summaryView;
- (void)setSummaryView:(BRTextControl *)arg0;
- (void)setImageTitleAlignment:(int)arg0;
- (void)setSubtitleView:(BRTextControl *)arg0;
- (void)setButtonsPanel:(BRControl *)arg0;
- (BRImageControl *)decoratorImage;
- (void)setDecoratorImage:(BRImageControl *)arg0;
- (void)setRatingView:(BRImageControl *)arg0;
- (void)setBadgesView:(ATVMusicStoreOfferControl *)arg0;
- (void)setSizesToFill:(char)arg0;
- (char)sizesToFill;
- (BRTextControl *)subtitleView;
- (BRControl *)buttonsPanel;
- (int)imageTitleAlignment;
- (BRImageControl *)ratingView;
- (ATVMusicStoreOfferControl *)badgesView;
- (ATVBannerView *)initWithFrame:(struct CGRect)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;
- (BRTextControl *)titleView;
- (void)setTitleView:(BRTextControl *)arg0;
- (void)setPadding:(struct ?)arg0;
- (struct ?)padding;
- (BRImageControl *)imageView;
- (void).cxx_destruct;
- (BRTextControl *)footerView;
- (void)setFooterView:(BRTextControl *)arg0;
- (void)setImageView:(BRImageControl *)arg0;

@end
