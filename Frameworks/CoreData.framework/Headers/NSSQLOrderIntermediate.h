/* Runtime dump - NSSQLOrderIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLOrderIntermediate : NSSQLIntermediate
{
    NSArray * _sortDescriptors;
}

- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (NSSQLOrderIntermediate *)initWithSortDescriptors:(NSArray *)arg0 inScope:(NSObject *)arg1;
- (id)_generateSQLForOrderedManyToManyInverse:(id)arg0 inContext:(NSObject *)arg1;
- (id)_generateSQLForOrderedToManyInverse:(id)arg0 inContext:(NSObject *)arg1;
- (void)dealloc;

@end
