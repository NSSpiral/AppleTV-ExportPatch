/* Runtime dump - ABAnyValuePredicate
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABAnyValuePredicate : ABPredicate
{
    int _property;
}

@property (nonatomic) int property;

- (NSString *)queryWhereString;
- (void)ab_bindStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(struct sqlite3_stmt *)arg1 predicateIdentifier:(NSString *)arg2;
- (id)queryJoinsInCompound:(char)arg0;
- (NSDictionary *)queryGroupByProperties;
- (ABAnyValuePredicate *)init;
- (char)isValid;
- (int)property;
- (void)setProperty:(int)arg0;

@end
