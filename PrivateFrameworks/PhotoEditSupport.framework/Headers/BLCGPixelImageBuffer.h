/* Runtime dump - BLCGPixelImageBuffer
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLCGPixelImageBuffer : BLPixelImageBuffer
{
    struct CGContext * _bitmapContext;
    unsigned long _rowBytes;
    NSMutableData * _bitmapData;
}

@property (retain, nonatomic) NSMutableData * bitmapData;

- (void)dealloc;
- (BLCGPixelImageBuffer *)initWithSize:(struct CGSize)arg0 colorManagement:(int)arg1;
- (void)setBitmapData:(NSMutableData *)arg0;
- (NSMutableData *)bitmapData;
- (void)accessPixelsByContextInBlock:(id /* block */)arg0;
- (CIImage *)ciImage;
- (void)renderCIImage:(UIImage *)arg0;
- (void)accessPixelsByAddressInBlock:(id /* block */)arg0;
- (void)readPixelsByAddressInBlock:(id /* block */)arg0;

@end
