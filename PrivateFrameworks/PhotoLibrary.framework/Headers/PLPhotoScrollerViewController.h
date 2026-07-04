/* Runtime dump - PLPhotoScrollerViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoScrollerViewController : PLPhotoBrowserController
{
    char _modalSheetIsPresent;
    char _dontChangeStatusBar;
    char _viewWillDisappear;
}

- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (UIView *)remakerContainerView;
- (void)removeRemakerContainerView;
- (PLPhotoScrollerViewController *)_initWithAssetCollections:(id)arg0 dataSource:(NSObject *)arg1 lockStatusBar:(char)arg2 currentImageIndexPath:(NSIndexPath *)arg3 delayImageLoading:(char)arg4;
- (void)setDontChangeStatusBar:(char)arg0;
- (char)dontChangeStatusBar;

@end
