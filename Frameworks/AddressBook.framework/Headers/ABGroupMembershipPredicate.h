/* Runtime dump - ABGroupMembershipPredicate
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABGroupMembershipPredicate : ABPredicate
{
    void * _group;
    void * _store;
    NSString * _accountIdentifier;
}

@property (nonatomic) void * group;
@property (nonatomic) void * store;
@property (copy, nonatomic) NSString * accountIdentifier;

- (NSString *)queryWhereString;
- (void)ab_bindStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(struct sqlite3_stmt *)arg1 predicateIdentifier:(NSString *)arg2;
- (void *)store;
- (void)setStore:(void *)arg0;
- (void)setAccountIdentifier:(NSString *)arg0;
- (void)dealloc;
- (NSString *)description;
- (char)isValid;
- (void)setGroup:(void *)arg0;
- (void *)group;
- (NSString *)accountIdentifier;

@end
