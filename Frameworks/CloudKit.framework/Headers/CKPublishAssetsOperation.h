/* Runtime dump - CKPublishAssetsOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPublishAssetsOperation : CKDatabaseOperation
{
    NSDictionary * _fileNamesByAssetFieldNames;
    unsigned int _requestedTTL;
    unsigned int _URLOptions;
    id _assetPublishedBlock;
    id _publishAssetCompletionBlock;
    NSArray * _recordIDs;
}

@property (retain, nonatomic) NSDictionary * fileNamesByAssetFieldNames;
@property (nonatomic) unsigned int requestedTTL;
@property (nonatomic) unsigned int URLOptions;
@property (copy, nonatomic) id assetPublishedBlock;
@property (copy, nonatomic) id publishAssetCompletionBlock;
@property (retain, nonatomic) NSArray * recordIDs;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (id /* block */)publishAssetCompletionBlock;
- (void).cxx_destruct;
- (CKPublishAssetsOperation *)initWithRecordIDs:(NSArray *)arg0;
- (void)setFileNamesByAssetFieldNames:(NSDictionary *)arg0;
- (void)setRequestedTTL:(unsigned int)arg0;
- (void)setURLOptions:(unsigned int)arg0;
- (void)setPublishAssetCompletionBlock:(id /* block */)arg0;
- (void)setAssetPublishedBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (void)setRecordIDs:(NSArray *)arg0;
- (NSArray *)recordIDs;
- (NSDictionary *)fileNamesByAssetFieldNames;
- (unsigned int)requestedTTL;
- (unsigned int)URLOptions;
- (id /* block */)assetPublishedBlock;

@end
