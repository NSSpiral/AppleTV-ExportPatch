/* Runtime dump - BRProviderDataSourceAdapter
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl, BRGridControl, BRListControl, BRMediaShelfView, BRMenuItem;
@interface BRProviderDataSourceAdapter : NSObject
{
    float _itemHeight;
    char _showsDividers;
    char _variableItemHeight;
    NSArray * _providers;
    long _gridColumnCount;
    NSArray * _shelfSectionTitles;
}

@property (retain) NSArray * providers;
@property char showsDividers;
@property long gridColumnCount;
@property (retain) NSArray * shelfSectionTitles;
@property char variableItemHeight;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (long)numberOfItemsInGrid:(BRGridControl *)arg0;
- (long)numberOfColumnsInGrid:(BRGridControl *)arg0;
- (BRControl *)grid:(BRGridControl *)arg0 itemAtIndex:(long)arg1;
- (NSString *)grid:(BRGridControl *)arg0 itemIDAtIndex:(long)arg1;
- (long)grid:(BRGridControl *)arg0 indexForItemID:(NSObject *)arg1;
- (BRControl *)mediaShelf:(BRMediaShelfView *)arg0 itemAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInMediaShelf:(BRMediaShelfView *)arg0;
- (long)mediaShelf:(BRMediaShelfView *)arg0 numberOfColumnsInSection:(long)arg1;
- (BRControl *)mediaShelf:(BRMediaShelfView *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)mediaShelf:(BRMediaShelfView *)arg0 titleForSectionAtIndex:(long)arg1;
- (NSString *)mediaShelf:(BRMediaShelfView *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)mediaShelf:(BRMediaShelfView *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)setProviders:(NSArray *)arg0;
- (void)setGridColumnCount:(long)arg0;
- (NSArray *)providers;
- (float)grid:(BRGridControl *)arg0 heightForItemAtIndex:(long)arg1;
- (long)gridColumnCount;
- (void)setShowsDividers:(char)arg0;
- (NSObject *)_dataAtIndex:(long)arg0;
- (char)showsDividers;
- (NSArray *)shelfSectionTitles;
- (void)setShelfSectionTitles:(NSArray *)arg0;
- (char)variableItemHeight;
- (void)setVariableItemHeight:(char)arg0;
- (void)dealloc;

@end
