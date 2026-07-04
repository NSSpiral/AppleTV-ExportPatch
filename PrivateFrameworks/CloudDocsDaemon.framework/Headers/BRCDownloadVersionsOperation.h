/* Runtime dump - BRCDownloadVersionsOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDownloadVersionsOperation : BRCTransferOperation
{
    NSMutableDictionary * _readers;
    id _perEntryCompletionBlock;
}

@property (copy) id perEntryCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (void)setPerEntryCompletionBlock:(id /* block */)arg0;
- (void)addEntry:(QLZipArchiveEntry *)arg0;
- (BRCDownloadVersionsOperation *)initWithSyncContext:(BRCSyncContext *)arg0 forNonLocalVersion:(char)arg1;
- (id /* block */)perEntryCompletionBlock;
- (void)__doneWithEntry:(struct archive_entry *)arg0 error:(NSError *)arg1;
- (void)__main:(id)arg0;
- (void)addReaderID:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)cancelReaderID:(NSObject *)arg0;

@end
