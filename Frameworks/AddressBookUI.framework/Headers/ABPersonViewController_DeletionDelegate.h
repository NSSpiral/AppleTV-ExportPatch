/* Runtime dump - ABPersonViewController_DeletionDelegate
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonViewController_DeletionDelegate : NSObject <UIActionSheetDelegate>
{
    ABPersonViewControllerHelper * _controller;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ABPersonViewController_DeletionDelegate *)initWithPersonViewController:(ABPersonViewController *)arg0;
- (void)actionSheet:(UIActionSheet *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;

@end
