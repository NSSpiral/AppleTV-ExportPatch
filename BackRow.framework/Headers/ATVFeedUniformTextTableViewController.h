/* Runtime dump - ATVFeedUniformTextTableViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVFeedTextTableDataSet;
@interface ATVFeedUniformTextTableViewController : NSObject
{
    int _cachedColumnCount;
    ATVFeedTextTableDataSet * _dataSet;
    NSDictionary * _headerTextAttributes;
    NSDictionary * _cellTextAttributes;
    float _cellHeight;
    float _cellWidth;
    float _headerHeight;
    float _headerWidth;
}

@property float headerHeight;
@property float headerWidth;
@property float cellHeight;
@property float cellWidth;
@property (retain) NSDictionary * headerTextAttributes;
@property (retain) NSDictionary * cellTextAttributes;
@property (retain, nonatomic) ATVFeedTextTableDataSet * dataSet;

- (void)setHeaderWidth:(float)arg0;
- (void)setCellWidth:(float)arg0;
- (void)setCellHeight:(float)arg0;
- (void)setCellTextAttributes:(NSDictionary *)arg0;
- (void)setHeaderTextAttributes:(NSDictionary *)arg0;
- (ATVFeedTextTableDataSet *)dataSet;
- (void)setDataSet:(ATVFeedTextTableDataSet *)arg0;
- (long)numberOfColumnsInTableView:(NSObject *)arg0;
- (float)tableView:(UITableView *)arg0 heightForRow:(long)arg1;
- (float)tableView:(UITableView *)arg0 widthForColumn:(long)arg1;
- (long)numberOfRowsInTableView:(NSObject *)arg0;
- (long)numberOfHeaderColumnsInTableView:(NSObject *)arg0;
- (NSObject *)tableView:(UITableView *)arg0 itemForRow:(long)arg1 inColumn:(long)arg2;
- (NSObject *)tableView:(UITableView *)arg0 headerForColumn:(long)arg1;
- (float)tableView:(UITableView *)arg0 widthForHeaderColumn:(long)arg1;
- (float)headerHeightForTableView:(NSObject *)arg0;
- (NSDictionary *)headerTextAttributes;
- (NSDictionary *)cellTextAttributes;
- (float)headerWidth;
- (void)dealloc;
- (float)headerHeight;
- (void)setHeaderHeight:(float)arg0;
- (float)cellHeight;
- (float)cellWidth;

@end
