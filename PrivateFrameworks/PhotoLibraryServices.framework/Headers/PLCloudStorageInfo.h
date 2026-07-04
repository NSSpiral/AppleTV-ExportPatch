/* Runtime dump - PLCloudStorageInfo
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudStorageInfo : NSObject
{
    long long _totalBytes;
    long long _availableBytes;
    long long _usedBytes;
    long long _cameraRollBackupBytes;
}

@property (nonatomic) long long totalBytes;
@property (nonatomic) long long availableBytes;
@property (nonatomic) long long usedBytes;
@property (nonatomic) long long cameraRollBackupBytes;

+ (PLCloudStorageInfo *)storageInfoWithTotal:(long long)arg0 available:(long long)arg1 used:(long long)arg2 cameraRollBackupBytes:(long long)arg3;

- (PLCloudStorageInfo *)initWithTotalQuotaBytes:(long long)arg0 totalAvailableBytes:(long long)arg1 totalUsedBytes:(long long)arg2 cameraRollBackupBytes:(long long)arg3;
- (long long)totalBytes;
- (void)setTotalBytes:(long long)arg0;
- (long long)availableBytes;
- (void)setAvailableBytes:(long long)arg0;
- (long long)usedBytes;
- (void)setUsedBytes:(long long)arg0;
- (long long)cameraRollBackupBytes;
- (void)setCameraRollBackupBytes:(long long)arg0;

@end
