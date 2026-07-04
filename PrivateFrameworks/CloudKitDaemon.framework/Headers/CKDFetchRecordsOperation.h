/* Runtime dump - CKDFetchRecordsOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordsOperation : CKDDatabaseOperation
{
    char _useCachedEtags;
    char _forcePCSDecrypt;
    char _shouldFetchAssetContent;
    NSArray * _fullRecordsToFetch;
    id _recordFetchProgressBlock;
    id _recordFetchCompletionBlock;
    NSArray * _recordIDsToFetch;
    NSMutableDictionary * _cachedRecords;
    NSSet * _desiredKeySet;
    NSDictionary * _recordIDsToVersionETags;
    NSDictionary * _desiredPackageFileIndices;
    NSObject<OS_dispatch_group> * _fetchRecordsGroup;
    NSMutableDictionary * _errorsByRecordID;
    NSMapTable * _downloadTasksByRecordID;
    NSDictionary * _signaturesOfAssetsByRecordIDAndKey;
    NSSet * _assetFieldNamesToPublishURLs;
    unsigned int _requestedTTL;
    unsigned int _URLOptions;
    CKDRecordCache * _cache;
    NSDictionary * _webSharingIdentityDataByRecordID;
}

@property (nonatomic) char useCachedEtags;
@property (nonatomic) char forcePCSDecrypt;
@property (retain, nonatomic) NSArray * fullRecordsToFetch;
@property (copy, nonatomic) id recordFetchProgressBlock;
@property (copy, nonatomic) id recordFetchCompletionBlock;
@property (retain, nonatomic) NSArray * recordIDsToFetch;
@property (retain, nonatomic) NSMutableDictionary * cachedRecords;
@property (retain, nonatomic) NSSet * desiredKeySet;
@property (retain, nonatomic) NSDictionary * recordIDsToVersionETags;
@property (retain, nonatomic) NSDictionary * desiredPackageFileIndices;
@property (retain, nonatomic) NSObject<OS_dispatch_group> * fetchRecordsGroup;
@property (retain, nonatomic) NSMutableDictionary * errorsByRecordID;
@property (retain, nonatomic) NSMapTable * downloadTasksByRecordID;
@property (retain, nonatomic) NSDictionary * signaturesOfAssetsByRecordIDAndKey;
@property (nonatomic) char shouldFetchAssetContent;
@property (retain, nonatomic) NSSet * assetFieldNamesToPublishURLs;
@property (nonatomic) unsigned int requestedTTL;
@property (nonatomic) unsigned int URLOptions;
@property (retain, nonatomic) CKDRecordCache * cache;
@property (retain, nonatomic) NSDictionary * webSharingIdentityDataByRecordID;

- (CKDRecordCache *)cache;
- (void)main;
- (void).cxx_destruct;
- (void)setCache:(CKDRecordCache *)arg0;
- (void)setRecordIDsToVersionETags:(NSDictionary *)arg0;
- (void)setShouldFetchAssetContent:(char)arg0;
- (void)setDesiredPackageFileIndices:(NSDictionary *)arg0;
- (void)setRequestedTTL:(unsigned int)arg0;
- (void)setURLOptions:(unsigned int)arg0;
- (void)finishWithError:(NSError *)arg0;
- (CKDFetchRecordsOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setRecordFetchProgressBlock:(id /* block */)arg0;
- (void)setRecordFetchCompletionBlock:(id /* block */)arg0;
- (NSObject *)nameForState:(unsigned int)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (char)makeStateTransition;
- (void)setFullRecordsToFetch:(NSArray *)arg0;
- (NSArray *)recordIDsToFetch;
- (void)setRecordIDsToFetch:(NSArray *)arg0;
- (char)shouldFetchAssetContent;
- (NSSet *)desiredKeySet;
- (void)setDesiredKeySet:(NSSet *)arg0;
- (void)setUseCachedEtags:(char)arg0;
- (void)_fetchRecords;
- (void)setForcePCSDecrypt:(char)arg0;
- (unsigned int)requestedTTL;
- (unsigned int)URLOptions;
- (void)setAssetFieldNamesToPublishURLs:(NSSet *)arg0;
- (NSDictionary *)recordIDsToVersionETags;
- (NSSet *)assetFieldNamesToPublishURLs;
- (NSDictionary *)desiredPackageFileIndices;
- (NSDictionary *)signaturesOfAssetsByRecordIDAndKey;
- (NSDictionary *)webSharingIdentityDataByRecordID;
- (void)_downloadAssets;
- (char)useCachedEtags;
- (NSMutableDictionary *)cachedRecords;
- (void)_handleRecordFetch:(id)arg0 recordID:(NSObject *)arg1 etagMatched:(char)arg2 responseCode:(int *)arg3;
- (NSObject<OS_dispatch_group> *)fetchRecordsGroup;
- (NSArray *)fullRecordsToFetch;
- (NSMutableDictionary *)errorsByRecordID;
- (NSObject *)errorForRecordID:(NSObject *)arg0;
- (id /* block */)recordFetchProgressBlock;
- (id /* block */)recordFetchCompletionBlock;
- (void)_addDownloadTaskForRecord:(NSObject *)arg0 completionBlock:(id /* block */)arg1;
- (void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg0;
- (char)forcePCSDecrypt;
- (void)setError:(NSError *)arg0 forRecordID:(NSObject *)arg1;
- (void)_continueHandleFetchedRecord:(NSObject *)arg0;
- (void)_decryptPropertiesOnRecord:(NSObject *)arg0;
- (char)_prepareAsset:(NSSet *)arg0 record:(NSObject *)arg1 recordKey:(NSString *)arg2 signature:(NSObject *)arg3;
- (NSMapTable *)downloadTasksByRecordID;
- (void)_finishAllDownloadTasksWithError:(NSError *)arg0;
- (void)_didDownloadAssetsWithError:(NSError *)arg0;
- (void)setCachedRecords:(NSMutableDictionary *)arg0;
- (void)setFetchRecordsGroup:(NSObject<OS_dispatch_group> *)arg0;
- (void)setErrorsByRecordID:(NSMutableDictionary *)arg0;
- (void)setDownloadTasksByRecordID:(NSMapTable *)arg0;
- (void)setSignaturesOfAssetsByRecordIDAndKey:(NSDictionary *)arg0;

@end
