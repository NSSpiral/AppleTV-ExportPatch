/* Runtime dump - ATVPhotoMetadataHeaderView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRPanelControl;
@interface ATVPhotoMetadataHeaderView : BRControl
{
    char _shouldDisplayContributorLine;
    char _displayDisabled;
    NSArray * _photoBadgeViews;
    BRControl * _actionsView;
    BRControl * _contributorLineView;
    struct ? _preferredHeight;
    struct ? _preferredContributorLineHeight;
    struct ? _contributorLineHorizontalMargin;
    BRPanelControl * _badgesPanel;
    struct ? _imageRenderSize;
}

@property (nonatomic) char shouldDisplayContributorLine;
@property (nonatomic) struct ? imageRenderSize;
@property (retain, nonatomic) NSArray * photoBadgeViews;
@property (retain, nonatomic) BRControl * actionsView;
@property (retain, nonatomic) BRControl * contributorLineView;
@property (nonatomic) struct ? preferredHeight;
@property (nonatomic) struct ? preferredContributorLineHeight;
@property (nonatomic) struct ? contributorLineHorizontalMargin;
@property (nonatomic) char displayDisabled;
@property (retain, nonatomic) BRPanelControl * badgesPanel;

- (void)layoutSubcontrols;
- (void)setShouldDisplayContributorLine:(char)arg0;
- (void)setPreferredHeight:(struct ?)arg0;
- (BRControl *)contributorLineView;
- (char)displayDisabled;
- (BRPanelControl *)badgesPanel;
- (BRControl *)actionsView;
- (char)shouldDisplayContributorLine;
- (void)setBadgesPanel:(BRPanelControl *)arg0;
- (NSArray *)photoBadgeViews;
- (struct ?)imageRenderSize;
- (struct ?)preferredContributorLineHeight;
- (struct ?)contributorLineHorizontalMargin;
- (void)setImageRenderSize:(struct ?)arg0;
- (void)setDisplayDisabled:(char)arg0;
- (void)setPhotoBadgeViews:(NSArray *)arg0;
- (void)setActionsView:(BRControl *)arg0;
- (void)setContributorLineView:(BRControl *)arg0;
- (void)setPreferredContributorLineHeight:(struct ?)arg0;
- (void)setContributorLineHorizontalMargin:(struct ?)arg0;
- (struct ?)preferredHeight;
- (ATVPhotoMetadataHeaderView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void).cxx_destruct;

@end
