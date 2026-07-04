/* Runtime dump - CKDUploadAssetsOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDUploadAssetsOperation : CKDDatabaseOperation
{
    id _uploadPreparationBlock;
    id _uploadProgressBlock;
    id _uploadCompletionBlock;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _assetsToUpload;
    NSMutableArray * _MMCSItemsToUpload;
    NSMapTable * _uploadTasksByPackages;
    NSMutableArray * _packageManifests;
    NSMutableArray * _openedPackages;
    CKDCancelTokenGroup * _cancelTokens;
    unsigned int _maxPackageUploadsPerBatch;
}

@property (copy, nonatomic) id uploadPreparationBlock;
@property (copy, nonatomic) id uploadProgressBlock;
@property (copy, nonatomic) id uploadCompletionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) NSArray * assetsToUpload;
@property (retain, nonatomic) NSMutableArray * MMCSItemsToUpload;
@property (retain, nonatomic) NSMapTable * uploadTasksByPackages;
@property (retain, nonatomic) NSMutableArray * packageManifests;
@property (retain, nonatomic) NSMutableArray * openedPackages;
@property (retain, nonatomic) CKDCancelTokenGroup * cancelTokens;
@property (nonatomic) unsigned int maxPackageUploadsPerBatch;

- (void)cancel;
- (void)main;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)finishWithError:(NSError *)arg0;
- (void)setUploadCompletionBlock:(id /* block */)arg0;
- (NSObject *)nameForState:(unsigned int)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (char)makeStateTransition;
- (CKDCancelTokenGroup *)cancelTokens;
- (void)setCancelTokens:(CKDCancelTokenGroup *)arg0;
- (void)_didPrepareAsset:(NSSet *)arg0;
- (void)_didMakeProgressForAsset:(NSSet *)arg0 progress:(double)arg1;
- (void)_didMakeProgressForMMCSSectionItem:(NSObject *)arg0 task:(NSObject *)arg1;
- (void)_didMakeProgressForMMCSItem:(NSObject *)arg0;
- (char)_prepareForUpload;
- (char)_fetchUploadTokens;
- (char)_upload;
- (NSMutableArray *)openedPackages;
- (void)setOpenedPackages:(NSMutableArray *)arg0;
- (id /* block */)uploadPreparationBlock;
- (id /* block */)uploadProgressBlock;
- (id /* block */)uploadCompletionBlock;
- (void)_didUploadAsset:(NSSet *)arg0 error:(NSError *)arg1;
- (void)setMMCSItemsToUpload:(id)arg0;
- (void)setUploadTasksByPackages:(NSMapTable *)arg0;
- (NSArray *)assetsToUpload;
- (void)_openPackage:(id)arg0;
- (char)_planSectionsForPackage:(id)arg0 error:(id *)arg1;
- (void)setPackageManifests:(NSMutableArray *)arg0;
- (void)_didPrepareMMCSItems:(NSArray *)arg0 uploadTasksByPackages:(NSMapTable *)arg1 error:(NSError *)arg2;
- (NSMapTable *)uploadTasksByPackages;
- (NSMutableArray *)MMCSItemsToUpload;
- (void)_didFechUploadTokensForMMCSItems:(NSArray *)arg0 error:(NSError *)arg1;
- (void)_didUploadMMCSSectionItem:(NSObject *)arg0 task:(NSObject *)arg1 error:(NSError *)arg2;
- (void)_didUploadMMCSSectionItems:(NSArray *)arg0 task:(NSObject *)arg1 error:(NSError *)arg2;
- (void)_uploadPackageSectionsWithEnumerator:(NSEnumerator *)arg0 task:(NSObject *)arg1 completionBlock:(id /* block */)arg2;
- (void)_uploadPackageSection:(id)arg0 task:(NSObject *)arg1 completionBlock:(id /* block */)arg2;
- (void)_closePackage:(id)arg0;
- (unsigned int)maxPackageUploadsPerBatch;
- (void)_uploadPackageSectionsWithPendingTasks:(NSMutableDictionary *)arg0 uploadingTasks:(id)arg1 completedTasks:(id)arg2;
- (void)_uploadPackageSectionsWithTask:(NSObject *)arg0 completionBlock:(id /* block */)arg1;
- (void)_didUploadMMCSItem:(NSObject *)arg0 error:(NSError *)arg1;
- (void)setMaxPackageUploadsPerBatch:(unsigned int)arg0;
- (void)_didUploadPackageWithTask:(NSObject *)arg0;
- (void)_didUploadMMCSItems:(NSArray *)arg0 error:(NSError *)arg1;
- (NSMutableArray *)packageManifests;
- (void)_closeAllPackages;
- (void)_removePackageManifests;
- (void)setUploadPreparationBlock:(id /* block */)arg0;
- (void)setUploadProgressBlock:(id /* block */)arg0;
- (CKDUploadAssetsOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1 assetsToUpload:(NSArray *)arg2;
- (void)setAssetsToUpload:(NSArray *)arg0;

@end
