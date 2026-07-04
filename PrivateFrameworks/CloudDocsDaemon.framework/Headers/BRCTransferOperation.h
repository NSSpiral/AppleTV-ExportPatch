/* Runtime dump - BRCTransferOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCTransferOperation : _BRCOperation <BRCOperationSubclass>
{
    NSMutableDictionary * _entriesByRecordID;
    NSMutableDictionary * _entriesBySecondaryRecordID;
    NSMutableDictionary * _entriesByTransferID;
    unsigned long long _totalSize;
    unsigned long long _doneSize;
    id _progressed;
    NSObject<OS_dispatch_group> * _pendingGroup;
}

@property unsigned long long totalSize;
@property unsigned long long doneSize;
@property (readonly) unsigned int itemsCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> * pendingGroup;
@property (copy) id progressed;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)_description;
- (void)main;
- (void).cxx_destruct;
- (unsigned int)itemsCount;
- (BRCTransferOperation *)initWithName:(NSString *)arg0 syncContext:(BRCSyncContext *)arg1 group:(NSObject *)arg2;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (char)shouldRetryForError:(NSError *)arg0;
- (BRCTransferOperation *)initWithName:(NSString *)arg0 syncContext:(BRCSyncContext *)arg1;
- (unsigned long long)totalSize;
- (unsigned long long)doneSize;
- (void)setDoneSize:(unsigned long long)arg0;
- (void)_addEntry:(QLZipArchiveEntry *)arg0;
- (NSObject<OS_dispatch_group> *)pendingGroup;
- (void)_progressForRecordID:(NSObject *)arg0 progress:(double)arg1;
- (void)_doneWithRecord:(NSObject *)arg0 recordID:(NSObject *)arg1 error:(NSError *)arg2;
- (void)__doneWithEntry:(struct archive_entry *)arg0 error:(NSError *)arg1;
- (void)__main:(id)arg0;
- (NSArray *)fetchOperationForEntries:(NSArray *)arg0 code:(int)arg1;
- (void)_doneWithEntry:(struct archive_entry *)arg0 error:(NSError *)arg1;
- (void)_cancelTransferID:(NSObject *)arg0;
- (void)_progressForEntry:(id)arg0 progress:(double)arg1;
- (void)cancelTransferID:(NSObject *)arg0;
- (void)addAliasItem:(NSObject *)arg0 toTransferWithID:(int)arg1;
- (double)progressForTransferID:(NSObject *)arg0;
- (void)setTotalSize:(unsigned long long)arg0;
- (id)progressed;
- (void)setProgressed:(id)arg0;

@end
