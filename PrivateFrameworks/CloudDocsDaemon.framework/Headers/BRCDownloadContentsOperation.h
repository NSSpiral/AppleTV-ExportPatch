/* Runtime dump - BRCDownloadContentsOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDownloadContentsOperation : BRCTransferOperation
{
    id _perEntryCompletionBlock;
}

@property (copy) id perEntryCompletionBlock;

- (void).cxx_destruct;
- (BRCDownloadContentsOperation *)initWithSyncContext:(BRCSyncContext *)arg0;
- (void)setPerEntryCompletionBlock:(id /* block */)arg0;
- (void)addEntry:(QLZipArchiveEntry *)arg0;
- (id /* block */)perEntryCompletionBlock;
- (void)__doneWithEntry:(struct archive_entry *)arg0 error:(NSError *)arg1;
- (void)__main:(id)arg0;

@end
