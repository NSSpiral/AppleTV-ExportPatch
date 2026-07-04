/* Runtime dump - ATVFeedPagedGridDataSource
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVFeedPagedGridElement, ATVMerchant, BRPagedView;
@interface ATVFeedPagedGridDataSource : NSObject
{
    unsigned int _oldGridSelection;
    NSMutableArray * _grids;
    NSArray * _pages;
    ATVMerchant * _merchant;
    ATVFeedPagedGridElement * _feedElement;
}

@property (readonly, retain) NSArray * pages;
@property (readonly, retain) ATVMerchant * merchant;
@property (retain, nonatomic) ATVFeedPagedGridElement * feedElement;

- (ATVMerchant *)merchant;
- (ATVFeedPagedGridDataSource *)initWithFeedElement:(ATVFeedPagedGridElement *)arg0;
- (ATVFeedPagedGridElement *)feedElement;
- (long)pageCountForPagedView:(NSObject *)arg0;
- (NSObject *)pagedView:(BRPagedView *)arg0 itemForPage:(long)arg1;
- (ATVFeedPagedGridDataSource *)initWithPages:(NSArray *)arg0 merchant:(ATVMerchant *)arg1;
- (void)pagedView:(BRPagedView *)arg0 willSwitchToPageAtIndex:(long)arg1 fromPageAtIndex:(long)arg2;
- (void)pagedView:(BRPagedView *)arg0 didSwitchToPageAtIndex:(long)arg1 fromPageAtIndex:(long)arg2;
- (void)setFeedElement:(ATVFeedPagedGridElement *)arg0;
- (void)dealloc;
- (NSArray *)pages;

@end
