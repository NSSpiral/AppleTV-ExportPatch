/* Runtime dump - ATVRadioWishListDataSource
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVRadioHistoryController;
@interface ATVRadioWishListDataSource : NSObject
{
    char _spinnerShown;
    char _active;
    ATVDataClient * _dataClient;
    ATVRadioHistoryController * _historyController;
    ATVDataQuery * _itemsQuery;
    NSArray * _wishListSectionData;
}

@property (weak, nonatomic) ATVDataClient * dataClient;
@property (weak, nonatomic) ATVRadioHistoryController * historyController;
@property (retain, nonatomic) ATVDataQuery * itemsQuery;
@property (retain, nonatomic) NSArray * wishListSectionData;
@property (nonatomic) char active;

- (void)_executeQuery;
- (void)setItemsQuery:(ATVDataQuery *)arg0;
- (ATVRadioWishListDataSource *)initWithDataClient:(ATVDataClient *)arg0 historyController:(ATVRadioHistoryController *)arg1;
- (NSArray *)wishListSectionData;
- (void)setWishListSectionData:(NSArray *)arg0;
- (void)setHistoryController:(ATVRadioHistoryController *)arg0;
- (ATVRadioHistoryController *)historyController;
- (void)_showNoItemsView;
- (ATVDataQuery *)itemsQuery;
- (void)dealloc;
- (void)_updateView;
- (char)active;
- (void)setActive:(char)arg0;
- (void).cxx_destruct;
- (ATVDataClient *)dataClient;
- (void)setDataClient:(ATVDataClient *)arg0;
- (void)_dataClientDataUpdated:(ATVDataClient *)arg0;

@end
