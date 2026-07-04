/* Runtime dump - AVAssetImageGenerator
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetImageGenerator : NSObject
{
    AVAssetImageGeneratorInternal * _priv;
}

@property (readonly, nonatomic) AVAsset * asset;
@property (nonatomic) char appliesPreferredTrackTransform;
@property (nonatomic) struct CGSize maximumSize;
@property (copy, nonatomic) NSString * apertureMode;
@property (copy, nonatomic) AVVideoComposition * videoComposition;
@property (readonly, nonatomic) <AVVideoCompositing> * customVideoCompositor;
@property (nonatomic) struct ? requestedTimeToleranceBefore;
@property (nonatomic) struct ? requestedTimeToleranceAfter;

+ (AVAssetImageGenerator *)assetImageGeneratorWithAsset:(AVAsset *)arg0;

- (char)appliesPreferredTrackTransform;
- (struct CGSize)maximumSize;
- (NSString *)apertureMode;
- (struct ?)requestedTimeToleranceBefore;
- (struct ?)requestedTimeToleranceAfter;
- (AVVideoComposition *)videoComposition;
- (NSError *)_NSErrorForError:(long)arg0;
- (struct CGSize)_scaledSizeForRenderSize:(struct CGSize)arg0;
- (struct __CFDictionary *)_createPixelBufferAttributesWithSize:(struct CGSize)arg0;
- (void)setVideoComposition:(AVVideoComposition *)arg0;
- (NSObject *)_makeAutoreleasedAssetReader;
- (struct CGImage *)_copyCGImageAtTime:(struct ?)arg0 usingAssetReader:(NSObject *)arg1 error:(id *)arg2;
- (NSDictionary *)_optionsDictionary;
- (char)_ensureFigAssetImageGeneratorReturningError:(id *)arg0;
- (<AVVideoCompositing> *)customVideoCompositor;
- (NSObject *)_requestWithRequestID:(NSObject *)arg0;
- (void)_didGenerateCGImage:(UIImage *)arg0;
- (void)_failedToGenerateCGImage:(UIImage *)arg0;
- (void)_serverDied;
- (void)dealloc;
- (AVAssetImageGenerator *)init;
- (AVAssetImageGenerator *)initWithAsset:(AVAsset *)arg0;
- (AVAsset *)asset;
- (void)generateCGImagesAsynchronouslyForTimes:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)cancelAllCGImageGeneration;
- (void)setAppliesPreferredTrackTransform:(char)arg0;
- (void)setMaximumSize:(struct CGSize)arg0;
- (struct CGImage *)copyCGImageAtTime:(struct ?)arg0 actualTime:(struct ? *)arg1 error:(id *)arg2;
- (void)finalize;
- (void)setApertureMode:(NSString *)arg0;
- (void)setRequestedTimeToleranceBefore:(struct ?)arg0;
- (void)setRequestedTimeToleranceAfter:(struct ?)arg0;

@end
