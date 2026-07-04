/* Runtime dump - PLDatabaseReader
 * Image: /System/Library/PrivateFrameworks/PowerlogDatabaseReader.framework/PowerlogDatabaseReader
 */

@interface PLDatabaseReader : NSObject
{
    struct sqlite3 * _dbConnection;
}

@property struct sqlite3 * dbConnection;

- (void)dealloc;
- (struct sqlite3 *)dbConnection;
- (id)performStatement:(struct sqlite3_stmt *)arg0;
- (void)setDbConnection:(struct sqlite3 *)arg0;
- (struct sqlite3 *)openDatabaseFile:(NSString *)arg0;
- (NSString *)prepareStatementAndPerformWithString:(NSString *)arg0;
- (id)stringValueOfTable:(id)arg0;
- (PLDatabaseReader *)initWithDatabaseFile:(NSString *)arg0;
- (id)tableNamesFromDatabase;

@end
