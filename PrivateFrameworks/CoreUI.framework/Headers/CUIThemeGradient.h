/* Runtime dump - CUIThemeGradient
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIThemeGradient : NSObject <CUIThemeGradientDrawing>
{
    id gradientEvaluator;
    struct CGFunction * colorShader;
    struct CGColorSpace * colorSpace;
}

- (int)blendMode;
- (void)dealloc;
- (UIColor *)fillColor;
- (NSArray *)colorStops;
- (NSArray *)opacityStops;
- (float)smoothingCoefficient;
- (char)isDithered;
- (void)drawInRect:(struct CGRect)arg0 angle:(struct CGSize)arg1 withContext:(NSObject *)arg2;
- (void)drawInRect:(struct CGRect)arg0 relativeCenterPosition:(struct CGSize)arg1 withContext:(NSObject *)arg2;
- (void)drawInRect:(struct CGRect)arg0 angle:(struct CGSize)arg1;
- (struct _psdGradientColor)_psdGradientColorWithColor:(UIColor *)arg0 colorSpace:(struct CGColorSpace *)arg1;
- (CUIThemeGradient *)initWithColors:(NSArray *)arg0 colorlocations:(id)arg1 colorMidpoints:(id)arg2 opacities:(id)arg3 opacityLocations:(id)arg4 opacityMidpoints:(id)arg5 smoothingCoefficient:(float)arg6 fillColor:(UIColor *)arg7 colorSpace:(struct CGColorSpace *)arg8 dither:(char)arg9;
- (id)_psdGradientColorStopsWithColors:(NSArray *)arg0 locations:(id *)arg1 colorSpace:(struct CGColorSpace *)arg2;
- (id)_psdGradientOpacityStopsWithOpacities:(id)arg0 locations:(id *)arg1;
- (CUIThemeGradient *)_initWithGradientEvaluator:(CUIPSDGradientEvaluator *)arg0 colorSpace:(struct CGColorSpace *)arg1;
- (UIColor *)_colorFromPSDGradientColor:(struct _psdGradientColor)arg0;
- (void)drawFromPoint:(struct CGPoint)arg0 toPoint:(struct CGPoint)arg1 options:(unsigned int)arg2 withContext:(struct CGContext *)arg3;
- (struct CGFunction *)_newColorShaderForDistance:(float)arg0;
- (struct CGFunction *)colorShader;
- (NSObject *)interpolatedColorAtLocation:(float)arg0;
- (CUIThemeGradient *)initWithColors:(NSArray *)arg0 colorlocations:(id)arg1 colorMidpoints:(id)arg2 opacities:(id)arg3 opacityLocations:(id)arg4 opacityMidpoints:(id)arg5 smoothingCoefficient:(float)arg6 fillColor:(UIColor *)arg7 colorSpace:(struct CGColorSpace *)arg8;
- (id)colorLocations;
- (id)opacityLocations;
- (void)drawFromPoint:(struct CGPoint)arg0 toPoint:(struct CGPoint)arg1 options:(unsigned int)arg2;

@end
