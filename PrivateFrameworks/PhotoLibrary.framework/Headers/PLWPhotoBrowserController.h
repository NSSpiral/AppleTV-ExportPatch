/* Runtime dump - PLWPhotoBrowserController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLWPhotoBrowserController : PLPhotoBrowserController <UIGestureRecognizerDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (char)wantsPhotoBrowserStyleStatusBar;
- (PLWPhotoBrowserController *)initWithAssetCollections:(id)arg0 atImageIndexPath:(NSIndexPath *)arg1 dataSource:(NSObject *)arg2 modalDoneButtonItem:(NSObject *)arg3;

@end
