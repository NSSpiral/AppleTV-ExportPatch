/* Runtime dump - TSUDatabase
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDatabase : NSObject
{
    struct sqlite3 * _db;
    char _readonly;
    struct sqlite3_stmt * _beginTransactionStatement;
    struct sqlite3_stmt * _commitTransactionStatement;
    struct sqlite3_stmt * _rollbackTransactionStatement;
}

@property (readonly, nonatomic) char readonly;
@property (readonly, nonatomic) struct sqlite3 * _sqliteDatabase;

- (NSString *)_initWithPath:(NSString *)arg0 readonly:(char)arg1 error:(id *)arg2;
- (char)executeUpdateWithSql:(char *)arg0 error:(id *)arg1;
- (char)prepareStatement:(struct sqlite3_stmt * *)arg0 sql:(struct sqlite3_stmt)arg1 error:(char *)arg2;
- (char)executeUpdate:(struct sqlite3_stmt *)arg0 shouldFinalize:(char)arg1 error:(id *)arg2;
- (char)_upgradeSchemaWithError:(id *)arg0;
- (char)startSingleResultQuery:(struct sqlite3_stmt *)arg0 error:(id *)arg1;
- (char)needsUpgradeFromSchemaVersion:(int)arg0;
- (char)endSingleResultQuery:(struct sqlite3_stmt *)arg0 shouldFinalize:(char)arg1 error:(id *)arg2;
- (char)upgradeFromSchemaVersion:(int)arg0 error:(id *)arg1;
- (TSUDatabase *)initReadonlyWithPath:(NSString *)arg0 error:(id *)arg1;
- (char)beginTransactionWithError:(id *)arg0;
- (char)commitTransactionWithError:(id *)arg0;
- (char)rollbackTransactionWithError:(id *)arg0;
- (char)setSchemaVersion:(int)arg0 error:(id *)arg1;
- (char)readonly;
- (struct sqlite3 *)_sqliteDatabase;
- (void)dealloc;
- (TSUDatabase *)initWithPath:(NSString *)arg0 error:(id *)arg1;
- (char)compactWithError:(id *)arg0;
- (char)closeWithError:(id *)arg0;

@end
