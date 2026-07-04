/* Runtime dump - MFSQLiteConnection
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSQLiteConnection : NSObject
{
    NSString * _path;
    struct sqlite3 * _db;
    MFWeakReferenceHolder * _poolHolder;
    NSString * _databaseName;
    struct __CFDictionary * _statementCache;
    void * _ICUSearchContext;
    void * _CPSearchContext;
    int _transactionType;
    unsigned int _transactionCount;
}

@property (weak, nonatomic) MFSQLiteConnectionPool * pool;
@property (readonly, nonatomic) struct sqlite3 * db;

- (int)rollbackTransaction;
- (void)dealloc;
- (void)flush;
- (int)commitTransaction;
- (void)close;
- (struct sqlite3 *)db;
- (int)open;
- (int)beginTransaction;
- (int)beginTransactionWithType:(int)arg0;
- (MFSQLiteConnectionPool *)pool;
- (struct sqlite3_stmt *)preparedStatementForPattern:(NSObject *)arg0;
- (char *)_vfsModuleName;
- (MFSQLiteConnection *)initWithPath:(NSString *)arg0 databaseName:(NSString *)arg1;
- (char)isOpen;
- (void)setPool:(MFSQLiteConnectionPool *)arg0;

@end
