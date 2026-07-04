/* Runtime dump - NSSQLHavingIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLHavingIntermediate : NSSQLIntermediate
{
    NSSQLWhereIntermediate * _whereClause;
}

- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (NSSQLHavingIntermediate *)initWithPredicate:(NSPredicate *)arg0 inScope:(NSObject *)arg1 inContext:(NSObject *)arg2;
- (char)isHavingScoped;
- (void)dealloc;

@end
