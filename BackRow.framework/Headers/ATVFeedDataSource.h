/* Runtime dump - ATVFeedDataSource
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVFeedControlFactoryConfig, ATVFeedElement, ATVMerchant, BRControl, BRGridControl, BRMediaShelfView;
@interface ATVFeedDataSource : NSObject
{
    char _usesVariableItemHeight;
    char _cacheControls;
    NSString * _templateName;
    long _gridColumnCount;
    NSDictionary * _data;
    ATVFeedElement * _feedElement;
    ATVMerchant * _merchant;
    NSMutableDictionary * _cachedControlsByIndexPath;
    struct ? _itemHeight;
    ATVFeedControlFactoryConfig * _initialControlFactoryConfig;
}

@property long gridColumnCount;
@property (readonly, retain) NSDictionary * data;
@property (readonly, retain) ATVFeedElement * feedElement;
@property (retain) ATVMerchant * merchant;
@property struct ? itemHeight;
@property char usesVariableItemHeight;
@property char cacheControls;
@property (retain, nonatomic) ATVFeedControlFactoryConfig * initialControlFactoryConfig;
@property (retain) NSString * templateName;
@property (retain) NSMutableDictionary * cachedControlsByIndexPath;

- (ATVMerchant *)merchant;
- (void)setMerchant:(ATVMerchant *)arg0;
- (void)setItemHeight:(struct ?)arg0;
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
- (void)setGridColumnCount:(long)arg0;
- (ATVFeedDataSource *)initWithFeedElement:(ATVFeedElement *)arg0;
- (ATVFeedElement *)feedElement;
- (void)_onItemFocused:(id)arg0 indexPath:(NSIndexPath *)arg1;
- (float)grid:(BRGridControl *)arg0 heightForItemAtIndex:(long)arg1;
- (ATVFeedDataSource *)initWithData:(NSDictionary *)arg0 templateName:(NSString *)arg1;
- (ATVFeedDataSource *)initWithFeedElement:(ATVFeedElement *)arg0 templateName:(NSString *)arg1;
- (NSMutableDictionary *)cachedControlsByIndexPath;
- (void)setCachedControlsByIndexPath:(NSMutableDictionary *)arg0;
- (ATVFeedControlFactoryConfig *)initialControlFactoryConfig;
- (void)setInitialControlFactoryConfig:(ATVFeedControlFactoryConfig *)arg0;
- (char)cacheControls;
- (void)_cacheControl:(BRControl *)arg0 section:(long)arg1 index:(long)arg2;
- (void)updateShelf:(id)arg0 withFeedElement:(ATVFeedElement *)arg1;
- (void)updateGrid:(id)arg0 withFeedElement:(ATVFeedElement *)arg1;
- (void)grid:(BRGridControl *)arg0 didFocusItemAtIndex:(long)arg1;
- (void)mediaShelf:(BRMediaShelfView *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (long)gridColumnCount;
- (char)usesVariableItemHeight;
- (void)setUsesVariableItemHeight:(char)arg0;
- (void)setCacheControls:(char)arg0;
- (void)dealloc;
- (NSDictionary *)data;
- (ATVFeedDataSource *)initWithData:(NSDictionary *)arg0;
- (struct ?)itemHeight;
- (NSString *)templateName;
- (void)setTemplateName:(NSString *)arg0;

@end
