/* Runtime dump - NSSQLiteStatement
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLiteStatement : NSSQLStatement
{
    struct sqlite3_stmt * _cachedSQLiteStatement;
}

- (struct sqlite3_stmt *)cachedSQLiteStatement;
- (void)setCachedSQLiteStatement:(struct sqlite3_stmt *)arg0;
- (void)dealloc;
- (void)clearCaches;
- (void)finalize;

@end
