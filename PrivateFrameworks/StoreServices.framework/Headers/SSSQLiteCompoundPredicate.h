/* Runtime dump - SSSQLiteCompoundPredicate
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteCompoundPredicate : SSSQLitePredicate <NSCopying>
{
    NSString * _combinationOperation;
    NSArray * _predicates;
}

@property (readonly, nonatomic) NSArray * predicates;

+ (SSSQLiteCompoundPredicate *)predicateMatchingAllPredicates:(id)arg0;
+ (SSSQLiteCompoundPredicate *)predicateMatchingAnyPredicates:(id)arg0;
+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 values:(NSArray *)arg1 comparisonType:(int)arg2;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (SSSQLiteCompoundPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject *)SQLForEntityClass:(Class)arg0;
- (NSArray *)predicates;
- (void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(int *)arg1;
- (NSObject *)SQLJoinClausesForEntityClass:(Class)arg0;

@end
