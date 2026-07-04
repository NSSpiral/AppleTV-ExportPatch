/* Runtime dump - ATVRadioHistoryDataSource
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVRadioHistoryController;
@interface ATVRadioHistoryDataSource : NSObject
{
    char _dataRequested;
    char _dataRequiresUpdate;
    char _active;
    ATVDataClient * _dataClient;
    ATVRadioHistoryController * _historyController;
    ATVDataQuery * _itemsQuery;
    NSArray * _historySectionData;
}

@property (weak, nonatomic) ATVDataClient * dataClient;
@property (weak, nonatomic) ATVRadioHistoryController * historyController;
@property (retain, nonatomic) ATVDataQuery * itemsQuery;
@property (retain, nonatomic) NSArray * historySectionData;
@property (nonatomic) char active;

- (void)_executeQuery;
- (void)setItemsQuery:(ATVDataQuery *)arg0;
- (ATVRadioHistoryDataSource *)initWithDataClient:(ATVDataClient *)arg0 historyController:(ATVRadioHistoryController *)arg1;
- (void)setHistorySectionData:(NSArray *)arg0;
- (NSArray *)historySectionData;
- (void)setHistoryController:(ATVRadioHistoryController *)arg0;
- (ATVRadioHistoryController *)historyController;
- (void)_showNoItemsView;
- (ATVDataQuery *)itemsQuery;
- (void)dealloc;
- (char)active;
- (void)setActive:(char)arg0;
- (void).cxx_destruct;
- (ATVDataClient *)dataClient;
- (void)setDataClient:(ATVDataClient *)arg0;
- (void)_dataClientDataUpdated:(ATVDataClient *)arg0;

@end
