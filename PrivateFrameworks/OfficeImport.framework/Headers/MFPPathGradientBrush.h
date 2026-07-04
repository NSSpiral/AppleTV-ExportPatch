/* Runtime dump - MFPPathGradientBrush
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPPathGradientBrush : MFPGradientBrush
{
    OITSUColor * mCenterColor;
    struct CGPoint mCenterPoint;
    NSArray * mSurroundColors;
    OITSDBezierPath * mPath;
}

- (void)dealloc;
- (void)setPath:(NSString *)arg0;
- (void).cxx_construct;
- (void)setCenterColor:(UIColor *)arg0;
- (void)setCenterPoint:(struct CGPoint)arg0;
- (void)setSurroundColors:(id)arg0;
- (void)createShading;
- (UIColor *)startColor;
- (UIColor *)endColor;

@end
