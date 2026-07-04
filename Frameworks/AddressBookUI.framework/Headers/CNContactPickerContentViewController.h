/* Runtime dump - CNContactPickerContentViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNContactPickerContentViewController : UIViewController <CNContactPickerContentViewController>
{
    char _clientWantsPersons;
    char _clientWantsProperties;
    <CNContactPickerContentDelegate> * _delegate;
    NSArray * _displayedKeys;
    NSPredicate * _predicateForEnablingContact;
    NSPredicate * _predicateForSelectionOfContact;
    NSPredicate * _predicateForSelectionOfProperty;
}

@property char clientWantsPersons;
@property char clientWantsProperties;
@property (copy, nonatomic) NSArray * displayedKeys;
@property (copy, nonatomic) NSPredicate * predicateForEnablingContact;
@property (copy, nonatomic) NSPredicate * predicateForSelectionOfContact;
@property (copy, nonatomic) NSPredicate * predicateForSelectionOfProperty;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (weak) <CNContactPickerContentDelegate> * delegate;
@property void * addressBook;

- (void)setPredicateForSelectionOfContact:(NSPredicate *)arg0;
- (void)setPredicateForSelectionOfProperty:(NSPredicate *)arg0;
- (void)setupWithOptions:(NSDictionary *)arg0 readyBlock:(id /* block */)arg1;
- (NSArray *)displayedKeys;
- (void)setDisplayedKeys:(NSArray *)arg0;
- (NSPredicate *)predicateForEnablingContact;
- (void)setPredicateForEnablingContact:(NSPredicate *)arg0;
- (NSPredicate *)predicateForSelectionOfContact;
- (NSPredicate *)predicateForSelectionOfProperty;
- (char)clientWantsPersons;
- (char)clientWantsProperties;
- (void)setClientWantsPersons:(char)arg0;
- (void)setClientWantsProperties:(char)arg0;
- (void)setDelegate:(<CNContactPickerContentDelegate> *)arg0;
- (<CNContactPickerContentDelegate> *)delegate;
- (void)invalidate;
- (void).cxx_destruct;

@end
