/* Runtime dump - ABNamePredicate
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABNamePredicate : ABPredicate
{
    void * _addressBook;
    NSString * _name;
    char _matchWholeWords;
    char _matchPersonOrCompanyNamesExclusively;
    char _matchPreferredName;
    void * _tokenizations;
    struct __CFArray * _tokenizationSortKeys;
    NSArray * _groups;
    NSArray * _sources;
}

@property (nonatomic) void * addressBook;
@property (copy, nonatomic) NSString * name;
@property (retain, nonatomic) NSArray * sources;
@property (retain, nonatomic) NSArray * groups;
@property (nonatomic) void * source;
@property (nonatomic) void * group;
@property (copy, nonatomic) NSString * accountIdentifier;
@property (nonatomic) char matchWholeWords;
@property (nonatomic) char matchPersonOrCompanyNamesExclusively;
@property (nonatomic) char matchPreferredName;

- (NSString *)queryWhereString;
- (void)ab_bindStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(struct sqlite3_stmt *)arg1 predicateIdentifier:(NSString *)arg2;
- (void *)tokenizations;
- (NSArray *)_personNameKeys;
- (id)queryJoinsInCompound:(char)arg0;
- (char)matchWholeWords;
- (void)setMatchWholeWords:(char)arg0;
- (char)matchPersonOrCompanyNamesExclusively;
- (void)setMatchPersonOrCompanyNamesExclusively:(char)arg0;
- (char)matchPreferredName;
- (void)setMatchPreferredName:(char)arg0;
- (NSString *)predicateFormat;
- (void)setAddressBook:(void *)arg0;
- (void)setGroups:(NSArray *)arg0;
- (void)setAccountIdentifier:(NSString *)arg0;
- (void)dealloc;
- (ABNamePredicate *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (char)isValid;
- (void *)source;
- (void)setSource:(void *)arg0;
- (void)setGroup:(void *)arg0;
- (void *)group;
- (NSString *)accountIdentifier;
- (void)setSources:(NSArray *)arg0;
- (NSArray *)sources;
- (NSArray *)groups;
- (void *)addressBook;

@end
