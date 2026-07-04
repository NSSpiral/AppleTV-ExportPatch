/* Runtime dump - CUIPSDLayerEffectDropShadow
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffectDropShadow : CUIPSDLayerEffectComponent
{
    int _blendMode;
    float _opacity;
    CUIColor * _color;
    short _angle;
    unsigned int _distance;
    unsigned int _blurSize;
    unsigned int _spread;
}

@property int blendMode;
@property float opacity;
@property (retain) CUIColor * color;
@property short angle;
@property unsigned int distance;
@property unsigned int blurSize;
@property unsigned int spread;

- (int)blendMode;
- (void)setBlendMode:(int)arg0;
- (void)dealloc;
- (CUIPSDLayerEffectDropShadow *)init;
- (float)opacity;
- (void)setOpacity:(float)arg0;
- (CUIColor *)color;
- (void)setColor:(CUIColor *)arg0;
- (void)setAngle:(short)arg0;
- (short)angle;
- (void)setBlurSize:(unsigned int)arg0;
- (void)setSpread:(unsigned int)arg0;
- (char)updateLayerEffectPreset:(NSSet *)arg0 error:(id *)arg1;
- (CUIPSDLayerEffectDropShadow *)initWithEffectFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (unsigned int)blurSize;
- (unsigned int)spread;
- (unsigned int)effectType;
- (void)setDistance:(unsigned int)arg0;
- (unsigned int)distance;

@end
