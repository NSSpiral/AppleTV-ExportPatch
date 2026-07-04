/* Runtime dump - NSSQLUpdateIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate
{
    NSSQLUpdateColumnsIntermediate * _updateColumns;
}

- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (char)isUpdateScoped;
- (void)setUpdateColumnsIntermediate:(NSSQLUpdateColumnsIntermediate *)arg0;
- (NSSQLUpdateIntermediate *)initWithEntity:(NSObject *)arg0 inScope:(NSObject *)arg1;
- (NSSQLUpdateColumnsIntermediate *)updateColumnsIntermediate;
- (void)dealloc;

@end
