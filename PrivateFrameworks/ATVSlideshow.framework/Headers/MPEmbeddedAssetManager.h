/* Runtime dump - MPEmbeddedAssetManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPEmbeddedAssetManager : MPAssetManager

- (char)isAssetAtPathASupportedImage:(UIImage *)arg0;
- (char)isAssetAtPathASupportedMovie:(id)arg0;
- (char)isAssetAtPathASupportedAudio:(id)arg0;
- (double)durationForAssetAtPath:(NSString *)arg0;
- (double)stopTimeForAssetAtPath:(NSString *)arg0;
- (struct CGSize)resolutionForAssetAtPath:(NSString *)arg0;
- (NSString *)absolutePathFromPath:(NSString *)arg0;

@end
