/* Runtime dump - ML3ContainsPredicate
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ContainsPredicate : ML3PropertyPredicate
{
    id _values;
}

@property (copy, nonatomic) id values;

+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 values:(NSArray *)arg1;
+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 valueSet:(char)arg1;

- (ML3ContainsPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)setValues:(NSArray *)arg0;
- (NSArray *)values;
- (void).cxx_destruct;
- (void)appendSQLToMutableString:(NSString *)arg0 entityClass:(Class)arg1;
- (NSDictionary *)databaseStatementParameters;
- (char)containsPropertyPredicate:(NSPredicate *)arg0 matchingValue:(id)arg1 usingComparison:(int)arg2;
- (ML3ContainsPredicate *)initWithProperty:(NSString *)arg0 values:(NSArray *)arg1;

@end
