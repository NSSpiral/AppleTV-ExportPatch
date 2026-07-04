/* Runtime dump - MLMediaLibraryService
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLMediaLibraryService : NSObject <MLMediaLibraryServiceClientProtocol>
{
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSXPCConnection * _serviceConnection;
    <MLMediaLibraryServiceProtocol> * _serviceProxy;
    NSMutableDictionary * _progressBlocksByUUID;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MLMediaLibraryService *)sharedMediaLibraryService;
+ (void)_setDaemonProcessInfo:(NSDictionary *)arg0;

- (void)dealloc;
- (MLMediaLibraryService *)init;
- (void).cxx_destruct;
- (void)performDatabaseOperation:(SEL)arg0 withAttributes:(unsigned int)arg1 options:(NSDictionary *)arg2 completionHandler:(id /* block */)arg3;
- (void)getDeviceSharedLibraryPath:(SEL)arg0;
- (void)setDeviceSharedLibraryPath:(SEL)arg0 withCompletion:(id /* block */)arg1;
- (void)validateDatabaseAtPath:(SEL)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)recreateDatabaseAtPath:(SEL)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)beginTransactionForDatabaseAtPath:(SEL)arg0 withPriorityLevel:(unsigned int)arg1 options:(unsigned int)arg2 completionHandler:(unsigned int)arg3;
- (void)executeUpdate:(SEL)arg0 withParameters:(NSDictionary *)arg1 onTransaction:(NSObject *)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)executeQuery:(SEL)arg0 withParameters:(NSDictionary *)arg1 options:(NSDictionary *)arg2 onTransaction:(NSObject *)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)endTransaction:(SEL)arg0 shouldCommit:(SADomainObjectCommit *)arg1 withCompletionHandler:(char)arg2;
- (void)setOptions:(SEL)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)cancelImportOperation:(SEL)arg0 completionHandler:(unsigned int)arg1;
- (void)pollCurrentImportStatus:(SEL)arg0;
- (void)lockDatabaseForReason:(SEL)arg0 withCompletion:(id /* block */)arg1;
- (void)unlockDatabaseWithCompletion:(SEL)arg0;
- (void)getLanguageResourcesWithCompletion:(SEL)arg0;
- (void)serviceTerminatedTransactionWithIdentifier:(SEL)arg0 error:(NSError *)arg1;
- (void)importOperationWithIdentifier:(SEL)arg0 didUpdateWithProgress:(id)arg1;
- (NSURLConnection *)_serviceConnection;
- (void)performImport:(id)arg0 fromSource:(unsigned int)arg1 withProgressBlock:(id /* block */)arg2 completionHandler:(/* block */ id)arg3;

@end
