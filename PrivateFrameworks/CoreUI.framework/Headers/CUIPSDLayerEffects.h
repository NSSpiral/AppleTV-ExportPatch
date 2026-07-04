/* Runtime dump - CUIPSDLayerEffects
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffects : NSObject
{
    char _visible;
    float _effectScale;
    NSMutableDictionary * _effectList;
}

@property char visible;
@property float effectScale;
@property (copy) NSMutableDictionary * effectList;

- (void)dealloc;
- (CUIPSDLayerEffects *)init;
- (void)setVisible:(char)arg0;
- (char)visible;
- (void)setEffectScale:(float)arg0;
- (void)addLayerEffectComponent:(CUIPSDLayerEffectComponent *)arg0;
- (NSMutableDictionary *)effectList;
- (float)effectScale;
- (id)dropShadow;
- (void)setEffectList:(NSMutableDictionary *)arg0;

@end
