/* Runtime dump - ATVItemDetailView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRCoverArtPreviewControl, BRCursorControl, BRHorizontalDividerControl, BRMediaShelfView, BRMetadataLinesLayer, BRMetadataTitleControl, BRTableView, BRTextControl;
@interface ATVItemDetailView : BRControl
{
    BRCoverArtPreviewControl * _mainImageControl;
    BRHorizontalDividerControl * _summaryTopDivider;
    BRHorizontalDividerControl * _summaryBottomDivider;
    BRTextControl * _mainImageTextControl;
    BRTextControl * _summaryControl;
    BRTextControl * _footnoteControl;
    BRCursorControl * _cursor;
    char _verticallyCentered;
    int _mainImageStyle;
    int _displayMode;
    BRTableView * _table;
    BRMetadataLinesLayer * _lines;
    BRMediaShelfView * _centerShelf;
    BRControl * _divider;
    BRMediaShelfView * _bottomShelf;
    BRMetadataTitleControl * _titleControl;
}

@property (nonatomic) int mainImageStyle;
@property (retain, nonatomic) <BRImageProxy> * mainImageProxy;
@property (retain, nonatomic) NSString * mainImageText;
@property (readonly, nonatomic) BRMetadataTitleControl * titleControl;
@property (retain, nonatomic) NSString * summary;
@property (readonly, nonatomic) BRTableView * table;
@property (retain, nonatomic) NSString * footnote;
@property (readonly, nonatomic) BRMetadataLinesLayer * lines;
@property (retain, nonatomic) BRMediaShelfView * centerShelf;
@property (retain, nonatomic) BRMediaShelfView * bottomShelf;
@property (retain, nonatomic) BRControl * divider;
@property (nonatomic) int displayMode;
@property (readonly, nonatomic) float metadataWidth;
@property (nonatomic) char verticallyCentered;

- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (BRMetadataTitleControl *)titleControl;
- (void)setDivider:(BRControl *)arg0;
- (BRMediaShelfView *)bottomShelf;
- (void)setBottomShelf:(BRMediaShelfView *)arg0;
- (BRMediaShelfView *)centerShelf;
- (void)setCenterShelf:(BRMediaShelfView *)arg0;
- (char)verticallyCentered;
- (BRControl *)divider;
- (void)setMainImageText:(NSString *)arg0;
- (void)setMainImageProxy:(<BRImageProxy> *)arg0;
- (void)setMainImageStyle:(int)arg0;
- (void)setVerticallyCentered:(char)arg0;
- (float)metadataWidth;
- (void)_coverArtUpdated:(id)arg0;
- (void)layoutSubcontrolsRelativeToBounds;
- (<BRImageProxy> *)mainImageProxy;
- (NSString *)mainImageText;
- (int)mainImageStyle;
- (void)dealloc;
- (ATVItemDetailView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (BRTableView *)table;
- (int)displayMode;
- (void)setDisplayMode:(int)arg0;
- (NSString *)footnote;
- (void)setFootnote:(NSString *)arg0;
- (BRMetadataLinesLayer *)lines;
- (NSString *)summary;
- (void)setSummary:(NSString *)arg0;

@end
