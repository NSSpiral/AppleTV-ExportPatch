/* Runtime dump - CUIPSDLayerEffectInnerGlow
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffectInnerGlow : CUIPSDLayerEffectComponent
{
    int _blendMode;
    float _opacity;
    CUIColor * _color;
    unsigned int _blurSize;
}

@property int blendMode;
@property float opacity;
@property (retain) CUIColor * color;
@property unsigned int blurSize;

- (int)blendMode;
- (void)setBlendMode:(int)arg0;
- (void)dealloc;
- (CUIPSDLayerEffectInnerGlow *)init;
- (float)opacity;
- (void)setOpacity:(float)arg0;
- (CUIColor *)color;
- (void)setColor:(CUIColor *)arg0;
- (void)setBlurSize:(unsigned int)arg0;
- (char)updateLayerEffectPreset:(NSSet *)arg0 error:(id *)arg1;
- (CUIPSDLayerEffectInnerGlow *)initWithEffectFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (unsigned int)blurSize;
- (unsigned int)effectType;

@end
