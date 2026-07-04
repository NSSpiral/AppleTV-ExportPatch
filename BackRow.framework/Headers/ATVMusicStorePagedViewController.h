/* Runtime dump - ATVMusicStorePagedViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl, BRGridControl, BRPagedView;
@interface ATVMusicStorePagedViewController : NSObject
{
    NSDictionary * _storeDict;
    NSMutableArray * _pages;
    NSArray * _items;
}

+ (NSObject *)pagedViewControllerForStoreItem:(NSObject *)arg0;

- (long)numberOfItemsInGrid:(BRGridControl *)arg0;
- (BRControl *)grid:(BRGridControl *)arg0 itemAtIndex:(long)arg1;
- (float)grid:(BRGridControl *)arg0 heightForItemAtIndex:(long)arg1;
- (long)pageCountForPagedView:(NSObject *)arg0;
- (NSObject *)pagedView:(BRPagedView *)arg0 itemForPage:(long)arg1;
- (void)pagedView:(BRPagedView *)arg0 willSwitchToPageAtIndex:(long)arg1 fromPageAtIndex:(long)arg2;
- (void)pagedView:(BRPagedView *)arg0 didSwitchToPageAtIndex:(long)arg1 fromPageAtIndex:(long)arg2;
- (ATVMusicStorePagedViewController *)initWithStoreItem:(NSObject *)arg0;
- (void)toggleCursorMode:(id)arg0;
- (long)_itemsPerPage;
- (char)delegateShouldBeRetainedByPagedView:(NSObject *)arg0;
- (char)datasourceShouldBeRetainedByPagedView:(NSObject *)arg0;
- (void)dealloc;
- (ATVMusicStorePagedViewController *)init;
- (BRControl *)view;
- (long)_pageCount;

@end
