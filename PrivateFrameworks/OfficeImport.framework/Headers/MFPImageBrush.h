/* Runtime dump - MFPImageBrush
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPImageBrush : MFPBrush
{
    OITSUImage * mPhoneImage;
    OITSUColor * mPhonePatternColor;
}

- (void)dealloc;
- (UIColor *)color;
- (void)fillPath:(struct CGPath *)arg0;
- (MFPImageBrush *)initWithPhoneImage:(SAPhone *)arg0;

@end
