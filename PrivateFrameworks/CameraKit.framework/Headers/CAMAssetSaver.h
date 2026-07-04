/* Runtime dump - CAMAssetSaver
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMAssetSaver : NSObject
{
    NSMutableDictionary * __inflightAssets;
    NSMutableArray * __pendingImageJobs;
    NSMutableDictionary * __inProgressAvalancheFileDescriptors;
    NSMutableDictionary * __inProgressNebulaFileDescriptors;
    NSMutableArray * __transientStillImageResponses;
}

@property (readonly, nonatomic) NSMutableDictionary * _inflightAssets;
@property (retain, nonatomic) NSMutableArray * _pendingImageJobs;
@property (retain, nonatomic) NSMutableDictionary * _inProgressAvalancheFileDescriptors;
@property (retain, nonatomic) NSMutableDictionary * _inProgressNebulaFileDescriptors;
@property (readonly, nonatomic) NSMutableArray * _transientStillImageResponses;

+ (CAMAssetSaver *)sharedAssetSaver;
+ (NSString *)takingNebulaIndicatorFilePath;
+ (void)setNebulaCaptureIsBusy:(char)arg0;
+ (void)resetNebulaCaptureIsBusy;
+ (NSString *)takingVideoIndicatorFilePath;
+ (NSString *)takingPhotoIndicatorFilePath;
+ (void)setVideoCaptureIsBusy:(char)arg0;
+ (void)setTakingPhotoIsBusy:(char)arg0;

- (CAMAssetSaver *)init;
- (void).cxx_destruct;
- (void)saveAllTransientResponses;
- (void)batchSavePendingAssetJobsWithCompletion:(id /* block */)arg0;
- (void)saveAvalancheWithUUID:(id)arg0 allAssetUUIDs:(id)arg1 bestAssetUUIDs:(id)arg2 stackAssetUUID:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)dropAllTransientResponses;
- (void)resetAllNebulaProgress;
- (void)setNebulaInProgress:(char)arg0 uuid:(NSUUID *)arg1;
- (NSURLResponse *)saveVideoCaptureResponse:(NSURLResponse *)arg0 assetUUID:(NSString *)arg1 jobTypeOverride:(id)arg2 requestEnqueuedBlock:(id /* block */)arg3;
- (NSString *)_addInflightAssetWithPath:(NSString *)arg0 withUUID:(NSUUID *)arg1 avalancheUUID:(NSString *)arg2;
- (NSURLResponse *)_imageJobForStillImageCaptureResponse:(NSURLResponse *)arg0;
- (NSMutableDictionary *)_inflightAssets;
- (void)queueJobDictionary:(NSDictionary *)arg0 asset:(NSSet *)arg1 requestEnqueuedBlock:(id /* block */)arg2 completionBlock:(/* block */ id)arg3 imageSurface:(NSObject *)arg4 previewImageSurface:(/* block */ id)arg5 transient:(struct __IOSurface *)arg6;
- (NSString *)_addInflightAssetWithPath:(NSString *)arg0 thumbnailImage:(UIImage *)arg1 assetUUID:(NSString *)arg2 metadata:(NSDictionary *)arg3 assetType:(short)arg4 kind:(short)arg5 kindSubtype:(short)arg6 avalancheUUID:(NSString *)arg7 completionHandler:(id /* block */)arg8;
- (NSMutableArray *)_pendingImageJobs;
- (NSURLResponse *)saveStillImageCaptureResponse:(NSURLResponse *)arg0 requestEnqueuedBlock:(id /* block */)arg1 completionBlock:(/* block */ id)arg2;
- (void)requestAssetSavingAccess;
- (void)saveTimelapseCaptureResponse:(NSURLResponse *)arg0 requestEnqueuedBlock:(id /* block */)arg1 completionBlock:(/* block */ id)arg2;
- (void)saveCameraVideoAtPath:(NSString *)arg0 withMetadata:(NSDictionary *)arg1 thumbnailImage:(UIImage *)arg2 createPreviewWellImage:(char)arg3 isSlalom:(char)arg4 videoHandler:(id /* block */)arg5 requestEnqueuedBlock:(/* block */ id)arg6 completionBlock:(id /* block */)arg7;
- (NSURLResponse *)enqueueTransientResponse:(NSURLResponse *)arg0 requestEnqueuedBlock:(id /* block */)arg1 completionBlock:(/* block */ id)arg2;
- (void)set_pendingImageJobs:(NSMutableArray *)arg0;
- (NSMutableDictionary *)_inProgressAvalancheFileDescriptors;
- (void)set_inProgressAvalancheFileDescriptors:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)_inProgressNebulaFileDescriptors;
- (void)set_inProgressNebulaFileDescriptors:(NSMutableDictionary *)arg0;
- (NSMutableArray *)_transientStillImageResponses;
- (void)setAvalancheInProgress:(char)arg0 uuid:(NSUUID *)arg1;
- (NSOperationQueue *)_saveIsolationQueue;
- (void)_setIsTakingPhoto:(char)arg0;
- (UIImage *)saveCameraImage:(UIImage *)arg0 metadata:(NSDictionary *)arg1 additionalProperties:(NSDictionary *)arg2 diagnostics:(NSDictionary *)arg3 previouslyPendingAsset:(NSSet *)arg4 requestEnqueuedBlock:(id /* block */)arg5;
- (void)queueJobDictionary:(NSDictionary *)arg0 completionBlock:(id /* block */)arg1;
- (void)batchSavePendingAssetJobs;
- (void)saveCameraImage:(UIImage *)arg0 metadata:(NSDictionary *)arg1 additionalProperties:(NSDictionary *)arg2 requestEnqueuedBlock:(id /* block */)arg3;

@end
