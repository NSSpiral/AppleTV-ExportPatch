/* Runtime dump - CKDRecordFetcher
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordFetcher : CKDDatabaseOperation
{
    char _fetchAssetContents;
    char _preserveOrdering;
    NSArray * _recordResponsesToFetch;
    NSSet * _desiredKeys;
    id _recordFetchedBlock;
    NSObject<OS_dispatch_group> * _fetchGroup;
    NSMutableDictionary * _fetchedRecordInfoByRecordID;
    NSMutableArray * _recordIDsToFetch;
}

@property (retain, nonatomic) NSArray * recordResponsesToFetch;
@property (nonatomic) char fetchAssetContents;
@property (nonatomic) char preserveOrdering;
@property (retain, nonatomic) NSSet * desiredKeys;
@property (copy, nonatomic) id recordFetchedBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_group> * fetchGroup;
@property (retain, nonatomic) NSMutableDictionary * fetchedRecordInfoByRecordID;
@property (retain, nonatomic) NSMutableArray * recordIDsToFetch;

- (void)main;
- (void).cxx_destruct;
- (void)setDesiredKeys:(NSSet *)arg0;
- (void)setRecordFetchedBlock:(id /* block */)arg0;
- (CKDRecordFetcher *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (char)shouldCheckAppVersion;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (NSSet *)desiredKeys;
- (char)fetchAssetContents;
- (NSMutableArray *)recordIDsToFetch;
- (NSMutableDictionary *)fetchedRecordInfoByRecordID;
- (void)_flushFetchedRecordsToConsumer;
- (NSObject<OS_dispatch_group> *)fetchGroup;
- (id /* block */)recordFetchedBlock;
- (char)preserveOrdering;
- (NSArray *)recordResponsesToFetch;
- (void)setRecordIDsToFetch:(NSMutableArray *)arg0;
- (void)setFetchedRecordInfoByRecordID:(NSMutableDictionary *)arg0;
- (void)_fetchRecordsFromServer:(NSObject *)arg0 fullRecords:(NSArray *)arg1;
- (void)setRecordResponsesToFetch:(NSArray *)arg0;
- (void)setFetchAssetContents:(char)arg0;
- (void)setPreserveOrdering:(char)arg0;
- (void)setFetchGroup:(NSObject<OS_dispatch_group> *)arg0;

@end
