/* Runtime dump - TSDImageAdjuster
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageAdjuster : NSObject
{
    TSDImageAdjustments * mImageAdjustments;
}

- (struct CGImage *)p_newImageFromCIImage:(UIImage *)arg0 underlyingImage:(struct CGImage *)arg1;
- (TSDImageAdjuster *)initWithImageAdjustments:(TSDImageAdjustments *)arg0;
- (struct CGImage *)newFilteredImageForImage:(struct CGImage *)arg0 enhancedImage:(struct CGImage * *)arg1;
- (void)dealloc;
- (TSDImageAdjuster *)init;

@end
