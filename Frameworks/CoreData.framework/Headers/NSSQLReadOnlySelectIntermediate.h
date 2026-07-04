/* Runtime dump - NSSQLReadOnlySelectIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate
{
    char _onlyFetchesAggregates;
}

- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (char)onlyFetchesAggregates;

@end
