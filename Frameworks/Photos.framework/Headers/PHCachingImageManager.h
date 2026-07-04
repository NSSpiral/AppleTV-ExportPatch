/* Runtime dump - PHCachingImageManager
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCachingImageManager : PHImageManager
{
    char _allowsCachingHighQualityImages;
}

@property (nonatomic) char allowsCachingHighQualityImages;

- (NSObject *)_highPriorityRequestWaitGroup;
- (char)canAvoidTouchingAssetsWithTargetSize:(struct CGSize)arg0 contentMode:(int)arg1 options:(NSDictionary *)arg2 outBestFormat:(int *)arg3 outBestFormatIsTable:(char *)arg4 outDegradedFormat:(int *)arg5 outDegradedFormatIsTable:(char *)arg6;
- (NSArray *)approximateThumbnailIndexesForAssets:(NSArray *)arg0;
- (NSSet *)_fireCloudDownloadOfImageForAsset:(NSSet *)arg0 format:(int)arg1 optimalSourcePixelSize:(struct CGSize)arg2 completionHandler:(id /* block */)arg3;
- (void)startCachingImagesForAssets:(NSArray *)arg0 targetSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(NSDictionary *)arg3;
- (void)stopCachingImagesForAssets:(NSArray *)arg0 targetSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(NSDictionary *)arg3;
- (void)stopCachingImagesForAllAssets;
- (char)allowsCachingHighQualityImages;
- (void)startCachingImagesForImageLoadingAssets:(NSArray *)arg0 targetSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(NSDictionary *)arg3;
- (void)stopCachingImagesForImageLoadingAssets:(NSArray *)arg0 targetSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(NSDictionary *)arg3;
- (PHCachingImageManager *)init;
- (NSString *)description;
- (void)setAllowsCachingHighQualityImages:(char)arg0;

@end
