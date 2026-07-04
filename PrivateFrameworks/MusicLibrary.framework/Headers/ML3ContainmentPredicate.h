/* Runtime dump - ML3ContainmentPredicate
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ContainmentPredicate : ML3PropertyPredicate
{
    NSSet * _values;
}

@property (retain, nonatomic) NSSet * values;

+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 values:(NSSet *)arg1;

- (ML3ContainmentPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setValues:(NSSet *)arg0;
- (NSSet *)values;
- (void).cxx_destruct;
- (void)appendSQLToMutableString:(NSString *)arg0 entityClass:(Class)arg1;
- (NSDictionary *)databaseStatementParameters;
- (char)containsPropertyPredicate:(NSPredicate *)arg0 matchingValue:(id)arg1 usingComparison:(int)arg2;
- (NSArray *)_orderedValues;
- (ML3ContainmentPredicate *)initWithProperty:(NSString *)arg0 values:(NSSet *)arg1;

@end
