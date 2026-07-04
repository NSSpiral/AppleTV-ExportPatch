/* Runtime dump - GLKEffectPropertyConstantColor
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKEffectPropertyConstantColor : GLKEffectProperty
{
    id _color;
    unsigned char _enabled;
}

@property (nonatomic) id color;
@property (nonatomic) unsigned char enabled;

+ (void)setStaticMasksWithVshRoot:(NSObject *)arg0 fshRoot:(NSObject *)arg1;

- (void)dirtyAllUniforms;
- (void)setShaderBindings;
- (void)bind;
- (void)dealloc;
- (GLKEffectPropertyConstantColor *)init;
- (NSString *)description;
- (void)setEnabled:(unsigned char)arg0;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (unsigned char)enabled;

@end
