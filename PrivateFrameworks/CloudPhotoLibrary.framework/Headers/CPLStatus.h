/* Runtime dump - CPLStatus
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLStatus : NSObject
{
    NSURL * _statusFileURL;
    NSMutableDictionary * _status;
    NSObject<OS_dispatch_queue> * _lock;
    <CPLStatusDelegate> * _delegate;
}

@property (nonatomic) NSDate * lastSuccessfulSyncDate;
@property (nonatomic) char hasChangesToProcess;
@property (nonatomic) char isExceedingQuota;
@property (nonatomic) NSDate * exitDeleteTime;
@property (nonatomic) char iCloudLibraryHasBeenWiped;
@property (nonatomic) char iCloudLibraryExists;
@property (readonly, nonatomic) NSDictionary * cloudAssetCountPerType;
@property (weak, nonatomic) <CPLStatusDelegate> * delegate;
@property (readonly, nonatomic) NSDate * cloudAssetCountPerTypeLastCheckDate;

+ (NSObject *)statusForSharedLibrary;

- (void)setDelegate:(<CPLStatusDelegate> *)arg0;
- (<CPLStatusDelegate> *)delegate;
- (void).cxx_destruct;
- (void)_save;
- (void)setHasChangesToProcess:(char)arg0;
- (CPLStatus *)initWithClientLibraryBaseURL:(NSURL *)arg0;
- (void)_loadIfNecessary;
- (void)refetchFromDisk;
- (void)setLastSuccessfulSyncDate:(NSDate *)arg0;
- (void)setIsExceedingQuota:(char)arg0;
- (void)setExitDeleteTime:(NSDate *)arg0;
- (void)setICloudLibraryHasBeenWiped:(char)arg0;
- (char)iCloudLibraryExists;
- (void)setICloudLibraryExists:(char)arg0;
- (void)setCloudAssetCountPerType:(NSDictionary *)arg0 updateCheckDate:(char)arg1;
- (NSDate *)cloudAssetCountPerTypeLastCheckDate;
- (void)_statusDidChange;
- (NSString *)statusDescription;
- (NSDictionary *)cloudAssetCountPerType;
- (NSDate *)lastSuccessfulSyncDate;
- (char)iCloudLibraryHasBeenWiped;
- (char)hasChangesToProcess;
- (char)isExceedingQuota;
- (NSDate *)exitDeleteTime;

@end
