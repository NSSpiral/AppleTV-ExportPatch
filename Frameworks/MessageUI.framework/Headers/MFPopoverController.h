/* Runtime dump - MFPopoverController
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFPopoverController : UIPopoverController <UIPopoverControllerDelegate>
{
    id _mailDelegate;
    id _mailPopoverManager;
    char _isRotating;
}

@property (nonatomic) <MFMailPopoverManagerDelegate> * mailDelegate;
@property (nonatomic) id mailPopoverManager;
@property (nonatomic) char isRotating;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setMailDelegate:(<MFMailPopoverManagerDelegate> *)arg0;
- (void)setMailPopoverManager:(NSObject *)arg0;
- (<MFMailPopoverManagerDelegate> *)mailDelegate;
- (void)setIsRotating:(char)arg0;
- (NSObject *)mailPopoverManager;
- (void)dealloc;
- (char)isRotating;
- (void)dismissPopoverAnimated:(char)arg0;
- (MFPopoverController *)initWithContentViewController:(BRController *)arg0;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0;
- (void)popoverController:(BRController *)arg0 animationCompleted:(int)arg1;
- (char)popoverControllerShouldDismissPopover:(UIPopoverController *)arg0;

@end
