/* Runtime dump - ATVMusicStoreSingleRowPagedViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStorePagedViewController.h>

@class BRControl, BRGridControl;
@interface ATVMusicStoreSingleRowPagedViewController : ATVMusicStorePagedViewController

- (long)numberOfColumnsInGrid:(BRGridControl *)arg0;
- (NSString *)grid:(BRGridControl *)arg0 itemIDAtIndex:(long)arg1;
- (long)grid:(BRGridControl *)arg0 indexForItemID:(NSObject *)arg1;
- (long)_itemsPerPage;
- (BRControl *)view;

@end
