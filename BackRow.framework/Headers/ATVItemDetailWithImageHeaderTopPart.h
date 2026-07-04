/* Runtime dump - ATVItemDetailWithImageHeaderTopPart
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVImageHeaderView, BRHorizontalDividerControl, BRMediaShelfView, BRMetadataLinesLayer, BRMetadataTitleControl, BRPosterControl, BRTableView, BRTextControl;
@interface ATVItemDetailWithImageHeaderTopPart : BRControl
{
    ATVImageHeaderView * _imageHeaderView;
    BRMetadataTitleControl * _titleView;
    BRPosterControl * _posterView;
    BRTableView * _tableView;
    BRMediaShelfView * _shelfView;
    BRTextControl * _summaryView;
    BRTextControl * _footnoteView;
    BRTextControl * _copyrightView;
    NSArray * _userRatingViews;
    BRMetadataLinesLayer * _lines;
    int _layoutStyle;
    int _displayMode;
    int _mainImageStyle;
    int _posterAlignment;
    BRHorizontalDividerControl * _titleDivder;
    BRHorizontalDividerControl * _metadataDivder;
}

@property (retain, nonatomic) ATVImageHeaderView * imageHeaderView;
@property (retain, nonatomic) BRMetadataTitleControl * titleView;
@property (retain, nonatomic) BRPosterControl * posterView;
@property (retain, nonatomic) BRTableView * tableView;
@property (retain, nonatomic) BRMediaShelfView * shelfView;
@property (retain, nonatomic) BRTextControl * summaryView;
@property (retain, nonatomic) BRTextControl * footnoteView;
@property (retain, nonatomic) BRTextControl * copyrightView;
@property (retain, nonatomic) NSArray * userRatingViews;
@property (retain, nonatomic) BRMetadataLinesLayer * lines;
@property (readonly, nonatomic) float metadataWidth;
@property (nonatomic) int layoutStyle;
@property (nonatomic) int displayMode;
@property (nonatomic) int mainImageStyle;
@property (nonatomic) int posterAlignment;
@property (retain, nonatomic) BRHorizontalDividerControl * titleDivder;
@property (retain, nonatomic) BRHorizontalDividerControl * metadataDivder;

- (ATVImageHeaderView *)imageHeaderView;
- (void)setImageHeaderView:(ATVImageHeaderView *)arg0;
- (void)layoutSubcontrols;
- (BRTextControl *)summaryView;
- (void)setSummaryView:(BRTextControl *)arg0;
- (void)setMainImageStyle:(int)arg0;
- (float)metadataWidth;
- (int)layoutStyle;
- (void)setLayoutStyle:(int)arg0;
- (int)posterAlignment;
- (void)setPosterAlignment:(int)arg0;
- (BRTextControl *)footnoteView;
- (void)setUserRatingViews:(NSArray *)arg0;
- (BRPosterControl *)posterView;
- (BRTextControl *)copyrightView;
- (void)setShelfView:(BRMediaShelfView *)arg0;
- (BRMediaShelfView *)shelfView;
- (int)mainImageStyle;
- (NSArray *)userRatingViews;
- (BRHorizontalDividerControl *)titleDivder;
- (BRHorizontalDividerControl *)metadataDivder;
- (void)setPosterView:(BRPosterControl *)arg0;
- (void)setFootnoteView:(BRTextControl *)arg0;
- (void)setCopyrightView:(BRTextControl *)arg0;
- (void)setTitleDivder:(BRHorizontalDividerControl *)arg0;
- (void)setMetadataDivder:(BRHorizontalDividerControl *)arg0;
- (ATVItemDetailWithImageHeaderTopPart *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (BRMetadataTitleControl *)titleView;
- (void)setTitleView:(BRMetadataTitleControl *)arg0;
- (void)setTableView:(BRTableView *)arg0;
- (BRTableView *)tableView;
- (int)displayMode;
- (void).cxx_destruct;
- (void)setDisplayMode:(int)arg0;
- (void)setLines:(BRMetadataLinesLayer *)arg0;
- (BRMetadataLinesLayer *)lines;

@end
