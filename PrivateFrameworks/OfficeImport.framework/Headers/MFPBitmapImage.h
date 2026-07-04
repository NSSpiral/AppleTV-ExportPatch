/* Runtime dump - MFPBitmapImage
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPBitmapImage : MFPImage
{
    NSData * mBitmapData;
    OITSUImage * mPhoneBitmapImage;
    struct CGSize mPixelSize;
    struct CGSize mPointSize;
}

- (void)dealloc;
- (struct CGSize)pointSize;
- (void).cxx_construct;
- (MFPBitmapImage *)initWithBitmapData:(NSData *)arg0;
- (void)drawInRect:(struct CGRect)arg0 fromRect:(struct CGSize)arg1 unit:(NSString *)arg2 effect:(struct CGRect)arg3;
- (UIImage *)phoneImage;
- (struct CGSize)pixelSize;

@end
