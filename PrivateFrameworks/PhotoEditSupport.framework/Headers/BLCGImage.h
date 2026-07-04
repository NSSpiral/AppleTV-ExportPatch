/* Runtime dump - BLCGImage
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLCGImage : BLImage

- (BLCGImage *)copyWithZone:(struct _NSZone *)arg0;
- (BLCGImage *)initWithCGImage:(struct CGImage *)arg0;
- (CIImage *)CIImage;
- (UIImage *)UIImage;
- (BLCGImage *)initWithFileAtURL:(NSURL *)arg0;

@end
