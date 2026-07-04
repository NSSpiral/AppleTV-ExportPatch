/* Runtime dump - ATVChicagoGamePreviewControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRCyclerDataSource;

@class ATVFeedTextTableDataSet, ATVFeedUniformTextTableViewController, BRControl, BRCyclerControl, BRHorizontalDividerControl, BRMerchant, BRTableView;
@interface ATVChicagoGamePreviewControl : BRControl <BRCyclerDataSource>
{
    BRHorizontalDividerControl * _topDivider;
    BRHorizontalDividerControl * _bottomDivider;
    NSMutableArray * _bannerControls;
    BRTableView * _summaryTable;
    ATVFeedUniformTextTableViewController * _tableViewController;
    BRCyclerControl * _cycler;
    struct CGRect _scoreboardBackgroundImageFrame;
    BRMerchant * _merchant;
    NSArray * _bannerItems;
    NSString * _text;
    NSString * _rightJustifiedText;
    NSString * _topTableLabel;
    NSString * _bottomTableLabel;
    ATVImage * _scoreboardBackgroundImage;
}

@property (retain) BRMerchant * merchant;
@property (copy, nonatomic) NSArray * bannerItems;
@property (retain) ATVImage * scoreboardBackgroundImage;
@property (copy, nonatomic) NSString * text;
@property (copy, nonatomic) NSString * rightJustifiedText;
@property (copy, nonatomic) NSString * topTableLabel;
@property (copy, nonatomic) NSString * bottomTableLabel;
@property (retain) ATVFeedTextTableDataSet * dataSet;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)layoutSubcontrols;
- (BRMerchant *)merchant;
- (void)controlWasActivated;
- (ATVFeedTextTableDataSet *)dataSet;
- (void)setDataSet:(ATVFeedTextTableDataSet *)arg0;
- (NSString *)rightJustifiedText;
- (NSString *)topTableLabel;
- (NSString *)bottomTableLabel;
- (long)numberOfItemsInCycler:(BRCyclerControl *)arg0;
- (BRControl *)cycler:(BRCyclerControl *)arg0 itemAtIndex:(int)arg1;
- (void)setRightJustifiedText:(NSString *)arg0;
- (void)setTopTableLabel:(NSString *)arg0;
- (void)setBottomTableLabel:(NSString *)arg0;
- (void)setBannerItems:(NSArray *)arg0;
- (void)setMerchant:(BRMerchant *)arg0;
- (NSArray *)bannerItems;
- (ATVImage *)scoreboardBackgroundImage;
- (void)setScoreboardBackgroundImage:(ATVImage *)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (ATVChicagoGamePreviewControl *)init;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSString *)accessibilityLabel;

@end
