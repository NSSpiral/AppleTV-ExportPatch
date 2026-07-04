/* Runtime dump - ATVStandingsController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedController.h>

@class ATVFeedElement, BRPageStripView;
@interface ATVStandingsController : ATVFeedController
{
    BRPageStripView * _pageStripView;
    NSArray * _items;
}

- (ATVStandingsController *)initWithFeedElement:(ATVFeedElement *)arg0;
- (long)numberOfColumnsInTableView:(NSObject *)arg0;
- (float)_widthOfColumn:(long)arg0 forTableView:(NSObject *)arg1;
- (float)tableView:(UITableView *)arg0 heightForRow:(long)arg1;
- (float)tableView:(UITableView *)arg0 widthForColumn:(long)arg1;
- (long)numberOfPagesInPageStripView:(NSObject *)arg0;
- (NSObject *)pageStripView:(BRPageStripView *)arg0 pageAtIndex:(long)arg1;
- (float)xPagePositionOffsetForPageStripView:(NSObject *)arg0;
- (long)numberOfRowsInTableView:(NSObject *)arg0;
- (long)numberOfHeaderColumnsInTableView:(NSObject *)arg0;
- (NSObject *)tableView:(UITableView *)arg0 itemForRow:(long)arg1 inColumn:(long)arg2;
- (NSObject *)tableView:(UITableView *)arg0 headerForColumn:(long)arg1;
- (float)tableView:(UITableView *)arg0 widthForHeaderColumn:(long)arg1;
- (float)headerHeightForTableView:(NSObject *)arg0;
- (void)dealloc;
- (ATVStandingsController *)initWithDictionary:(NSDictionary *)arg0;

@end
