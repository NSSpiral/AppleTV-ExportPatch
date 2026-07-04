/* Runtime dump - CKDRecordDownloadTask
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordDownloadTask : NSObject
{
    CKRecord * _record;
    NSError * _error;
    NSMutableArray * _assetsToDownload;
    NSMutableArray * _packageIndexSets;
    NSObject<OS_dispatch_group> * _group;
    CKDProgressTracker * _progressTracker;
}

@property (retain, nonatomic) CKRecord * record;
@property (retain, nonatomic) NSError * error;
@property (retain, nonatomic) NSMutableArray * assetsToDownload;
@property (retain, nonatomic) NSMutableArray * packageIndexSets;
@property (retain, nonatomic) NSObject<OS_dispatch_group> * group;
@property (retain, nonatomic) CKDProgressTracker * progressTracker;

- (void)setGroup:(NSObject<OS_dispatch_group> *)arg0;
- (NSObject<OS_dispatch_group> *)group;
- (void).cxx_destruct;
- (NSError *)error;
- (CKRecord *)record;
- (void)setRecord:(CKRecord *)arg0;
- (CKDProgressTracker *)progressTracker;
- (void)setProgressTracker:(CKDProgressTracker *)arg0;
- (NSMutableArray *)assetsToDownload;
- (NSMutableArray *)packageIndexSets;
- (void)setAssetsToDownload:(NSMutableArray *)arg0;
- (void)setPackageIndexSets:(NSMutableArray *)arg0;
- (CKDRecordDownloadTask *)initWithRecord:(CKRecord *)arg0 trackProgress:(char)arg1 assetsToDownload:(NSMutableArray *)arg2 packageIndexSets:(NSMutableArray *)arg3;
- (void)didDownloadAsset:(NSSet *)arg0 error:(NSError *)arg1;
- (void)didCompleteTaskWithError:(NSError *)arg0;
- (void)setError:(NSError *)arg0;

@end
