/* Runtime dump - CUIPSDLayerEffectColorOverlay
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffectColorOverlay : CUIPSDLayerEffectComponent
{
    int _blendMode;
    float _opacity;
    CUIColor * _color;
}

@property int blendMode;
@property (retain) CUIColor * color;
@property float opacity;

- (int)blendMode;
- (void)setBlendMode:(int)arg0;
- (void)dealloc;
- (CUIPSDLayerEffectColorOverlay *)init;
- (float)opacity;
- (void)setOpacity:(float)arg0;
- (CUIColor *)color;
- (void)setColor:(CUIColor *)arg0;
- (char)updateLayerEffectPreset:(NSSet *)arg0 error:(id *)arg1;
- (CUIPSDLayerEffectColorOverlay *)initWithEffectFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (unsigned int)effectType;

@end
