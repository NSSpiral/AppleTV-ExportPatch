/* Runtime dump - NSSQLFetchDictionaryCountIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLFetchDictionaryCountIntermediate : NSSQLStatementIntermediate
{
    NSSQLFetchIntermediate * _realFetch;
}

- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (NSSQLFetchDictionaryCountIntermediate *)initWithFetchIntermediate:(NSSQLFetchIntermediate *)arg0 inScope:(NSObject *)arg1;
- (void)dealloc;

@end
