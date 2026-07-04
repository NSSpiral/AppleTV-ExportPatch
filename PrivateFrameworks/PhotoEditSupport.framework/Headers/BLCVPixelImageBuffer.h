/* Runtime dump - BLCVPixelImageBuffer
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLCVPixelImageBuffer : BLPixelImageBuffer
{
    struct __CVBuffer * _pixelBuffer;
    struct CGContext * _cgcontext;
}

- (struct __CVBuffer *)pixelBuffer;
- (void)dealloc;
- (BLCVPixelImageBuffer *)initWithSize:(struct CGSize)arg0 colorManagement:(int)arg1;
- (void)accessPixelsByContextInBlock:(id /* block */)arg0;
- (CIImage *)ciImage;
- (void)renderCIImage:(UIImage *)arg0;
- (void)accessPixelsByAddressInBlock:(id /* block */)arg0;
- (void)readPixelsByAddressInBlock:(id /* block */)arg0;
- (struct CGContext *)cgcontext;

@end
