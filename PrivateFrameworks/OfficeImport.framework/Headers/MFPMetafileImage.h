/* Runtime dump - MFPMetafileImage
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPMetafileImage : MFPImage
{
    NSData * mMetafileData;
}

- (void)dealloc;
- (MFPMetafileImage *)initWithMetafileData:(NSData *)arg0;
- (void)drawInRect:(struct CGRect)arg0 fromRect:(struct CGSize)arg1 unit:(NSString *)arg2 effect:(struct CGRect)arg3;
- (UIImage *)phoneImage;

@end
