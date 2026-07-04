/* Runtime dump - MSASModelBase
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASModelBase : NSObject
{
    char _dbWasRecreated;
    struct sqlite3 * _db;
    NSString * _personID;
    struct __CFDictionary * _statements;
    NSObject<OS_dispatch_queue> * _statementQueue;
    NSObject<OS_dispatch_queue> * _dbQueue;
}

@property (readonly, nonatomic) struct sqlite3 * dbQueueDB;
@property (readonly, nonatomic) NSString * personID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * dbQueue;
@property (nonatomic) char dbWasRecreated;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * statementQueue;
@property (nonatomic) struct __CFDictionary * statements;

- (void)dealloc;
- (void).cxx_destruct;
- (struct sqlite3 *)db;
- (void)beginTransaction;
- (void)endTransaction;
- (void)shutDownForDestruction:(char)arg0 completionBlock:(id /* block */)arg1;
- (NSString *)persistentObjectForKey:(NSString *)arg0;
- (void)setPersistentObject:(EKPersistentObject *)arg0 forKey:(NSString *)arg1;
- (char)dbWasRecreated;
- (NSString *)persistentStringForKey:(NSString *)arg0;
- (void)setPersistentString:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)deletePersistentValueWithKey:(NSString *)arg0;
- (NSObject<OS_dispatch_queue> *)dbQueue;
- (void)dbQueueBeginTransaction;
- (void)dbQueueSetPersistentString:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)dbQueueSetPersistentObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dbQueueEndTransaction;
- (MSASModelBase *)initWithPersonID:(NSString *)arg0 databasePath:(NSString *)arg1 currentVersion:(int)arg2;
- (char)dbQueueUpgradeFromDatabaseVersion:(int)arg0 currentVersion:(int)arg1;
- (struct sqlite3 *)dbQueueDB;
- (struct sqlite3_stmt *)statementForString:(NSString *)arg0;
- (NSString *)dbQueuePersistentObjectForKey:(NSString *)arg0;
- (void)dbQueueInitializeDatabasePath:(NSString *)arg0 currentVersion:(int)arg1;
- (NSString *)dbQueuePersistentStringForKey:(NSString *)arg0;
- (void)dbQueueSetPersistentData:(NSData *)arg0 forKey:(NSString *)arg1;
- (void)dbQueueDeletePersistentValueWithKey:(NSString *)arg0;
- (NSString *)dbQueuePersistentDataForKey:(NSString *)arg0;
- (void)dbQueueRollbackTransaction;
- (struct __CFDictionary *)statements;
- (void)setStatements:(struct __CFDictionary *)arg0;
- (void)setStatementQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setDbWasRecreated:(char)arg0;
- (NSObject<OS_dispatch_queue> *)statementQueue;
- (NSString *)personID;

@end
