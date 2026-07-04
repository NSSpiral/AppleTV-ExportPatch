/* Runtime dump - NSSQLCompoundWhereIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate
{
    NSMutableArray * _subclauses;
}

- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (NSSQLCompoundWhereIntermediate *)initWithPredicate:(NSPredicate *)arg0 inScope:(NSObject *)arg1 inContext:(NSObject *)arg2;
- (NSString *)_generateMulticlauseStringInContext:(NSObject *)arg0;
- (char)isOrScoped;
- (void)dealloc;

@end
