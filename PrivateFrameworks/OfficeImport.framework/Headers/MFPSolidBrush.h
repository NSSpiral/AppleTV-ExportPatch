/* Runtime dump - MFPSolidBrush
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPSolidBrush : MFPBrush
{
    OITSUColor * mColor;
}

- (void)dealloc;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (MFPSolidBrush *)initWithColor:(UIColor *)arg0;
- (void)fillPath:(struct CGPath *)arg0 evenOddRule:(char)arg1;

@end
