/* Runtime dump - TSAPreviewImageUtility
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAPreviewImageUtility : NSObject

+ (UIImage *)scaleImage:(struct CGImage *)arg0 toSize:(struct CGSize)arg1 scale:(float)arg2;
+ (char)imageIsOpaque:(struct CGImage *)arg0;
+ (void)drawInContext:(struct CGContext *)arg0 bounds:(struct CGRect)arg1 image:(struct CGSize)arg2 imageSize:(struct CGSize)arg3 scaledSize:(struct CGImage *)arg4 scale:(struct CGSize)arg5 flip:(struct CGSize)arg6;
+ (struct CGImage *)newPrerenderedImageFromImage:(struct CGImage *)arg0;

@end
