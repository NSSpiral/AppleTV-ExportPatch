/* Runtime dump - ATVGridViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVSubviewController;

@class ATVFeedElement, BRControl, BRGridControl, BRGridView;
@interface ATVGridViewController : NSObject <ATVSubviewController>
{
    BRGridView * _gridView;
    NSArray * _items;
    int _columnCount;
}

@property (retain, nonatomic) BRGridView * gridView;
@property (retain, nonatomic) NSArray * items;
@property (nonatomic) int columnCount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (long)numberOfItemsInGrid:(BRGridControl *)arg0;
- (long)numberOfColumnsInGrid:(BRGridControl *)arg0;
- (BRControl *)grid:(BRGridControl *)arg0 itemAtIndex:(long)arg1;
- (NSString *)grid:(BRGridControl *)arg0 itemIDAtIndex:(long)arg1;
- (long)grid:(BRGridControl *)arg0 indexForItemID:(NSObject *)arg1;
- (void)updateWithViewElement:(ATVFeedElement *)arg0;
- (ATVGridViewController *)init;
- (BRControl *)view;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (int)columnCount;
- (void)setColumnCount:(int)arg0;
- (void).cxx_destruct;
- (BRGridView *)gridView;
- (void)setGridView:(BRGridView *)arg0;

@end
