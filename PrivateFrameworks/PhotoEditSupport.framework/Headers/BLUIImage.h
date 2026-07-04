/* Runtime dump - BLUIImage
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLUIImage : BLImage

- (float)scale;
- (BLUIImage *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGImage *)CGImage;
- (int)imageOrientation;
- (CIImage *)CIImage;
- (BLUIImage *)initWithUIImage:(UIImage *)arg0;
- (BLUIImage *)initWithFileAtURL:(NSURL *)arg0;

@end
