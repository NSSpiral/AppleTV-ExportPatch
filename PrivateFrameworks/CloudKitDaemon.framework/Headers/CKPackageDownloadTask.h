/* Runtime dump - CKPackageDownloadTask
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKPackageDownloadTask : NSObject <CKDCancelling>
{
    NSError * _error;
    CKPackage * _package;
    CKAsset * _manifestAsset;
    NSArray * _sectionAssets;
    id _itemIndices;
    NSIndexSet * _sectionIndices;
    CKDProgressTracker * _progressTracker;
    CKDMMCSRequestOptions * _MMCSRequestOptions;
    NSObject<OS_dispatch_group> * _group;
    CKDCancelTokenGroup * _cancelTokens;
}

@property (retain) NSError * error;
@property (readonly, nonatomic) CKPackage * package;
@property (retain, nonatomic) CKAsset * manifestAsset;
@property (retain, nonatomic) NSArray * sectionAssets;
@property (retain, nonatomic) id itemIndices;
@property (retain, nonatomic) NSIndexSet * sectionIndices;
@property (retain, nonatomic) CKDProgressTracker * progressTracker;
@property (retain, nonatomic) CKDMMCSRequestOptions * MMCSRequestOptions;
@property (retain, nonatomic) NSObject<OS_dispatch_group> * group;
@property (retain, nonatomic) CKDCancelTokenGroup * cancelTokens;

- (void)cancel;
- (void)setGroup:(NSObject<OS_dispatch_group> *)arg0;
- (NSObject<OS_dispatch_group> *)group;
- (void).cxx_destruct;
- (NSError *)error;
- (CKDCancelTokenGroup *)cancelTokens;
- (CKPackageDownloadTask *)initWithPackage:(CKPackage *)arg0 trackProgress:(char)arg1;
- (void)setManifestAsset:(CKAsset *)arg0;
- (void)setSectionAssets:(NSArray *)arg0;
- (CKPackage *)package;
- (CKAsset *)manifestAsset;
- (NSArray *)sectionAssets;
- (id)itemIndices;
- (void)setItemIndices:(id)arg0;
- (NSIndexSet *)sectionIndices;
- (void)setSectionIndices:(NSIndexSet *)arg0;
- (CKDProgressTracker *)progressTracker;
- (void)setProgressTracker:(CKDProgressTracker *)arg0;
- (CKDMMCSRequestOptions *)MMCSRequestOptions;
- (void)setMMCSRequestOptions:(NSDictionary *)arg0;
- (void)setCancelTokens:(CKDCancelTokenGroup *)arg0;
- (void)setError:(NSError *)arg0;

@end
