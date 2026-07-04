/* Runtime dump - PHImageManager
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageManager : NSObject <PHPhotoLibraryChangeObserver>
{
    id _cachedDomain;
    unsigned int _managerID;
}

@property (readonly, nonatomic) unsigned int managerID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)useNewImageManager;
+ (PHImageManager *)defaultManager;
+ (void)initialize;
+ (struct CGSize)sizeOfBestNonFullscreenThumbnailAndContentMode:(int *)arg0;
+ (struct CGSize)fullScreenSizeForScreen:(NSObject *)arg0 contentMode:(int *)arg1;
+ (struct CGSize)sizeForPLFormat:(int)arg0 fallBackSize:(struct CGSize)arg1 contentMode:(int *)arg2;

- (NSString *)_domain;
- (unsigned int)managerID;
- (NSSet *)requestAsynchronousImageForAsset:(NSSet *)arg0 chainedToMasterRequest:(NSURLRequest *)arg1 targetSize:(struct CGSize)arg2 contentMode:(int)arg3 options:(NSDictionary *)arg4 resultHandler:(id /* block */)arg5;
- (NSSet *)requestAsynchronousVideoURLForAsset:(NSSet *)arg0 chainedToMasterRequest:(NSURLRequest *)arg1 options:(NSDictionary *)arg2 resultHandler:(id /* block */)arg3;
- (void)registerRequest:(NSURLRequest *)arg0;
- (void)unregisterRequest:(NSURLRequest *)arg0;
- (NSURL *)_videoAVObjectBuilderFromVideoURL:(NSURL *)arg0 info:(NSDictionary *)arg1 playbackOnly:(char)arg2;
- (NSSet *)requestAsynchronousVideoURLForAsset:(NSSet *)arg0 options:(NSDictionary *)arg1 resultHandler:(id /* block */)arg2;
- (void)unloadImageFilesForAsset:(NSSet *)arg0 minimumFormat:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)requestSynchronousImageForAsset:(NSSet *)arg0 targetSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(NSDictionary *)arg3 completionHandler:(id /* block */)arg4;
- (NSSet *)requestAsynchronousImageForAsset:(NSSet *)arg0 targetSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(NSDictionary *)arg3 resultHandler:(id /* block */)arg4;
- (int)_requestAVAssetForVideo:(id)arg0 options:(NSDictionary *)arg1 resultHandler:(id /* block */)arg2;
- (struct CGImage *)newResizedImageForImage:(struct CGImage *)arg0 withSize:(struct CGSize)arg1 normalizedCropRect:(struct CGRect)arg2 contentMode:(struct CGSize)arg3;
- (NSSet *)thumbnailDataForAsset:(NSSet *)arg0 targetSize:(struct CGSize)arg1;
- (int)requestExportSessionForVideo:(id)arg0 options:(NSDictionary *)arg1 exportPreset:(NSSet *)arg2 resultHandler:(id /* block */)arg3;
- (int)requestAVAssetForVideo:(id)arg0 options:(NSDictionary *)arg1 resultHandler:(id /* block */)arg2;
- (void)requestSynchronousImageForImageLoadingAsset:(NSSet *)arg0 targetSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(NSDictionary *)arg3 completionHandler:(id /* block */)arg4;
- (NSSet *)requestAsynchronousImageForImageLoadingAsset:(NSSet *)arg0 targetSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(NSDictionary *)arg3 resultHandler:(id /* block */)arg4;
- (NSSet *)requestAsynchronousVideoURLForImageLoadingAsset:(NSSet *)arg0 options:(NSDictionary *)arg1 resultHandler:(id /* block */)arg2;
- (void)dealloc;
- (PHImageManager *)init;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (void)cancelImageRequest:(int)arg0;
- (void)photoLibraryDidChange:(PHChange *)arg0;
- (NSSet *)imageForAsset:(NSSet *)arg0 targetSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(NSDictionary *)arg3 outInfo:(id *)arg4;
- (int)requestImageForAsset:(NSSet *)arg0 targetSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(NSDictionary *)arg3 resultHandler:(id /* block */)arg4;
- (int)requestPlayerItemForVideo:(id)arg0 options:(NSDictionary *)arg1 resultHandler:(id /* block */)arg2;
- (int)requestImageDataForAsset:(NSSet *)arg0 options:(NSDictionary *)arg1 resultHandler:(id /* block */)arg2;

@end
