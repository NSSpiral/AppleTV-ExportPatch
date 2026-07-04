/* Runtime dump - ATVFeedMediaBrowserController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedController.h>

@protocol ATVSelectionCoupling;

@class ATVFeedElement, ATVFeedMediaBrowserElement, ATVFeedRootElement, ATVPhotoBatchBrowserView, BRControl, BRGridControl;
@interface ATVFeedMediaBrowserController : ATVFeedController <ATVSelectionCoupling>
{
    int _selectedBatchIndex;
}

@property (readonly, nonatomic) ATVFeedMediaBrowserElement * mediaBrowserElement;
@property (retain, nonatomic) ATVPhotoBatchBrowserView * photoBatchBrowserView;
@property (nonatomic) int selectedBatchIndex;

- (void)wasPushed;
- (long)numberOfItemsInGrid:(BRGridControl *)arg0;
- (long)numberOfColumnsInGrid:(BRGridControl *)arg0;
- (BRControl *)grid:(BRGridControl *)arg0 itemAtIndex:(long)arg1;
- (void)_screensaverPhotosDidChange:(NSDictionary *)arg0;
- (ATVPhotoBatchBrowserView *)photoBatchBrowserView;
- (void)setSelectedBatchIndex:(int)arg0;
- (void)setPhotoBatchBrowserView:(ATVPhotoBatchBrowserView *)arg0;
- (int)selectedBatchIndex;
- (ATVFeedMediaBrowserController *)initWithFeedElement:(ATVFeedElement *)arg0;
- (void)_handleUpdateWithFeedElement:(ATVFeedRootElement *)arg0 loadType:(int)arg1;
- (void)_realodView;
- (ATVFeedMediaBrowserElement *)mediaBrowserElement;
- (id)_filterButtons:(id)arg0;
- (NSArray *)_makeButtonControls:(id)arg0;
- (void)setSelectionForCouplingID:(NSString *)arg0;
- (void)dealloc;
- (ATVFeedMediaBrowserController *)initWithDictionary:(NSDictionary *)arg0;

@end
