/* Runtime dump - CKDPublishAssetsOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPublishAssetsOperation : CKDDatabaseOperation
{
    id _assetPublishedBlock;
    NSArray * _recordIDs;
    NSDictionary * _fileNamesByAssetFieldNames;
    unsigned int _requestedTTL;
    unsigned int _URLOptions;
    NSOperation * _fetchRecordsOperation;
    NSMutableDictionary * _fetchedRecordsByID;
}

@property (copy, nonatomic) id assetPublishedBlock;
@property (retain, nonatomic) NSArray * recordIDs;
@property (retain, nonatomic) NSDictionary * fileNamesByAssetFieldNames;
@property (nonatomic) unsigned int requestedTTL;
@property (nonatomic) unsigned int URLOptions;
@property (retain) NSOperation * fetchRecordsOperation;
@property (retain, nonatomic) NSMutableDictionary * fetchedRecordsByID;

- (void)cancel;
- (void)main;
- (void).cxx_destruct;
- (void)setFileNamesByAssetFieldNames:(NSDictionary *)arg0;
- (void)setRequestedTTL:(unsigned int)arg0;
- (void)setURLOptions:(unsigned int)arg0;
- (void)setAssetPublishedBlock:(id /* block */)arg0;
- (CKDPublishAssetsOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (NSObject *)nameForState:(unsigned int)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (char)makeStateTransition;
- (void)setRecordIDs:(NSArray *)arg0;
- (void)_fetchRecords;
- (NSArray *)recordIDs;
- (NSDictionary *)fileNamesByAssetFieldNames;
- (unsigned int)requestedTTL;
- (unsigned int)URLOptions;
- (void)_fetchPCSForRecords;
- (id /* block */)assetPublishedBlock;
- (NSURL *)_expandTemplateURL:(NSURL *)arg0 fieldValues:(NSMutableArray *)arg1;
- (NSMutableDictionary *)fetchedRecordsByID;
- (void)_dispatchAssetURLsForRecord:(NSObject *)arg0 recordID:(NSObject *)arg1 pcs:(struct _OpaquePCSShareProtection *)arg2 error:(NSError *)arg3;
- (void)setFetchRecordsOperation:(NSOperation *)arg0;
- (NSOperation *)fetchRecordsOperation;
- (void)setFetchedRecordsByID:(NSMutableDictionary *)arg0;

@end
