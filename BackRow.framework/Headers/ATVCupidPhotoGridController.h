/* Runtime dump - ATVCupidPhotoGridController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVCupidPhotoBrowserTemplate.h>

@class ATVPhotoBrowserView, BRControl, BRGridControl;
@interface ATVCupidPhotoGridController : ATVCupidPhotoBrowserTemplate
{
    ATVPhotoBrowserView * _browserView;
    id _selectionBlock;
}

@property (copy, nonatomic) id selectionBlock;

- (void)grid:(BRGridControl *)arg0 didSelectItemAtIndex:(long)arg1;
- (long)numberOfItemsInGrid:(BRGridControl *)arg0;
- (long)numberOfColumnsInGrid:(BRGridControl *)arg0;
- (BRControl *)grid:(BRGridControl *)arg0 itemAtIndex:(long)arg1;
- (void)setSelectionBlock:(id /* block */)arg0;
- (ATVCupidPhotoGridController *)initForCollection:(RadioArtworkCollection *)arg0 dataClient:(ATVDataClient *)arg1;
- (void)_reloadView;
- (void)_focusPhotoAtIndex:(int)arg0;
- (NSObject *)_sortedResultForResult:(NSObject *)arg0;
- (char)_dataRequiresUpdateWithNotification:(NSNotification *)arg0;
- (float)grid:(BRGridControl *)arg0 heightForItemAtIndex:(long)arg1;
- (id /* block */)selectionBlock;
- (void).cxx_destruct;

@end
