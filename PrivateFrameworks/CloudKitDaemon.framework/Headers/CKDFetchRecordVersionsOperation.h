/* Runtime dump - CKDFetchRecordVersionsOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordVersionsOperation : CKDDatabaseOperation
{
    char _isDeleted;
    id _recordVersionFetchedBlock;
    NSArray * _recordIDs;
    NSArray * _desiredKeys;
    NSString * _minimumVersionETag;
    NSObject<OS_dispatch_group> * _fetchVersionsGroup;
}

@property (copy, nonatomic) id recordVersionFetchedBlock;
@property (retain, nonatomic) NSArray * recordIDs;
@property (retain, nonatomic) NSArray * desiredKeys;
@property (retain, nonatomic) NSString * minimumVersionETag;
@property (nonatomic) char isDeleted;
@property (retain, nonatomic) NSObject<OS_dispatch_group> * fetchVersionsGroup;

- (void)main;
- (void).cxx_destruct;
- (void)setDesiredKeys:(NSArray *)arg0;
- (CKDFetchRecordVersionsOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setRecordVersionFetchedBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (void)setRecordIDs:(NSArray *)arg0;
- (NSArray *)desiredKeys;
- (NSArray *)recordIDs;
- (void)setIsDeleted:(char)arg0;
- (NSString *)minimumVersionETag;
- (void)setMinimumVersionETag:(NSString *)arg0;
- (void)setFetchVersionsGroup:(NSObject<OS_dispatch_group> *)arg0;
- (NSObject<OS_dispatch_group> *)fetchVersionsGroup;
- (id /* block */)recordVersionFetchedBlock;
- (void)_handleRecordVersionsFecthedForID:(NSObject *)arg0 isDeleted:(char)arg1 versions:(AWDNFCVersions *)arg2 responseCode:(int *)arg3;
- (char)isDeleted;

@end
