/* Runtime dump - ABGroupWrapper
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABGroupWrapper : NSObject
{
    void * _addressBook;
    NSString * _accountIdentifier;
    void * _source;
    void * _group;
    NSString * _cachedName;
    ACAccountStore * _accountStore;
    id _delegate;
    char _shouldBeSelectedWhenAllChildrenAreSelected;
    char _selected;
    NSSet * _childGroupWrappers;
    ABGroupWrapper * _parentGroupWrapper;
}

@property (readonly, nonatomic) NSString * accountIdentifier;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) void * addressBook;
@property (readonly, nonatomic) void * source;
@property (readonly, nonatomic) void * group;
@property (retain, nonatomic) NSSet * childGroupWrappers;
@property (nonatomic) char shouldBeSelectedWhenAllChildrenAreSelected;
@property (nonatomic) ABGroupWrapper * parentGroupWrapper;
@property (nonatomic) char selected;
@property (nonatomic) <ABGroupWrapperDelegate> * delegate;
@property (readonly, nonatomic) int sourceType;
@property (retain, nonatomic) ACAccountStore * accountStore;
@property (readonly, nonatomic) NSString * _accountDescriptionBasedOnIdentifier;

+ (NSString *)newGroupWrappersWithAccountIdentifier:(NSString *)arg0 addressBook:(void *)arg1 accountStore:(ACAccountStore *)arg2 excludingSearchableStores:(char)arg3 isSoleAccount:(char)arg4;
+ (NSString *)newGroupWrappersWithAccountIdentifier:(NSString *)arg0 addressBook:(void *)arg1 accountStore:(ACAccountStore *)arg2;
+ (NSString *)newGroupWrappersWithAccountIdentifier:(NSString *)arg0 addressBook:(void *)arg1;
+ (NSString *)newGroupWrappersWithAccountIdentifier:(NSString *)arg0 addressBook:(void *)arg1 excludingSearchableStores:(char)arg2;
+ (NSDictionary *)newGroupWrapperFromDictionaryRepresentation:(NSDictionary *)arg0 withAddressBook:(void *)arg1;

- (char)isDirectoryWrapper;
- (ABGroupWrapper *)parentGroupWrapper;
- (void)setParentGroupWrapper:(ABGroupWrapper *)arg0;
- (void)setChildGroupWrappers:(NSSet *)arg0;
- (void)setShouldBeSelectedWhenAllChildrenAreSelected:(char)arg0;
- (int)compareToGroupWrapper:(NSObject *)arg0;
- (char)toggleSelection;
- (char)isGlobalWrapper;
- (NSDictionary *)copyDictionaryRepresentation;
- (ABGroupWrapper *)initWithAddressBook:(void *)arg0 accountIdentifier:(NSString *)arg1 source:(void *)arg2 group:(void *)arg3;
- (NSString *)_accountDescriptionBasedOnIdentifier;
- (void)childGroupWrapper:(NSObject *)arg0 didBecomeSelected:(char)arg1;
- (void)setSelected:(char)arg0 propagateSelectionToChildren:(char)arg1;
- (NSObject *)_rootGroupWrapper;
- (char)showLinkedPeople;
- (char)isContainerWrapper;
- (NSSet *)childGroupWrappers;
- (char)shouldBeSelectedWhenAllChildrenAreSelected;
- (void)dealloc;
- (void)setDelegate:(<ABGroupWrapperDelegate> *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (<ABGroupWrapperDelegate> *)delegate;
- (NSString *)name;
- (char)isSelected;
- (void)setSelected:(char)arg0;
- (int)sourceType;
- (void *)source;
- (void *)group;
- (ACAccountStore *)accountStore;
- (NSString *)accountIdentifier;
- (void)setAccountStore:(ACAccountStore *)arg0;
- (void *)addressBook;
- (int)score;

@end
