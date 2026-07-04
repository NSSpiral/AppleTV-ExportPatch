/* Runtime dump - DCIMImageUtilities
 * Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface DCIMImageUtilities : NSObject

+ (char)generateThumbnailsFromJPEGData:(NSData *)arg0 inputSize:(struct CGSize)arg1 preCropLargeThumbnailSize:(struct CGSize)arg2 postCropLargeThumbnailSize:(struct CGSize)arg3 preCropSmallThumbnailSize:(struct CGSize)arg4 postCropSmallThumbnailSize:(struct CGSize)arg5 outSmallThumbnailImageRef:(struct CGImage * *)arg6 outLargeThumbnailImageRef:(struct CGImage)arg7 outLargeThumbnailJPEGData:(struct CGImage * *)arg8 generateFiltersBlock:(struct CGImage)arg9;

@end
