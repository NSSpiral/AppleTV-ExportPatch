/* Runtime dump - BLPixelImageBuffer
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLPixelImageBuffer : BLImageBuffer

+ (NSObject *)bufferWithSize:(struct CGSize)arg0 colorManagement:(int)arg1;
+ (UIImage *)bufferWithImage:(UIImage *)arg0 colorManagement:(int)arg1;

- (UIImage *)image;
- (void)accessPixelsByContextInBlock:(id /* block */)arg0;
- (void)accessPixelsByAddressInBlock:(id /* block */)arg0;
- (void)drawInContext:(struct CGContext *)arg0 rect:(struct CGRect)arg1;

@end
