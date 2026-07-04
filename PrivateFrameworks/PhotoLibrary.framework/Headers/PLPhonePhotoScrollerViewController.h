/* Runtime dump - PLPhonePhotoScrollerViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhonePhotoScrollerViewController : PLPhotoScrollerViewController <UINavigationControllerDelegate>
{
    char _isModalTransition;
    char _didDisappearUnderModalTransition;
    UIView * _viewToRemoveForSlideShow;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (char)_isPerformingModalTransitionFromCamera;
- (PLPhonePhotoScrollerViewController *)initWithPhotoAtIndexPath:(NSIndexPath *)arg0 inAssetCollections:(id)arg1 dataSource:(NSObject *)arg2 lockStatusBar:(char)arg3 delayImageLoading:(char)arg4;
- (void)beginSlideshowByRemovingView:(NSObject *)arg0;
- (char)isModalTransitioning;

@end
