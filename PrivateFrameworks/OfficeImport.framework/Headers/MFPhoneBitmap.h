/* Runtime dump - MFPhoneBitmap
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhoneBitmap : MFBitmap
{
    OITSUImage * m_image;
}

- (void)dealloc;
- (UIImage *)getImage;

@end
