/* Runtime dump - CUIPSDLayerEffectBevelEmboss
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffectBevelEmboss : CUIPSDLayerEffectComponent
{
    unsigned int _blurSize;
    unsigned int _softenSize;
    short _angle;
    unsigned int _altitude;
    unsigned int _direction;
    int _highlightBlendMode;
    CUIColor * _highlightColor;
    float _highlightOpacity;
    int _shadowBlendMode;
    CUIColor * _shadowColor;
    float _shadowOpacity;
}

@property unsigned int blurSize;
@property unsigned int softenSize;
@property short angle;
@property unsigned int altitude;
@property unsigned int direction;
@property int highlightBlendMode;
@property (retain) CUIColor * highlightColor;
@property float highlightOpacity;
@property int shadowBlendMode;
@property (retain) CUIColor * shadowColor;
@property float shadowOpacity;

- (void)dealloc;
- (CUIPSDLayerEffectBevelEmboss *)init;
- (void)setShadowColor:(CUIColor *)arg0;
- (void)setDirection:(unsigned int)arg0;
- (unsigned int)direction;
- (CUIColor *)shadowColor;
- (CUIColor *)highlightColor;
- (void)setHighlightColor:(CUIColor *)arg0;
- (void)setAngle:(short)arg0;
- (short)angle;
- (void)setShadowOpacity:(float)arg0;
- (void)setAltitude:(unsigned int)arg0;
- (void)setBlurSize:(unsigned int)arg0;
- (void)setSoftenSize:(unsigned int)arg0;
- (void)setHighlightBlendMode:(int)arg0;
- (void)setHighlightOpacity:(float)arg0;
- (void)setShadowBlendMode:(int)arg0;
- (char)updateLayerEffectPreset:(NSSet *)arg0 error:(id *)arg1;
- (CUIPSDLayerEffectBevelEmboss *)initWithEffectFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (unsigned int)blurSize;
- (int)highlightBlendMode;
- (int)shadowBlendMode;
- (unsigned int)softenSize;
- (float)shadowOpacity;
- (float)highlightOpacity;
- (unsigned int)effectType;
- (unsigned int)altitude;

@end
