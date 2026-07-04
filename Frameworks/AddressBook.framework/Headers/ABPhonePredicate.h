/* Runtime dump - ABPhonePredicate
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABPhonePredicate : ABPredicate
{
    NSString * _phoneNumber;
    NSString * _country;
    NSString * _dbCountry;
}

@property (copy, nonatomic) NSString * phoneNumber;
@property (copy, nonatomic) NSString * country;
@property (readonly, nonatomic) NSString * dbCountry;

- (NSString *)queryWhereString;
- (void)ab_bindStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(struct sqlite3_stmt *)arg1 predicateIdentifier:(NSString *)arg2;
- (id)queryJoinsInCompound:(char)arg0;
- (void)setPhoneNumber:(NSString *)arg0;
- (char)hasCallback;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context *)arg0 predicateContext:(void *)arg1 values:(struct Mem * *)arg2 count:(struct Mem)arg3;
- (NSString *)dbCountry;
- (NSString *)predicateFormat;
- (void)dealloc;
- (char)isValid;
- (NSString *)phoneNumber;
- (void)setCountry:(NSString *)arg0;
- (NSString *)country;

@end
