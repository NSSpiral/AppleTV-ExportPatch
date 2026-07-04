/* Runtime dump - CKPackageUploadTask
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKPackageUploadTask : NSObject <CKDCancelling>
{
    NSError * _error;
    CKPackage * _package;
    CKDMMCSItem * _MMCSManifestItem;
    NSArray * _MMCSSectionItems;
    CKDProgressTracker * _progressTracker;
    CKDMMCSRequestOptions * _MMCSRequestOptions;
    NSObject<OS_dispatch_group> * _group;
    CKDCancelTokenGroup * _cancelTokens;
}

@property (retain) NSError * error;
@property (readonly, nonatomic) CKPackage * package;
@property (retain, nonatomic) CKDMMCSItem * MMCSManifestItem;
@property (retain, nonatomic) NSArray * MMCSSectionItems;
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
- (CKPackageUploadTask *)initWithPackage:(CKPackage *)arg0 trackProgress:(char)arg1;
- (CKPackage *)package;
- (CKDProgressTracker *)progressTracker;
- (void)setProgressTracker:(CKDProgressTracker *)arg0;
- (CKDMMCSRequestOptions *)MMCSRequestOptions;
- (void)setMMCSRequestOptions:(NSDictionary *)arg0;
- (void)setCancelTokens:(CKDCancelTokenGroup *)arg0;
- (void)setMMCSManifestItem:(NSObject *)arg0;
- (void)setMMCSSectionItems:(NSArray *)arg0;
- (CKDMMCSItem *)MMCSManifestItem;
- (NSArray *)MMCSSectionItems;
- (void)setError:(NSError *)arg0;

@end
