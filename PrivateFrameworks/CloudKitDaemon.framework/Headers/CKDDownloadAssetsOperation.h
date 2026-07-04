/* Runtime dump - CKDDownloadAssetsOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDownloadAssetsOperation : CKDDatabaseOperation
{
    id _downloadPreparationBlock;
    id _downloadProgressBlock;
    id _downloadCompletionBlock;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _assetsToDownload;
    NSArray * _packageIndexSets;
    NSMutableArray * _MMCSItemsToDownload;
    NSMapTable * _downloadTasksByPackages;
    CKDCancelTokenGroup * _cancelTokens;
    unsigned int _maxPackageDownloadsPerBatch;
}

@property (copy, nonatomic) id downloadPreparationBlock;
@property (copy, nonatomic) id downloadProgressBlock;
@property (copy, nonatomic) id downloadCompletionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) NSArray * assetsToDownload;
@property (retain, nonatomic) NSArray * packageIndexSets;
@property (retain, nonatomic) NSMutableArray * MMCSItemsToDownload;
@property (retain, nonatomic) NSMapTable * downloadTasksByPackages;
@property (retain, nonatomic) CKDCancelTokenGroup * cancelTokens;
@property (nonatomic) unsigned int maxPackageDownloadsPerBatch;

- (void)cancel;
- (void)main;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject *)nameForState:(unsigned int)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (char)makeStateTransition;
- (CKDCancelTokenGroup *)cancelTokens;
- (void)setCancelTokens:(CKDCancelTokenGroup *)arg0;
- (char)_prepareForDownload;
- (char)_download;
- (id /* block */)downloadPreparationBlock;
- (id /* block */)downloadProgressBlock;
- (id /* block */)downloadCompletionBlock;
- (NSArray *)assetsToDownload;
- (void)_didDownloadAsset:(NSSet *)arg0 error:(NSError *)arg1;
- (void)_didPrepareAsset:(NSSet *)arg0;
- (void)_didMakeProgressForAsset:(NSSet *)arg0 progress:(double)arg1;
- (NSArray *)packageIndexSets;
- (void)setMMCSItemsToDownload:(id)arg0;
- (void)setDownloadTasksByPackages:(NSMapTable *)arg0;
- (void)_removeUntrackedMMCSItems:(NSArray *)arg0;
- (NSMapTable *)downloadTasksByPackages;
- (void)_didDownloadMMCSItem:(NSObject *)arg0 error:(NSError *)arg1;
- (void)_didDownloadMMCSSectionItem:(NSObject *)arg0 task:(NSObject *)arg1 error:(NSError *)arg2;
- (void)_didMakeProgressForMMCSSectionItem:(NSObject *)arg0 task:(NSObject *)arg1;
- (void)_didDownloadMMCSSectionItems:(NSArray *)arg0 task:(NSObject *)arg1 error:(NSError *)arg2;
- (void)_downloadPackageSectionsWithSectionEnumerator:(NSEnumerator *)arg0 task:(NSObject *)arg1 completionBlock:(id /* block */)arg2;
- (void)_downloadPackageSectionAtIndex:(int)arg0 task:(NSObject *)arg1 completionBlock:(id /* block */)arg2;
- (unsigned int)maxPackageDownloadsPerBatch;
- (void)_downloadPackageSectionsWithPendingTasks:(NSMutableDictionary *)arg0 downloadingTasks:(id)arg1 completedTasks:(id)arg2;
- (void)_downloadPackageSectionsWithTask:(NSObject *)arg0 completionBlock:(id /* block */)arg1;
- (NSMutableArray *)MMCSItemsToDownload;
- (void)setMaxPackageDownloadsPerBatch:(unsigned int)arg0;
- (void)_didMakeProgressForMMCSItem:(NSObject *)arg0;
- (void)_didDownloadMMCSItems:(NSArray *)arg0 error:(NSError *)arg1;
- (void)setDownloadPreparationBlock:(id /* block */)arg0;
- (void)setDownloadProgressBlock:(id /* block */)arg0;
- (void)setDownloadCompletionBlock:(id /* block */)arg0;
- (CKDDownloadAssetsOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1 assetsToDownload:(NSArray *)arg2 packageIndexSets:(NSArray *)arg3;
- (void)setAssetsToDownload:(NSArray *)arg0;
- (void)setPackageIndexSets:(NSArray *)arg0;

@end
