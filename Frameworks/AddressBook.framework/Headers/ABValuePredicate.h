/* Runtime dump - ABValuePredicate
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABValuePredicate : ABPredicate
{
    int _property;
    long _comparison;
    <NSObject> * _value;
    NSArray * _orderedKeys;
    char _dictionaryValue;
}

@property (nonatomic) int property;
@property (nonatomic) long comparison;
@property (copy, nonatomic) NSObject * value;

+ (ABValuePredicate *)stringForComparison:(id)arg0 withComparision:(long)arg1;

- (NSString *)queryWhereString;
- (void)ab_bindStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(struct sqlite3_stmt *)arg1 predicateIdentifier:(NSString *)arg2;
- (id)queryJoinsInCompound:(char)arg0;
- (NSDictionary *)querySelectProperties;
- (char)_shouldConsultIndexForKey:(NSString *)arg0;
- (char)_supportsFTSSearch;
- (char)_allowsLaxCheckingForFTS;
- (NSString *)_ftsTermStringForString:(NSString *)arg0;
- (NSString *)stringForComparison:(id)arg0;
- (NSArray *)_ftsAllQueryStrings;
- (NSString *)_ftsTokenizedTermStringForString:(NSString *)arg0;
- (NSString *)predicateFormat;
- (void)dealloc;
- (ABValuePredicate *)init;
- (char)isValid;
- (NSObject *)value;
- (void)setValue:(NSObject *)arg0;
- (int)property;
- (long)comparison;
- (void)setProperty:(int)arg0;
- (void)setComparison:(long)arg0;

@end
