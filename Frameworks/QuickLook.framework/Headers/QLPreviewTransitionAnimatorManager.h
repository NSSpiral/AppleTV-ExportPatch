/* Runtime dump - QLPreviewTransitionAnimatorManager
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewTransitionAnimatorManager : NSObject <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (QLPreviewTransitionAnimatorManager *)sharedManager;

- (id)animatorForShowing:(char)arg0 previewController:(QLPreviewController *)arg1 presentingController:(BRController *)arg2;
- (NSObject *)animationControllerForPresentedController:(BRController *)arg0 presentingController:(BRController *)arg1 sourceController:(BRController *)arg2;
- (NSObject *)animationControllerForDismissedController:(BRController *)arg0;

@end
