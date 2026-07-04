/* Runtime dump - BRCUploadOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUploadOperation : BRCTransferOperation
{
    id _perEntryCompletionBlock;
}

@property (copy) id perEntryCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (BRCUploadOperation *)initWithSyncContext:(BRCSyncContext *)arg0;
- (void)setPerEntryCompletionBlock:(id /* block */)arg0;
- (id /* block */)perEntryCompletionBlock;
- (void)addItem:(NSObject *)arg0 stageID:(NSString *)arg1 record:(NSObject *)arg2 transferSize:(unsigned long long)arg3;
- (void)__doneWithEntry:(struct archive_entry *)arg0 error:(NSError *)arg1;
- (void)__main:(id)arg0;

@end
