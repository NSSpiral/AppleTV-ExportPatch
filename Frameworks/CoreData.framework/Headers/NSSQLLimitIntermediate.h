/* Runtime dump - NSSQLLimitIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLLimitIntermediate : NSSQLIntermediate
{
    unsigned int _limit;
}

- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (NSSQLLimitIntermediate *)initWithLimit:(unsigned int)arg0 inScope:(NSObject *)arg1;

@end
