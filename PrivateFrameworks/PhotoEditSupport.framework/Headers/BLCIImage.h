/* Runtime dump - BLCIImage
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLCIImage : BLImage

- (BLCIImage *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGImage *)CGImage;
- (BLCIImage *)initWithCIImage:(UIImage *)arg0;
- (UIImage *)UIImage;
- (BLCIImage *)initWithFileAtURL:(NSURL *)arg0;

@end
