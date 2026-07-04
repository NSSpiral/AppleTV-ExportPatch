/* Runtime dump - ATVRadioStationPreviewMetadataView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRHorizontalDividerControl, BRTextControl;
@interface ATVRadioStationPreviewMetadataView : BRControl
{
    BRTextControl * _titleControl;
    BRTextControl * _descriptionControl;
    BRHorizontalDividerControl * _topDivider;
    BRHorizontalDividerControl * _bottomDivider;
    NSDictionary * _descriptionAttributes;
}

@property (retain, nonatomic) BRTextControl * titleControl;
@property (retain, nonatomic) BRTextControl * descriptionControl;
@property (retain, nonatomic) BRHorizontalDividerControl * topDivider;
@property (retain, nonatomic) BRHorizontalDividerControl * bottomDivider;
@property (retain, nonatomic) NSDictionary * descriptionAttributes;

- (void)layoutSubcontrols;
- (NSDictionary *)_descriptionAttributes;
- (BRTextControl *)titleControl;
- (BRHorizontalDividerControl *)topDivider;
- (BRTextControl *)descriptionControl;
- (BRHorizontalDividerControl *)bottomDivider;
- (NSDictionary *)descriptionAttributes;
- (void)setDescriptionAttributes:(NSDictionary *)arg0;
- (void)setTitleControl:(BRTextControl *)arg0;
- (void)setDescriptionControl:(BRTextControl *)arg0;
- (void)setTopDivider:(BRHorizontalDividerControl *)arg0;
- (void)setBottomDivider:(BRHorizontalDividerControl *)arg0;
- (void)setDescription:(NSString *)arg0;
- (ATVRadioStationPreviewMetadataView *)init;
- (void)setTitle:(NSString *)arg0;
- (void).cxx_destruct;

@end
