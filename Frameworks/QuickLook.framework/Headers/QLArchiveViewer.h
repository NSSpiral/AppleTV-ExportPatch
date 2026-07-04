/* Runtime dump - QLArchiveViewer
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLArchiveViewer : NSObject <UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    QLPreviewController * _previewController;
    UIDocumentInteractionController * _documentInteractionController;
    UINavigationController * _navigationController;
    UIPopoverPresentationController * _presentationController;
    QLArchiveTableViewController * _tableViewController;
    char _visible;
}

@property (readonly) char visible;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (QLArchiveViewer *)initWithPreviewController:(QLPreviewController *)arg0;
- (void)presentFromBarButtonItem:(NSObject *)arg0 animated:(char)arg1;
- (void)dismiss:(_UIInputViewSetPlacementDragToDismiss *)arg0;
- (void)setupViewControllersForPresentationStyle:(int)arg0;
- (void)_updateThumbnails;
- (void)_cancelUpdateThumbnails;
- (void)_updateIcon:(UIImage *)arg0 forCell:(NSObject *)arg1 template:(char)arg2;
- (char)isInRegularWidth;
- (void)dealloc;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 shouldHighlightRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg0;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg0 willDecelerate:(char)arg1;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg0;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)adaptivePresentationStyleForPresentationController:(BRController *)arg0;
- (NSObject *)presentationController:(UIPopoverPresentationController *)arg0 viewControllerForAdaptivePresentationStyle:(int)arg1;
- (unsigned int)navigationControllerSupportedInterfaceOrientations:(id)arg0;
- (int)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg0;
- (void)prepareForPopoverPresentation:(id)arg0;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg0;
- (char)isVisible;
- (void)update;
- (void)dismissAnimated:(char)arg0;
- (struct CGSize)_imageSize;

@end
