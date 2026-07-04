/* Runtime dump - ABPropertyLinkedCardsAction
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyLinkedCardsAction : ABPropertyAction
{
    <ABContactViewControllerDelegate> * _contactDelegate;
    ABContactViewController * _contactController;
    CNMutableContact * _linkedContact;
}

@property <ABContactViewControllerDelegate> * contactDelegate;
@property (retain) ABContactViewController * contactController;
@property (retain) CNMutableContact * linkedContact;

- (void)performActionForItem:(NSObject *)arg0 sender:(NSObject *)arg1;
- (void)setContactController:(ABContactViewController *)arg0;
- (ABContactViewController *)contactController;
- (void)setPreferredPhoto;
- (void)setPreferredName;
- (void)setLinkedContact:(CNMutableContact *)arg0;
- (CNMutableContact *)linkedContact;
- (void)dealloc;
- (<ABContactViewControllerDelegate> *)contactDelegate;
- (void)setContactDelegate:(<ABContactViewControllerDelegate> *)arg0;

@end
