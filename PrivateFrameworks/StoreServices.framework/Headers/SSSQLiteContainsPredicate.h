/* Runtime dump - SSSQLiteContainsPredicate
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteContainsPredicate : SSSQLitePropertyPredicate <NSCopying>
{
    char _negative;
    SSSQLiteQuery * _query;
    NSString * _queryProperty;
    id _values;
}

@property (readonly, nonatomic) char negative;
@property (readonly, nonatomic) SSSQLiteQuery * query;
@property (readonly, nonatomic) NSString * queryProperty;
@property (readonly, nonatomic) NSArray * values;

+ (NSObject *)containsPredicateWithProperty:(NSString *)arg0 values:(NSArray *)arg1;
+ (NSObject *)containsPredicateWithProperty:(NSString *)arg0 query:(SSSQLiteQuery *)arg1 queryProperty:(NSString *)arg2;
+ (NSObject *)doesNotContainPredicateWithProperty:(NSString *)arg0 values:(NSArray *)arg1;

- (char)isNegative;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (SSSQLiteQuery *)query;
- (SSSQLiteContainsPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)values;
- (NSObject *)SQLForEntityClass:(Class)arg0;
- (void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(int *)arg1;
- (NSString *)queryProperty;

@end
