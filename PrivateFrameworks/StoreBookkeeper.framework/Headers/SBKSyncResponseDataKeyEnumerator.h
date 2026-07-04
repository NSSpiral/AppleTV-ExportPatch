/* Runtime dump - SBKSyncResponseDataKeyEnumerator
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKSyncResponseDataKeyEnumerator : NSObject
{
    char _resolvedConflictsNeedSyncToServer;
    SBKSyncResponseData * _responseData;
    SBKSyncTransaction * _transaction;
    id _completionBlock;
    NSEnumerator * _updatedKeysEnumerator;
    NSEnumerator * _conflictedKeysEnumerator;
    NSEnumerator * _deletedKeysEnumerator;
}

@property (retain) SBKSyncResponseData * responseData;
@property (retain) SBKSyncTransaction * transaction;
@property (copy) id completionBlock;
@property char resolvedConflictsNeedSyncToServer;
@property (retain) NSEnumerator * updatedKeysEnumerator;
@property (retain) NSEnumerator * conflictedKeysEnumerator;
@property (retain) NSEnumerator * deletedKeysEnumerator;

- (void)setTransaction:(SBKSyncTransaction *)arg0;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setResponseData:(SBKSyncResponseData *)arg0;
- (SBKSyncResponseData *)responseData;
- (SBKSyncTransaction *)transaction;
- (SBKSyncResponseDataKeyEnumerator *)initWithResponseData:(SBKSyncResponseData *)arg0;
- (void)enumerateKeysInResponseForTransaction:(NSObject *)arg0 completionBlock:(id /* block */)arg1;
- (void)_processNextKey;
- (void)_processUpdatedKey:(NSString *)arg0 isConflict:(char)arg1 isDirty:(char *)arg2;
- (void)_processDeletedKey:(NSString *)arg0 isDirty:(char *)arg1;
- (char)resolvedConflictsNeedSyncToServer;
- (void)setResolvedConflictsNeedSyncToServer:(char)arg0;
- (NSEnumerator *)updatedKeysEnumerator;
- (void)setUpdatedKeysEnumerator:(NSEnumerator *)arg0;
- (NSEnumerator *)conflictedKeysEnumerator;
- (void)setConflictedKeysEnumerator:(NSEnumerator *)arg0;
- (NSEnumerator *)deletedKeysEnumerator;
- (void)setDeletedKeysEnumerator:(NSEnumerator *)arg0;

@end
