/* Runtime dump - ATVPagedGridViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVSubviewController;

@class ATVFeedElement, BRControl, BRGridControl, BRPagedView;
@interface ATVPagedGridViewController : NSObject <ATVSubviewController>
{
    BRPagedView * _pagedView;
    NSArray * _items;
    unsigned int _columnCount;
    unsigned int _rowCount;
    struct ? _rowWidth;
    float _marginProductWidth;
    struct ? _gapHeight;
    struct ? _itemHeight;
    struct ? _itemWidth;
    unsigned int _selectedRow;
}

@property (retain, nonatomic) BRPagedView * pagedView;
@property (retain, nonatomic) NSArray * items;
@property (nonatomic) unsigned int columnCount;
@property (nonatomic) unsigned int rowCount;
@property (nonatomic) struct ? rowWidth;
@property (nonatomic) float marginProductWidth;
@property (nonatomic) struct ? gapHeight;
@property (nonatomic) struct ? itemHeight;
@property (nonatomic) struct ? itemWidth;
@property (nonatomic) unsigned int selectedRow;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setItemHeight:(struct ?)arg0;
- (long)numberOfItemsInGrid:(BRGridControl *)arg0;
- (long)numberOfColumnsInGrid:(BRGridControl *)arg0;
- (BRControl *)grid:(BRGridControl *)arg0 itemAtIndex:(long)arg1;
- (void)updateWithViewElement:(ATVFeedElement *)arg0;
- (long)pageCountForPagedView:(NSObject *)arg0;
- (NSObject *)pagedView:(BRPagedView *)arg0 itemForPage:(long)arg1;
- (void)pagedView:(BRPagedView *)arg0 willSwitchToPageAtIndex:(long)arg1 fromPageAtIndex:(long)arg2;
- (void)pagedView:(BRPagedView *)arg0 didSwitchToPageAtIndex:(long)arg1 fromPageAtIndex:(long)arg2;
- (float)marginProductWidth;
- (void)setMarginProductWidth:(float)arg0;
- (void)setSelectedRow:(unsigned int)arg0;
- (void)setGapHeight:(struct ?)arg0;
- (BRPagedView *)pagedView;
- (struct ?)gapHeight;
- (void)setPagedView:(BRPagedView *)arg0;
- (ATVPagedGridViewController *)init;
- (BRControl *)view;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (void)setItemWidth:(struct ?)arg0;
- (struct ?)itemWidth;
- (unsigned int)columnCount;
- (void)setColumnCount:(unsigned int)arg0;
- (void).cxx_destruct;
- (struct ?)rowWidth;
- (void)setRowWidth:(struct ?)arg0;
- (void)setRowCount:(unsigned int)arg0;
- (struct ?)itemHeight;
- (unsigned int)rowCount;
- (unsigned int)selectedRow;

@end
