/* Runtime dump - NSSQLWhereIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLWhereIntermediate : NSSQLIntermediate
{
    NSPredicate * _predicate;
}

- (NSSQLWhereIntermediate *)initWithPredicate:(NSPredicate *)arg0 inScope:(NSObject *)arg1;
- (NSPredicate *)predicate;

@end
