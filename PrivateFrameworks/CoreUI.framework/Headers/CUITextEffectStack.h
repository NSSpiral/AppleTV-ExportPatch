/* Runtime dump - CUITextEffectStack
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUITextEffectStack : CUIShapeEffectStack
{
    BOOL renderHighQuality;
}

- (CUITextEffectStack *)initWithEffectPreset:(CUIShapeEffectPreset *)arg0;
- (char)useCoreImageRendering;
- (struct CGContext *)newGlyphMaskContextForBounds:(struct CGRect)arg0 fromContext:(struct CGSize)arg1 withScale:(SKScale *)arg2;
- (void)drawProcessedMask:(struct CGContext *)arg0 atBounds:(struct CGRect)arg1 inContext:(struct CGSize)arg2 withScale:(SKScale *)arg3;
- (struct CGColor *)newBackgroundPatternColorWithSize:(struct CGSize)arg0 contentScale:(float)arg1 forContext:(struct CGContext *)arg2;
- (void)_drawShadow:(struct ?)arg0 forGlyphs:(id)arg1 inContext:(unsigned short *)arg2 usingFont:(unsigned short)arg3 withAdvances:(struct CGContext *)arg4 count:(struct __CTFont *)arg5;
- (void)_drawShadow:(struct ?)arg0 forGlyphs:(id)arg1 inContext:(unsigned short *)arg2 usingFont:(unsigned short)arg3 atPositions:(struct CGContext *)arg4 count:(struct __CTFont *)arg5;
- (void)_drawShadow:(struct ?)arg0 usingQuartz:(id)arg1 inContext:(NSObject *)arg2;
- (float)effectiveInteriorFillOpacity;
- (void)drawGlyphs:(unsigned short *)arg0 inContext:(unsigned short)arg1 usingFont:(struct CGContext *)arg2 withAdvances:(struct __CTFont *)arg3 count:(struct CGSize *)arg4 lineHeight:(struct CGSize)arg5 inBounds:(unsigned long)arg6 atScale:(float)arg7;
- (void)drawGlyphs:(unsigned short *)arg0 inContext:(unsigned short)arg1 usingFont:(struct CGContext *)arg2 atPositions:(struct __CTFont *)arg3 count:(struct CGPoint *)arg4 lineHeight:(struct CGPoint)arg5 inBounds:(unsigned long)arg6 atScale:(float)arg7;
- (void)drawUsingQuartz:(id)arg0 inContext:(/* block */ id)arg1 inBounds:(struct CGContext *)arg2 atScale:(struct CGRect)arg3;

@end
