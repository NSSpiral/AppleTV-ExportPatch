/* Runtime dump - MFPGradientBrush
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPGradientBrush : MFPBrush
{
    struct CGAffineTransform mTransform;
    NSArray * mBlend;
    NSArray * mColorBlend;
    int mWrapMode;
    NSArray * mStops;
    struct CGShading * mShading;
    struct CGFunction * mShadingFunction;
}

- (void)dealloc;
- (MFPGradientBrush *)init;
- (void)setTransform:(struct CGAffineTransform)arg0;
- (UIColor *)color;
- (void).cxx_construct;
- (void)setBlend:(id)arg0;
- (void)setColorBlend:(id)arg0;
- (void)setWrapMode:(int)arg0;
- (void)createPhoneBrush;
- (void)fillPath:(struct CGPath *)arg0;
- (NSObject *)colorAtPosition:(float)arg0;
- (void)createStopsFromColorBlend;
- (void)createStopsFromBlend;
- (void)createStopsFromStartAndEndColors;
- (void)createShadingFunction;
- (void)createShading;
- (UIColor *)startColor;
- (UIColor *)endColor;

@end
