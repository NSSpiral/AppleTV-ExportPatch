/* Runtime dump - NSSQLAliasGenerator
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLAliasGenerator : NSObject
{
    unsigned int _nextTableAlias;
    unsigned int _nextVariableAlias;
    unsigned int _nextTempTableAlias;
    NSString * _tableBase;
    NSString * _variableBase;
}

- (NSSQLAliasGenerator *)initWithNestingLevel:(unsigned int)arg0;
- (id)generateTableAlias;
- (id)generateSubqueryVariableAlias;
- (NSString *)generateTempTableName;
- (void)dealloc;
- (NSSQLAliasGenerator *)init;

@end
