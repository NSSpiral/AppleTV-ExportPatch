/* Runtime dump - CKSQLiteError
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLiteError : NSObject

+ (void)raise:(id)arg0 code:(int)arg1 extended:(int)arg2;
+ (void)IOERR_READ:(id)arg0;
+ (void)IOERR_SHORT_READ:(id)arg0;
+ (void)IOERR_WRITE:(id)arg0;
+ (void)IOERR_FSYNC:(id)arg0;
+ (void)IOERR_DIR_FSYNC:(id)arg0;
+ (void)IOERR_TRUNCATE:(id)arg0;
+ (void)IOERR_FSTAT:(id)arg0;
+ (void)IOERR_UNLOCK:(AWDCallHistoryCallAddedBeforeUnlock *)arg0;
+ (void)IOERR_RDLOCK:(id)arg0;
+ (void)IOERR_DELETE:(IDSMessageToDelete *)arg0;
+ (void)IOERR_BLOCKED:(id)arg0;
+ (void)IOERR_NOMEM:(id)arg0;
+ (void)IOERR_ACCESS:(BRITunesLibraryUtilitiesAccess *)arg0;
+ (void)IOERR_CHECKRESERVEDLOCK:(id)arg0;
+ (void)IOERR_LOCK:(id)arg0;
+ (void)IOERR_CLOSE:(id)arg0;
+ (void)IOERR_DIR_CLOSE:(id)arg0;
+ (void)IOERR_SHMOPEN:(id)arg0;
+ (void)IOERR_SHMSIZE:(id)arg0;
+ (void)IOERR_SHMLOCK:(id)arg0;
+ (void)IOERR_SHMMAP:(id)arg0;
+ (void)IOERR_SEEK:(id)arg0;
+ (void)IOERR_DELETE_NOENT:(id)arg0;
+ (void)IOERR_MMAP:(id)arg0;
+ (void)IOERR_GETTEMPPATH:(id)arg0;
+ (void)IOERR_CONVPATH:(id)arg0;
+ (void)LOCKED_SHAREDCACHE:(id)arg0;
+ (void)BUSY_RECOVERY:(id)arg0;
+ (void)BUSY_SNAPSHOT:(NSObject *)arg0;
+ (void)CANTOPEN_NOTEMPDIR:(id)arg0;
+ (void)CANTOPEN_ISDIR:(id)arg0;
+ (void)CANTOPEN_FULLPATH:(id)arg0;
+ (void)CANTOPEN_CONVPATH:(id)arg0;
+ (void)CORRUPT_VTAB:(id)arg0;
+ (void)READONLY_RECOVERY:(id)arg0;
+ (void)READONLY_CANTLOCK:(id)arg0;
+ (void)READONLY_ROLLBACK:(id)arg0;
+ (void)READONLY_DBMOVED:(id)arg0;
+ (void)ABORT_ROLLBACK:(id)arg0;
+ (void)CONSTRAINT_CHECK:(WebPluginContainerCheck *)arg0;
+ (void)CONSTRAINT_COMMITHOOK:(id)arg0;
+ (void)CONSTRAINT_FOREIGNKEY:(NSString *)arg0;
+ (void)CONSTRAINT_FUNCTION:(ML3DatabaseFunction *)arg0;
+ (void)CONSTRAINT_NOTNULL:(id)arg0;
+ (void)CONSTRAINT_PRIMARYKEY:(NSString *)arg0;
+ (void)CONSTRAINT_TRIGGER:(MPActionTrigger *)arg0;
+ (void)CONSTRAINT_UNIQUE:(id)arg0;
+ (void)CONSTRAINT_VTAB:(id)arg0;
+ (void)CONSTRAINT_ROWID:(id)arg0;
+ (void)NOTICE_RECOVER_WAL:(id)arg0;
+ (void)NOTICE_RECOVER_ROLLBACK:(id)arg0;
+ (void)ERROR:(NSError *)arg0;
+ (void)INTERNAL:(MPSongInternal *)arg0;
+ (void)PERM:(id)arg0;
+ (void)ABORT:(id)arg0;
+ (void)BUSY:(id)arg0;
+ (void)LOCKED:(AWDCallHistoryDeviceUnlocked *)arg0;
+ (void)NOMEM:(id)arg0;
+ (void)READONLY:(id)arg0;
+ (void)INTERRUPT:(id)arg0;
+ (void)IOERR:(id)arg0;
+ (void)CORRUPT:(id)arg0;
+ (void)NOTFOUND:(SAAssistantNotFound *)arg0;
+ (void)FULL:(id)arg0;
+ (void)CANTOPEN:(id)arg0;
+ (void)PROTOCOL:(NSObject *)arg0;
+ (void)SCHEMA:(IKDOMSchema *)arg0;
+ (void)TOOBIG:(id)arg0;
+ (void)CONSTRAINT:(NSObject *)arg0;
+ (void)MISMATCH:(id)arg0;
+ (void)MISUSE:(id)arg0;
+ (void)RANGE:(NSObject *)arg0;
+ (void)NOTADB:(id)arg0;

@end
