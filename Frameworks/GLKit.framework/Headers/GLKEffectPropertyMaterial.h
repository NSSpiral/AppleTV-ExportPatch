/* Runtime dump - GLKEffectPropertyMaterial
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKEffectPropertyMaterial : GLKEffectProperty
{
    id _ambientColor;
    id _diffuseColor;
    id _specularColor;
    id _emissiveColor;
    float _shininess;
    unsigned long long * _effectDirtyUniforms;
    int _ambientColorLoc;
    int _diffuseColorLoc;
    int _specularColorLoc;
    int _emissiveColorLoc;
    int _shininessLoc;
    struct GLKBigInt_s _colorMaterialEnabledMask;
}

@property (nonatomic) id ambientColor;
@property (nonatomic) id diffuseColor;
@property (nonatomic) id specularColor;
@property (nonatomic) id emissiveColor;
@property (nonatomic) float shininess;
@property (nonatomic) int _ambientColorLoc;
@property (nonatomic) int _diffuseColorLoc;
@property (nonatomic) int _specularColorLoc;
@property (nonatomic) int _emissiveColorLoc;
@property (nonatomic) int _shininessLoc;
@property (nonatomic) unsigned long long * effectDirtyUniforms;
@property (nonatomic) struct GLKBigInt_s _colorMaterialEnabledMask;

+ (void)setStaticMasksWithVshRoot:(NSObject *)arg0 fshRoot:(NSObject *)arg1;

- (void)dirtyAllUniforms;
- (void)setEffectDirtyUniforms:(unsigned long long *)arg0;
- (BOOL)includeVshShaderTextForRootNode:(NSObject *)arg0;
- (BOOL)includeFshShaderTextForRootNode:(NSObject *)arg0;
- (void)initializeMasks;
- (void)setShaderBindings;
- (UIColor *)emissiveColor;
- (void)setDiffuseColor:(UIColor *)arg0;
- (void)setSpecularColor:(UIColor *)arg0;
- (UIColor *)diffuseColor;
- (UIColor *)specularColor;
- (unsigned long long *)effectDirtyUniforms;
- (void)setEmissiveColor:(UIColor *)arg0;
- (int)_ambientColorLoc;
- (void)set_ambientColorLoc:(int)arg0;
- (int)_diffuseColorLoc;
- (void)set_diffuseColorLoc:(int)arg0;
- (int)_specularColorLoc;
- (void)set_specularColorLoc:(int)arg0;
- (int)_emissiveColorLoc;
- (void)set_emissiveColorLoc:(int)arg0;
- (int)_shininessLoc;
- (void)set_shininessLoc:(int)arg0;
- (struct GLKBigInt_s)_colorMaterialEnabledMask;
- (void)set_colorMaterialEnabledMask:(struct GLKBigInt_s)arg0;
- (void)bind;
- (float)shininess;
- (void)setShininess:(float)arg0;
- (void)setAmbientColor:(UIColor *)arg0;
- (UIColor *)ambientColor;
- (void)dealloc;
- (GLKEffectPropertyMaterial *)init;
- (NSString *)description;

@end
