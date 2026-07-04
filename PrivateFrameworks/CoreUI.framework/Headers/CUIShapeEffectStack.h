/* Runtime dump - CUIShapeEffectStack
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIShapeEffectStack : NSObject
{
    float shapeOpacity;
    float outputOpacity;
    unsigned int outputBlendMode;
    BOOL hasColorOverlay;
    struct ? colorOverlay;
    BOOL hasInnerGradient;
    struct ? innerGradient;
    BOOL hasInnerGlow;
    struct ? innerGlow;
    BOOL hasInnerShadow;
    struct ? insideShadow;
    BOOL hasOuterGlow;
    struct ? outerGlow;
    BOOL hasEngraveShadow;
    struct ? engraveShadow;
    BOOL hasExtraShadow;
    struct ? extraShadow;
    BOOL hasBevelEmboss;
    struct ? emboss;
    float scalefactor;
    int renderStrategy;
}

@property (readonly) unsigned int outputBlendMode;

+ (CUIShapeEffectStack *)colorWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
+ (CUIShapeEffectStack *)sharedCIContext;
+ (NSObject *)shapeEffectSingleBlurFrom:(NSObject *)arg0 withInteriorFill:(id)arg1 offset:(struct CGPoint)arg2 blurSize:(float)arg3 innerGlowRed:(float)arg4 innerGlowGreen:(float)arg5 innerGlowBlue:(float)arg6 innerGlowOpacity:(float)arg7 innerShadowRed:(float)arg8 innerShadowGreen:(float)arg9 innerShadowBlue:(float)arg10 innerShadowOpacity:(float)arg11 outerGlowRed:(float)arg12 outerGlowGreen:(float)arg13 outerGlowBlue:(float)arg14 outerGlowOpacity:(float)arg15 outerShadowRed:(float)arg16 outerShadowGreen:(float)arg17 outerShadowBlue:(float)arg18 outerShadowOpacity:(float)arg19 hasInsideShadowBlur:(char)arg20 hasOutsideShadowBlur:(char)arg21;
+ (NSObject *)innerGlowFrom:(NSObject *)arg0 withRadius:(float)arg1 red:(float)arg2 green:(float)arg3 blue:(float)arg4 opacity:(float)arg5;
+ (NSObject *)innerShadowFrom:(NSObject *)arg0 withOffset:(struct CGPoint)arg1 radius:(float)arg2 red:(float)arg3 green:(float)arg4 blue:(float)arg5 opacity:(float)arg6;
+ (CUIShapeEffectStack *)adjustOpacity:(id)arg0 by:(float)arg1;
+ (CUIShapeEffectStack *)blend:(id)arg0 over:(SCRCMathExpression *)arg1 blendKind:(unsigned int)arg2;
+ (NSDictionary *)gradientWithParameters:(struct ? *)arg0 inRect:(struct CGRect)arg1;
+ (NSObject *)outerGlowFrom:(NSObject *)arg0 withSize:(unsigned int)arg1 spread:(unsigned int)arg2 red:(float)arg3 green:(float)arg4 blue:(float)arg5 opacity:(float)arg6;
+ (NSObject *)outerShadowFrom:(NSObject *)arg0 withOffset:(struct CGPoint)arg1 size:(unsigned int)arg2 spread:(unsigned int)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7;
+ (NSObject *)bevelEmbossFrom:(NSObject *)arg0 withSize:(unsigned int)arg1 soften:(unsigned int)arg2 angle:(float)arg3 altitude:(float)arg4 highlightRed:(float)arg5 highlightGreen:(float)arg6 highlightBlue:(float)arg7 highlightOpacity:(float)arg8 shadowRed:(float)arg9 shadowGreen:(float)arg10 shadowBlue:(float)arg11 shadowOpacity:(float)arg12;
+ (CUIShapeEffectStack *)composite:(id)arg0 into:(id)arg1;
+ (CUIShapeEffectStack *)composite:(id)arg0 over:(SCRCMathExpression *)arg1;
+ (NSObject *)imageFromBlendWithMask:(NSObject *)arg0 foreground:(id)arg1 background:(UISearchBarBackground *)arg2;
+ (NSDictionary *)preferredCIContextOptions;
+ (NSSet *)offset:(NSSet *)arg0 by:(struct CGPoint)arg1;
+ (CUIShapeEffectStack *)pixelZoomed:(id)arg0 scale:(int)arg1 about:(struct CGPoint)arg2;
+ (NSObject *)unsharpMask:(NSObject *)arg0 radius:(float)arg1 intensity:(float)arg2;
+ (CUIShapeEffectStack *)composite:(id)arg0 outOf:(id)arg1;
+ (CUIShapeEffectStack *)composite:(id)arg0 atop:(id)arg1;
+ (UIImage *)image:(UIImage *)arg0 withOpacity:(float)arg1;
+ (CUIShapeEffectStack *)blur:(UIView *)arg0 radius:(float)arg1;
+ (CUIShapeEffectStack *)colorWithGray:(float)arg0 alpha:(float)arg1;
+ (CUIShapeEffectStack *)rectangle:(struct CGRect)arg0 withRed:(struct CGSize)arg1 green:(float *)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (NSObject *)shadowFrom:(NSObject *)arg0 red:(float)arg1 green:(float)arg2 blue:(float)arg3 opacity:(float)arg4;
+ (CUIShapeEffectStack *)invert:(CoreDAVInvertItem *)arg0;

- (CUIShapeEffectPreset *)effectPreset;
- (CUIShapeEffectStack *)initWithEffectPreset:(CUIShapeEffectPreset *)arg0;
- (UIImage *)processedImageFromShapeImage:(UIImage *)arg0 withScale:(float)arg1;
- (struct CGRect)effectPaddingWithScale:(id)arg0;
- (unsigned int)outputBlendMode;
- (int)cgBlendModeForOutputBlending;
- (void)scaleEffectParametersBy:(float)arg0;
- (void)_updateRenderStrategyFromEffect:(unsigned int)arg0;
- (void)_precompositeColorOverlayInnerGradient;
- (void)_setShapeOpacityFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (void)_setOutputOpacityFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (void)_setColorFillFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (void)_setInteriorGradientFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (void)_addInnerGlowFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (void)_addInnerShadowFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (void)_addOuterGlowFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (void)_addEngraveShadowFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (void)_addBevelEmbossFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (void)_addExtraShadowFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (void)applyCustomForegroundColor:(struct CGColor *)arg0 tintEffectColors:(char)arg1;
- (UIImage *)imageWithAdjustedShapeOpacityOfImage:(UIImage *)arg0;
- (UIImage *)imageWithInteriorGradientFillOfImage:(UIImage *)arg0;
- (UIImage *)imageWithColorOverlayOfImage:(UIImage *)arg0;
- (UIImage *)imageWithInnerGlowOfImage:(UIImage *)arg0;
- (UIImage *)imageWithInnerShadowOfImage:(UIImage *)arg0;
- (UIImage *)imageWithOuterGlowOfImage:(UIImage *)arg0;
- (UIImage *)imageWithEngraveShadowOfImage:(UIImage *)arg0;
- (UIImage *)imageWithExtraShadowOfImage:(UIImage *)arg0;
- (UIImage *)imageWithBevelEmbossOfImage:(UIImage *)arg0;
- (UIImage *)imageWithAdjustedOutputOpacityOfImage:(UIImage *)arg0;
- (UIImage *)imageWithSingleBlurShapeEffectOfImage:(UIImage *)arg0 withInteriorFill:(id)arg1;
- (UIImage *)optimizedSingleBlurEffectCompositeWithShapeImage:(UIImage *)arg0;
- (UIImage *)standardEffectCompositeWithShapeImage:(UIImage *)arg0;
- (UIImage *)compositeEffectStackWithShapeImage:(UIImage *)arg0 withScale:(float)arg1;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg0 withScale:(float)arg1;
- (void)updateOutputBlendingWithInteriorFillHeuristic;
- (void)applyCustomForegroundColor:(struct CGColor *)arg0;
- (struct ?)effectInsetsWithScale:(float)arg0;
- (UIImage *)processedImageFromShapeImage:(UIImage *)arg0;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg0 withScale:(float)arg1 ciContext:(CIContext *)arg2;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg0;
- (NSString *)processedImageFromShapePath:(struct CGPath *)arg0 inRect:(struct CGRect)arg1;

@end
