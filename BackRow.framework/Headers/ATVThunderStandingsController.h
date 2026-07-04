/* Runtime dump - ATVThunderStandingsController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedController.h>

@class ATVThunderStandingsView;
@interface ATVThunderStandingsController : ATVFeedController
{
    ATVThunderStandingsView * _standingsView;
    NSDictionary * _data;
}

- (long)numberOfColumnsInTableView:(NSObject *)arg0;
- (float)_widthOfColumn:(long)arg0 forTableView:(NSObject *)arg1;
- (float)tableView:(UITableView *)arg0 heightForRow:(long)arg1;
- (float)tableView:(UITableView *)arg0 widthForColumn:(long)arg1;
- (long)numberOfRowsInTableView:(NSObject *)arg0;
- (long)numberOfHeaderColumnsInTableView:(NSObject *)arg0;
- (NSObject *)tableView:(UITableView *)arg0 itemForRow:(long)arg1 inColumn:(long)arg2;
- (NSObject *)tableView:(UITableView *)arg0 headerForColumn:(long)arg1;
- (float)tableView:(UITableView *)arg0 widthForHeaderColumn:(long)arg1;
- (float)headerHeightForTableView:(NSObject *)arg0;
- (float)_headerWidthOfColumn:(long)arg0 forTableView:(NSObject *)arg1;
- (id)accessibilityNonFocusableElements;
- (void)dealloc;
- (ATVThunderStandingsController *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;

@end
