/* Runtime dump - ML3DatabaseDistantConnection
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseDistantConnection : ML3DatabaseConnection
{
    MLMediaLibraryService * _mediaLibraryService;
    NSUUID * _currentTransactionID;
    char _connectionOpen;
    <ML3DatabaseDistantConnectionDelegate> * _distantDelegate;
}

@property (weak, nonatomic) <ML3DatabaseDistantConnectionDelegate> * distantDelegate;

- (void)dealloc;
- (char)close;
- (void).cxx_destruct;
- (struct sqlite3 *)_sqliteHandle;
- (NSUUID *)currentTransactionID;
- (ML3DatabaseDistantConnection *)initWithDatabasePath:(NSString *)arg0;
- (char)isOpen;
- (char)registerFunctionName:(NSString *)arg0 argumentCount:(int)arg1 block:(id /* block */)arg2;
- (id)openBlobInTable:(id)arg0 column:(TSWPColumn *)arg1 row:(long long)arg2 readOnly:(char)arg3;
- (char)registerModule:(id)arg0;
- (void)setReadOnly:(char)arg0;
- (void)setProfilingLevel:(int)arg0;
- (char)_openWithFlags:(int)arg0;
- (NSObject *)_internalExecuteQuery:(NSObject *)arg0 withParameters:(NSDictionary *)arg1 limitProperty:(NSString *)arg2 limitValue:(long long)arg3;
- (char)_internalExecuteUpdate:(NSDate *)arg0 withParameters:(NSDictionary *)arg1 error:(id *)arg2;
- (char)_internalBeginTransactionWithBehaviorType:(unsigned int)arg0;
- (char)_internalEndTransactionAndCommit:(char)arg0;
- (char)registerFunctionName:(NSString *)arg0 argumentCount:(int)arg1 functionPointer:(/* block */ id *)arg2 userData:(void *)arg3;
- (int)checkpointDatabase;
- (void)_serviceTerminatedTransactionNotification:(NSNotification *)arg0;
- (char)_internalBeginTransactionWithBehaviorType:(unsigned int)arg0 isRetry:(char)arg1;
- (char)shouldCacheStatements;
- (<ML3DatabaseDistantConnectionDelegate> *)distantDelegate;
- (void)setDistantDelegate:(<ML3DatabaseDistantConnectionDelegate> *)arg0;
- (char)isReadOnly;

@end
