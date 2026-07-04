/* Runtime dump - ABContactCreateNewContactAction
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactCreateNewContactAction : ABContactAction <ABNewPersonViewControllerDelegate>
{
    CNContact * _createdContact;
    UIViewController * _presentingViewController;
}

@property (retain, nonatomic) CNContact * createdContact;
@property (nonatomic) UIViewController * presentingViewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)performActionWithSender:(NSObject *)arg0;
- (void)newPersonViewController:(BRController *)arg0 didCompleteWithNewPerson:(void *)arg1;
- (void)setCreatedContact:(CNContact *)arg0;
- (CNContact *)createdContact;
- (void)dealloc;
- (UIViewController *)presentingViewController;
- (void)setPresentingViewController:(UIViewController *)arg0;

@end
