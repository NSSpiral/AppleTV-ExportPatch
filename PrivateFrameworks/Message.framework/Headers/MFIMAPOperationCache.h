/* Runtime dump - MFIMAPOperationCache
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPOperationCache : NSObject
{
    IMAPAccount * _account;
    NSFileHandle * _handle;
    NSMutableArray * _ops;
    unsigned int _lastUid;
    unsigned int _lastSave;
    unsigned int _lastUidValidity;
    char _opsPending;
}

+ (void)setShouldFlattenCacheOperations:(char)arg0;

- (void)saveChanges;
- (void)dealloc;
- (IMAPAccount *)account;
- (char)connection:(NSURLConnection *)arg0 shouldHandleUntaggedResponse:(NSURLResponse *)arg1 forCommand:(struct ? *)arg2;
- (void)createMailbox:(id)arg0;
- (void)expungeTemporaryUid:(unsigned int)arg0;
- (void)_queueDeferredOperation:(NSObject *)arg0;
- (void)_performCreateOperation:(NSObject *)arg0 withContext:(struct ? *)arg1;
- (void)_performDeleteOperation:(NSObject *)arg0 withContext:(struct ? *)arg1;
- (void)_performStoreOperation:(NSObject *)arg0 withContext:(struct ? *)arg1;
- (void)_performAppendOperation:(NSObject *)arg0 withContext:(struct ? *)arg1;
- (void)_performCopyOperation:(NSObject *)arg0 withContext:(struct ? *)arg1;
- (MFIMAPOperationCache *)initWithIMAPAccount:(NSObject *)arg0;
- (void)setFlags:(unsigned long long)arg0 andClearFlags:(id)arg1 forMessages:(CHITMessages *)arg2;
- (void)setFlags:(unsigned long long)arg0 andClearFlags:(id)arg1 forUids:(id)arg2 forMailbox:(MFDAMailbox *)arg3;
- (unsigned int)firstUidForCopyingMessages:(id)arg0 fromMailbox:(MFDAMailbox *)arg1 toMailbox:(MFDAMailbox *)arg2;
- (unsigned int)uidForAppendingMessageData:(NSData *)arg0 withFlags:(_MFMessageFlags *)arg1 andInternalDate:(NSDate *)arg2 toMailbox:(MFDAMailbox *)arg3;
- (char)hasPendingOfflineOperations;
- (char)hasOperationsForMailbox:(id)arg0;
- (void)performDeferredOperationsWithConnection:(NSURLConnection *)arg0;
- (NSMutableArray *)deferredOperations;
- (void)deleteMailbox:(id)arg0;

@end
