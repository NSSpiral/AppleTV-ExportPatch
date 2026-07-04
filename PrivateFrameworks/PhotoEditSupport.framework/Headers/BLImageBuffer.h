/* Runtime dump - BLImageBuffer
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLImageBuffer : NSObject
{
    CIContext * _ciContext;
    struct CGColorSpace * _colorSpace;
    int _colorManagement;
    struct CGSize _size;
}

@property (readonly, nonatomic) struct CGSize size;

- (void)dealloc;
- (struct CGSize)size;
- (UIImage *)image;
- (BLImageBuffer *)initWithSize:(struct CGSize)arg0 colorManagement:(int)arg1;
- (CIImage *)ciImage;
- (void)renderCIImage:(UIImage *)arg0;
- (void)readPixelsByAddressInBlock:(id /* block */)arg0;
- (BLImageBuffer *)initWithSize:(struct CGSize)arg0 colorManagement:(int)arg1 ciContext:(CIContext *)arg2 colorSpace:(struct CGColorSpace *)arg3;

@end
