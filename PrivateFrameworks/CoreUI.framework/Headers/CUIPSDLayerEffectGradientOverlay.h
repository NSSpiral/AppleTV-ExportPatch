/* Runtime dump - CUIPSDLayerEffectGradientOverlay
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent
{
    CUIPSDGradient * _gradient;
}

@property (retain) CUIPSDGradient * gradient;

- (void)dealloc;
- (CUIPSDLayerEffectGradientOverlay *)init;
- (void)setGradient:(CUIPSDGradient *)arg0;
- (CUIPSDGradient *)gradient;
- (char)updateLayerEffectPreset:(NSSet *)arg0 error:(id *)arg1;
- (CUIPSDLayerEffectGradientOverlay *)initWithEffectFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (unsigned int)effectType;

@end
