/* Runtime dump - BRAdornedMediaShelfView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRContainerViewCell;

@class ATVImageHeaderViewButton, BRImageControl, BRMediaShelfView, BRTextControl;
@interface BRAdornedMediaShelfView : BRControl <BRContainerViewCell>
{
    BRImageControl * _backgroundImage;
    BRTextControl * _slug;
    BRTextControl * _title;
    BRImageControl * _titleImage;
    BRTextControl * _subtitle;
    BRImageControl * _logoImage;
    ATVImageHeaderViewButton * _actionButton;
    BRMediaShelfView * _mediaShelf;
}

@property (retain, nonatomic) BRImageControl * backgroundImage;
@property (copy, nonatomic) BRTextControl * slug;
@property (copy, nonatomic) BRTextControl * title;
@property (retain, nonatomic) BRImageControl * titleImage;
@property (copy, nonatomic) BRTextControl * subtitle;
@property (retain, nonatomic) BRImageControl * logoImage;
@property (retain, nonatomic) ATVImageHeaderViewButton * actionButton;
@property (retain, nonatomic) BRMediaShelfView * mediaShelf;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)layoutSubcontrols;
- (void)setIgnoreLoadAndDisplayOnDemand;
- (NSArray *)accessibilityControls;
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(char)arg0;
- (void)cancelContainerViewLoad;
- (void)setReadyToDisplay;
- (BRMediaShelfView *)mediaShelf;
- (BRTextControl *)slug;
- (BRImageControl *)titleImage;
- (void)setSlug:(BRTextControl *)arg0;
- (void)setTitleImage:(BRImageControl *)arg0;
- (void)setMediaShelf:(BRMediaShelfView *)arg0;
- (void)loadWithCompletionBlock:(id /* block */)arg0;
- (BRAdornedMediaShelfView *)init;
- (void)setTitle:(BRTextControl *)arg0;
- (BRTextControl *)title;
- (NSString *)accessibilityLabel;
- (BRImageControl *)backgroundImage;
- (BRTextControl *)subtitle;
- (void)setBackgroundImage:(BRImageControl *)arg0;
- (void)setSubtitle:(BRTextControl *)arg0;
- (void).cxx_destruct;
- (void)setActionButton:(ATVImageHeaderViewButton *)arg0;
- (ATVImageHeaderViewButton *)actionButton;
- (BRImageControl *)logoImage;
- (void)setLogoImage:(BRImageControl *)arg0;

@end
