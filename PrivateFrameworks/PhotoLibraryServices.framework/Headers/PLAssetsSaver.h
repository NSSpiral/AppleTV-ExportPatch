/* Runtime dump - PLAssetsSaver
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetsSaver : NSObject
{
    NSMutableArray * __pendingSaveAssetJobs;
}

@property (retain, nonatomic) NSMutableArray * _pendingSaveAssetJobs;

+ (PLAssetsSaver *)sharedAssetsSaver;
+ (NSError *)publicAssetsLibraryErrorFromPrivateError:(NSError *)arg0;
+ (NSString *)publicAssetsLibraryErrorFromPrivateDomain:(NSString *)arg0 withPrivateCode:(int)arg1;

- (void)dealloc;
- (PLAssetsSaver *)init;
- (void)copyAssetToCameraRoll:(id)arg0;
- (void)deletePhotoStreamDataForStreamID:(NSObject *)arg0;
- (void)setAvalancheInProgress:(char)arg0 uuid:(NSUUID *)arg1;
- (NSOperationQueue *)_saveIsolationQueue;
- (NSMutableArray *)_pendingSaveAssetJobs;
- (void)_setIsTakingPhoto:(char)arg0;
- (void)queueJobDictionary:(NSDictionary *)arg0 asset:(NSSet *)arg1 requestEnqueuedBlock:(id /* block */)arg2 completionBlock:(/* block */ id)arg3 imageSurface:(NSObject *)arg4 previewImageSurface:(/* block */ id)arg5;
- (UIImage *)saveCameraImage:(UIImage *)arg0 metadata:(NSDictionary *)arg1 additionalProperties:(NSDictionary *)arg2 diagnostics:(NSDictionary *)arg3 previouslyPendingAsset:(NSSet *)arg4 requestEnqueuedBlock:(id /* block */)arg5;
- (NSString *)_addCameraAssetToLibraryWithPath:(NSString *)arg0 thumbnailImage:(UIImage *)arg1 assetUUID:(NSString *)arg2 metadata:(NSDictionary *)arg3 assetType:(short)arg4 kind:(short)arg5 kindSubtype:(short)arg6 avalancheUUID:(NSString *)arg7 completionHandler:(id /* block */)arg8;
- (void)queueJobDictionary:(NSDictionary *)arg0 completionBlock:(id /* block */)arg1;
- (void)_saveImage:(UIImage *)arg0 imageData:(NSData *)arg1 properties:(NSDictionary *)arg2 completionBlock:(id /* block */)arg3;
- (UIImage *)_createWriteImageCompletionBlockWithImage:(SEL)arg0 target:(NSObject *)arg1 selector:(NSString *)arg2 contextInfo:(SEL)arg3;
- (void)_saveVideoAtPath:(NSString *)arg0 properties:(NSDictionary *)arg1 completionBlock:(id /* block */)arg2;
- (NSString *)_createWriteVideoCompletionBlockWithVideoPath:(SEL)arg0 target:(NSObject *)arg1 selector:(NSString *)arg2 contextInfo:(SEL)arg3;
- (void)_requestAccess;
- (NSObject *)pathForNewAssetOfType:(short)arg0 extension:(id *)arg1;
- (id)requestSynchronousImageForAssetOID:(id)arg0 withFormat:(int)arg1 allowPlaceholder:(char)arg2 wantURLOnly:(char)arg3 networkAccessAllowed:(char)arg4 trackCPLDownload:(char)arg5 outImageDataInfo:(id *)arg6 outCPLDownloadContext:(id *)arg7;
- (void)requestAsynchronousImageForAssetOID:(id)arg0 withFormat:(int)arg1 allowPlaceholder:(char)arg2 wantURLOnly:(char)arg3 networkAccessAllowed:(char)arg4 trackCPLDownload:(char)arg5 completionBlock:(id /* block */)arg6;
- (void)batchSavePendingAssetJobs;
- (void)saveCameraImage:(UIImage *)arg0 metadata:(NSDictionary *)arg1 additionalProperties:(NSDictionary *)arg2 requestEnqueuedBlock:(id /* block */)arg3;
- (void)saveCameraVideoAtPath:(NSString *)arg0 withMetadata:(NSDictionary *)arg1 thumbnailImage:(UIImage *)arg2 createPreviewWellImage:(char)arg3 progressStack:(PLProgressStack *)arg4 isSlalom:(char)arg5 assetAdjustments:(PFAssetAdjustments *)arg6 videoHandler:(id /* block */)arg7 requestEnqueuedBlock:(/* block */ id)arg8 completionBlock:(id /* block */)arg9;
- (void)regenerateVideoThumbnailsForVideo:(id)arg0 withCreationDate:(NSDate *)arg1 progressStack:(PLProgressStack *)arg2 completionBlock:(id /* block */)arg3;
- (void)saveCameraAvalancheWithUUID:(id)arg0 allAssetUUIDs:(id)arg1 allAssets:(NSArray *)arg2 stackAsset:(NSSet *)arg3 completionBlock:(id /* block */)arg4;
- (void)saveImageRef:(struct CGImage *)arg0 orientation:(int)arg1 imageData:(NSData *)arg2 properties:(NSDictionary *)arg3 completionBlock:(id /* block */)arg4;
- (void)saveImage:(UIImage *)arg0 properties:(NSDictionary *)arg1 completionBlock:(id /* block */)arg2;
- (void)saveImageData:(NSData *)arg0 properties:(NSDictionary *)arg1 completionBlock:(id /* block */)arg2;
- (void)saveImage:(UIImage *)arg0 imageData:(NSData *)arg1 properties:(NSDictionary *)arg2 completionTarget:(NSObject *)arg3 completionSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)saveVideoAtPath:(NSString *)arg0 properties:(NSDictionary *)arg1 completionBlock:(id /* block */)arg2;
- (void)saveVideoAtPath:(NSString *)arg0 properties:(NSDictionary *)arg1 completionTarget:(NSObject *)arg2 completionSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)savePhotoStreamImage:(UIImage *)arg0 imageData:(NSData *)arg1 properties:(NSDictionary *)arg2 completionBlock:(id /* block */)arg3;
- (void)savePhotoStreamVideoAtPath:(NSString *)arg0 properties:(NSDictionary *)arg1 completionBlock:(id /* block */)arg2;
- (void)saveOneWayATCSyncedImage:(UIImage *)arg0 imageData:(NSData *)arg1 eventUUID:(NSString *)arg2 properties:(NSDictionary *)arg3 completionBlock:(id /* block */)arg4;
- (void)deletePhotoStreamAssetsWithUUIDs:(id)arg0 streamID:(unsigned short)arg1;
- (void)reenqueueAssetUUIDsForPhotoStreamPublication:(NSObject *)arg0;
- (void)importFilesWithMasterPath:(KNMasterSlide *)arg0 sidecarFileInfo:(NSDictionary *)arg1 intoEventWithName:(NSString *)arg2 importSessionIdentifier:(NSString *)arg3 isPhotoStreamsPublishCandidate:(char)arg4;
- (void)saveSyncedAssets:(NSArray *)arg0 completionBlock:(id /* block */)arg1;
- (void)set_pendingSaveAssetJobs:(NSMutableArray *)arg0;

@end
