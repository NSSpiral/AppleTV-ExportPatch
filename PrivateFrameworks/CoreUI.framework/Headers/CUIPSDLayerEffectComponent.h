/* Runtime dump - CUIPSDLayerEffectComponent
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffectComponent : NSObject
{
    char _visible;
    NSString * _name;
}

@property char visible;
@property (retain) NSString * name;

- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setVisible:(char)arg0;
- (char)visible;
- (char)updateLayerEffectPreset:(NSSet *)arg0 error:(id *)arg1;
- (CUIPSDLayerEffectComponent *)initWithEffectFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (id)_colorFromShapeEffectValue:(id)arg0;
- (unsigned int)effectType;

@end
