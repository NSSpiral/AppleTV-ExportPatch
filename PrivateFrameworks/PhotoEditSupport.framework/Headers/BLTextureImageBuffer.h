/* Runtime dump - BLTextureImageBuffer
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLTextureImageBuffer : BLImageBuffer
{
    unsigned int _accumlatorTexture;
    unsigned int _accumlatorFramebuffer;
    EAGLContext * _eaglContext;
    CIImage * _ciImage;
}

- (void)dealloc;
- (BLTextureImageBuffer *)initWithSize:(struct CGSize)arg0 colorManagement:(int)arg1;
- (CIImage *)ciImage;
- (void)renderCIImage:(UIImage *)arg0;
- (void)readPixelsByAddressInBlock:(id /* block */)arg0;

@end
