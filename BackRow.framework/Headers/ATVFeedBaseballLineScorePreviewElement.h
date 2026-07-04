/* Runtime dump - ATVFeedBaseballLineScorePreviewElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedTableElement, BRMerchant;
@interface ATVFeedBaseballLineScorePreviewElement : ATVFeedElement
{
    NSArray * _banners;
    NSString * _leftLabel;
    NSString * _rightLabel;
    ATVFeedTableElement * _teamsTable;
    ATVFeedTableElement * _inningsTable;
    ATVFeedTableElement * _summaryTable;
}

@property (retain, nonatomic) NSArray * banners;
@property (retain, nonatomic) NSString * leftLabel;
@property (retain, nonatomic) NSString * rightLabel;
@property (retain, nonatomic) ATVFeedTableElement * teamsTable;
@property (retain, nonatomic) ATVFeedTableElement * inningsTable;
@property (retain, nonatomic) ATVFeedTableElement * summaryTable;

- (ATVFeedBaseballLineScorePreviewElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setRightLabel:(NSString *)arg0;
- (void)setLeftLabel:(NSString *)arg0;
- (void)setTeamsTable:(ATVFeedTableElement *)arg0;
- (void)setInningsTable:(ATVFeedTableElement *)arg0;
- (void)setSummaryTable:(ATVFeedTableElement *)arg0;
- (ATVFeedTableElement *)teamsTable;
- (ATVFeedTableElement *)inningsTable;
- (ATVFeedTableElement *)summaryTable;
- (NSString *)leftLabel;
- (NSString *)rightLabel;
- (void).cxx_destruct;
- (NSArray *)banners;
- (void)setBanners:(NSArray *)arg0;

@end
