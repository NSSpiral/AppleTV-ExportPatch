/* Runtime dump - GLKBaseEffect
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKBaseEffect : NSObject <GLKNamedEffect>
{
    unsigned char _colorMaterialEnabled;
    unsigned char _fogEnabled;
    GLKEffectPropertyTransform * _transform;
    int _lightingType;
    GLKEffectPropertyLight * _light0;
    GLKEffectPropertyLight * _light1;
    GLKEffectPropertyLight * _light2;
    GLKEffectPropertyMaterial * _material;
    GLKEffectPropertyTexture * _texture2d0;
    GLKEffectPropertyTexture * _texture2d1;
    NSArray * _textureOrder;
    id _constantColor;
    GLKEffectPropertyFog * _fog;
    NSString * _label;
    unsigned char _lightModelTwoSided;
    unsigned char _useConstantColor;
    unsigned char _propertyArrayStale;
    unsigned char _effectStale;
    GLKEffectPropertyConstantColor * _constantColorProp;
    NSMutableArray * _propertyArray;
    GLKEffect * _effect;
    unsigned int _programName;
    id _lightModelAmbientColor;
}

@property (nonatomic) unsigned char colorMaterialEnabled;
@property (nonatomic) unsigned char lightModelTwoSided;
@property (nonatomic) unsigned char useConstantColor;
@property (readonly, nonatomic) GLKEffectPropertyTransform * transform;
@property (readonly, nonatomic) GLKEffectPropertyLight * light0;
@property (readonly, nonatomic) GLKEffectPropertyLight * light1;
@property (readonly, nonatomic) GLKEffectPropertyLight * light2;
@property (nonatomic) int lightingType;
@property (nonatomic) id lightModelAmbientColor;
@property (readonly, nonatomic) GLKEffectPropertyMaterial * material;
@property (readonly, nonatomic) GLKEffectPropertyTexture * texture2d0;
@property (readonly, nonatomic) GLKEffectPropertyTexture * texture2d1;
@property (copy, nonatomic) NSArray * textureOrder;
@property (nonatomic) id constantColor;
@property (readonly, nonatomic) GLKEffectPropertyFog * fog;
@property (copy, nonatomic) NSString * label;
@property (readonly, nonatomic) NSMutableArray * propertyArray;
@property (nonatomic) unsigned char effectStale;
@property (nonatomic) unsigned char propertyArrayStale;
@property (nonatomic) GLKEffect * effect;
@property (nonatomic) unsigned int programName;
@property (readonly, nonatomic) GLKEffectPropertyConstantColor * constantColorProp;

- (void)setLightModelAmbientColor:(UIColor *)arg0;
- (void)setColorMaterialEnabled:(unsigned char)arg0;
- (void)setLightModelTwoSided:(unsigned char)arg0;
- (void)setLightingType:(int)arg0;
- (void)setTextureOrder:(NSArray *)arg0;
- (void)updateBaseEffect;
- (GLKEffectPropertyLight *)light0;
- (GLKEffectPropertyLight *)light1;
- (GLKEffectPropertyLight *)light2;
- (GLKEffectPropertyTexture *)texture2d0;
- (GLKEffectPropertyTexture *)texture2d1;
- (GLKEffectPropertyFog *)fog;
- (void)prepareToDraw;
- (void)setConstantColor:(UIColor *)arg0;
- (UIColor *)constantColor;
- (void)setUseConstantColor:(unsigned char)arg0;
- (char)perVertexLightingEnabled;
- (char)perPixelLightingEnabled;
- (unsigned char)colorMaterialEnabled;
- (unsigned char)lightModelTwoSided;
- (int)lightingType;
- (UIColor *)lightModelAmbientColor;
- (NSArray *)textureOrder;
- (GLKEffectPropertyConstantColor *)constantColorProp;
- (unsigned char)useConstantColor;
- (unsigned char)propertyArrayStale;
- (void)setPropertyArrayStale:(unsigned char)arg0;
- (NSMutableArray *)propertyArray;
- (unsigned char)effectStale;
- (void)setEffectStale:(unsigned char)arg0;
- (unsigned int)programName;
- (void)setProgramName:(unsigned int)arg0;
- (GLKEffectPropertyMaterial *)material;
- (void)dealloc;
- (GLKBaseEffect *)init;
- (NSString *)description;
- (GLKEffectPropertyTransform *)transform;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (GLKEffect *)effect;
- (void)setEffect:(GLKEffect *)arg0;

@end
