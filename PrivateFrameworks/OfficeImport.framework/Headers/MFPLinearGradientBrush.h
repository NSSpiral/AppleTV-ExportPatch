/* Runtime dump - MFPLinearGradientBrush
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPLinearGradientBrush : MFPGradientBrush
{
    struct CGRect mBounds;
    OITSUColor * mStartColor;
    OITSUColor * mEndColor;
}

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg0;
- (void).cxx_construct;
- (void)setStartColor:(UIColor *)arg0;
- (void)setEndColor:(UIColor *)arg0;
- (void)createShading;
- (UIColor *)startColor;
- (UIColor *)endColor;

@end
