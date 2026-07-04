/* Runtime dump - CUIPSDLayerEffectOuterGlow
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffectOuterGlow : CUIPSDLayerEffectComponent
{
    int _blendMode;
    float _opacity;
    CUIColor * _color;
    unsigned int _blurSize;
    unsigned int _spread;
}

@property int blendMode;
@property float opacity;
@property (retain) CUIColor * color;
@property unsigned int blurSize;
@property unsigned int spread;

- (int)blendMode;
- (void)setBlendMode:(int)arg0;
- (void)dealloc;
- (CUIPSDLayerEffectOuterGlow *)init;
- (float)opacity;
- (void)setOpacity:(float)arg0;
- (CUIColor *)color;
- (void)setColor:(CUIColor *)arg0;
- (void)setBlurSize:(unsigned int)arg0;
- (void)setSpread:(unsigned int)arg0;
- (char)updateLayerEffectPreset:(NSSet *)arg0 error:(id *)arg1;
- (CUIPSDLayerEffectOuterGlow *)initWithEffectFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (unsigned int)blurSize;
- (unsigned int)spread;
- (unsigned int)effectType;

@end
