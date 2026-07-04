/* Runtime dump - ATVFlagstaffPreview
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRCyclerControl, BRHorizontalDividerControl, BRTableView;
@interface ATVFlagstaffPreview : BRControl
{
    BRHorizontalDividerControl * _topDivider;
    BRHorizontalDividerControl * _bottomDivider;
    BRCyclerControl * _cycler;
    NSString * _text;
    NSString * _rightJustifiedText;
    NSString * _topTableLabel;
    NSString * _bottomTableLabel;
    BRCyclerControl * _inningsCycler;
    BRTableView * _summaryTable;
}

@property (readonly, nonatomic) BRCyclerControl * cycler;
@property (copy, nonatomic) NSString * text;
@property (copy, nonatomic) NSString * rightJustifiedText;
@property (copy, nonatomic) NSString * topTableLabel;
@property (copy, nonatomic) NSString * bottomTableLabel;
@property (readonly, nonatomic) BRCyclerControl * inningsCycler;
@property (readonly, nonatomic) BRTableView * summaryTable;

- (void)layoutSubcontrols;
- (void)controlWasActivated;
- (NSString *)rightJustifiedText;
- (NSString *)topTableLabel;
- (NSString *)bottomTableLabel;
- (void)setRightJustifiedText:(NSString *)arg0;
- (void)setTopTableLabel:(NSString *)arg0;
- (void)setBottomTableLabel:(NSString *)arg0;
- (BRTableView *)summaryTable;
- (BRCyclerControl *)cycler;
- (BRCyclerControl *)inningsCycler;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (ATVFlagstaffPreview *)init;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSString *)accessibilityLabel;

@end
