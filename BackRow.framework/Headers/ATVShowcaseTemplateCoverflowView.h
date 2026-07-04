/* Runtime dump - ATVShowcaseTemplateCoverflowView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVShowcaseTemplateView.h>

@class BRControl, BRCursorControl, BRImageControl;
@interface ATVShowcaseTemplateCoverflowView : ATVShowcaseTemplateView
{
    BRImageControl * _backgroundImageView;
    BRControl * _headerView;
    BRControl * _descriptionView;
    BRCursorControl * _cursor;
}

@property (retain, nonatomic) BRImageControl * backgroundImageView;
@property (retain, nonatomic) BRControl * headerView;
@property (retain, nonatomic) BRControl * descriptionView;
@property (retain, nonatomic) BRCursorControl * cursor;

- (void)setAcceptsFocus:(char)arg0;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)setDescriptionView:(BRControl *)arg0;
- (BRControl *)descriptionView;
- (void)_updateCarouselView;
- (void)setBackgroundImageView:(BRImageControl *)arg0;
- (ATVShowcaseTemplateCoverflowView *)init;
- (BRImageControl *)backgroundImageView;
- (BRControl *)headerView;
- (void)setHeaderView:(BRControl *)arg0;
- (BRCursorControl *)cursor;
- (void)setCursor:(BRCursorControl *)arg0;
- (void).cxx_destruct;

@end
