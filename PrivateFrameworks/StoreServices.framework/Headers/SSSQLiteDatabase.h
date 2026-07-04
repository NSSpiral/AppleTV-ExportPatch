/* Runtime dump - SSSQLiteDatabase
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteDatabase : NSObject
{
    struct sqlite3 * _db;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _databasePath;
    char _readOnly;
    char _isInTransaction;
    id _setupBlock;
    struct __CFDictionary * _statementCache;
    char _takesTaskCompletionAssertions;
    struct SBSProcessAssertion * _taskAssertion;
    int _taskAssertionCount;
}

@property (copy, nonatomic) id setupBlock;
@property char takesTaskCompletionAssertions;

+ (char)statementHasRowAfterStepping:(struct sqlite3_stmt *)arg0;
+ (void)_stepStatement:(struct sqlite3_stmt *)arg0 hasRow:(char *)arg1 didFinish:(char *)arg2 isCorrupt:(char *)arg3;
+ (char)statementDidFinishAfterStepping:(struct sqlite3_stmt *)arg0;
+ (void)_setTakesTaskCompletionAssertions:(char)arg0;

- (void)dealloc;
- (int)userVersion;
- (char)setUserVersion:(int)arg0;
- (char)executeSQL:(id)arg0;
- (void)performTransactionWithBlock:(id /* block */)arg0;
- (int)_openDatabase;
- (SSSQLiteDatabase *)initWithDatabaseURL:(NSURL *)arg0;
- (void)setSetupBlock:(id /* block */)arg0;
- (char)statementHasRowAfterStepping:(struct sqlite3_stmt *)arg0;
- (void)prepareStatementForSQL:(id)arg0 cache:(char)arg1 usingBlock:(id /* block */)arg2;
- (SSSQLiteDatabase *)initWithDatabaseURL:(NSURL *)arg0 readOnly:(char)arg1;
- (void)dispatchBlockAsync:(id)arg0;
- (void)_beginTaskCompletionAssertion;
- (void)_endTaskCompletionAssertion;
- (void)_accessDatabaseUsingBlock:(id /* block */)arg0;
- (void)_resetCorruptDatabase;
- (struct sqlite3_stmt *)_statementForSQL:(id)arg0 cache:(char)arg1;
- (char)setUserVersion:(int)arg0 forDatabase:(CKDatabase *)arg1;
- (int)userVersionForDatabase:(id)arg0;
- (int)_openFlags;
- (int)_resetAndReopenDatabaseWithPath:(NSString *)arg0;
- (char)_resetDatabaseWithPath:(NSString *)arg0;
- (char)statementDidFinishAfterStepping:(struct sqlite3_stmt *)arg0;
- (void)accessDatabaseUsingBlock:(id /* block */)arg0;
- (int)countChanges;
- (void)dispatchAfter:(unsigned long long)arg0 block:(id /* block */)arg1;
- (void)dispatchBlockSync:(id)arg0;
- (NSObject *)newDispatchSourceWithType:(struct dispatch_source_type_s *)arg0;
- (void)beginTaskCompletionAssertion;
- (void)endTaskCompletionAssertion;
- (void)setTakesTaskCompletionAssertions:(char)arg0;
- (char)takesTaskCompletionAssertions;
- (id /* block */)setupBlock;

@end
