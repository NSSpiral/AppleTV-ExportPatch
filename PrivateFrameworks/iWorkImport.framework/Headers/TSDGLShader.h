/* Runtime dump - TSDGLShader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLShader : NSObject
{
    NSMutableDictionary * _uniforms;
    NSMutableSet * _uniformsNeedingUpdate;
    NSMutableDictionary * _attributeLocations;
    char _isActive;
    NSString * _name;
    unsigned int _programObject;
}

@property (copy, nonatomic) NSString * name;
@property (readonly, nonatomic) unsigned int programObject;
@property (readonly, nonatomic) char isActive;

- (TSDGLShader *)initWithDefaultTextureShaderWithMotionBlur:(char)arg0 ignoreTextureOpacity:(char)arg1;
- (TSDGLShader *)initWithVertexShaderFileName:(NSString *)arg0 fragmentShaderFileName:(NSString *)arg1 bundle:(NSObject *)arg2 defines:(id)arg3;
- (void)setGLint:(int)arg0 forUniform:(SKUniform *)arg1;
- (TSDGLShader *)initWithDefaultTextureAndOpacityShaderWithMotionBlur:(char)arg0 ignoreTextureOpacity:(char)arg1;
- (void)setGLFloat:(float)arg0 forUniform:(SKUniform *)arg1;
- (void)setPoint4D:(struct ?)arg0 forUniform:(SKUniform *)arg1;
- (NSObject *)p_contentsOfShader:(NSObject *)arg0 extension:(id *)arg1 bundle:(NSObject *)arg2;
- (TSDGLShader *)initWithVertexShader:(NSObject *)arg0 fragmentShader:(NSObject *)arg1 defines:(id)arg2;
- (char)loadVertexShader:(NSObject *)arg0 fragmentShader:(NSObject *)arg1 defines:(id)arg2;
- (unsigned int)programObject;
- (char)p_compileShader:(unsigned int *)arg0 withType:(unsigned int)arg1 shaderString:(NSString *)arg2 defines:(id)arg3;
- (void)p_updateUniformsAndAttributesFromShader;
- (NSString *)shaderQualifierForUniform:(id)arg0 type:(int)arg1;
- (NSString *)p_qualifierForUniform:(id)arg0 class:(Class)arg1;
- (void)p_setQualifiersIfNecessary;
- (void)setGLint:(int)arg0 forShaderQualifier:(TSDGLShaderQualifier *)arg1;
- (void)setGLFloat:(float)arg0 forShaderQualifier:(TSDGLShaderQualifier *)arg1;
- (void)setPoint2D:(struct ?)arg0 forShaderQualifier:(TSDGLShaderQualifier *)arg1;
- (void)setPoint2D:(struct ?)arg0 forUniform:(SKUniform *)arg1;
- (void)setPoint3D:(struct ?)arg0 forShaderQualifier:(TSDGLShaderQualifier *)arg1;
- (void)setPoint4D:(struct ?)arg0 forShaderQualifier:(TSDGLShaderQualifier *)arg1;
- (void)setMat3WithAffineTransform:(struct CGAffineTransform)arg0 forShaderQualifier:(TSDGLShaderQualifier *)arg1;
- (void)setMat4WithTransform3D:(struct CATransform3D)arg0 forShaderQualifier:(TSDGLShaderQualifier *)arg1;
- (TSDGLShader *)initWithDefaultTextureShader;
- (TSDGLShader *)initWithDefaultTextureCoordinatesShader;
- (TSDGLShader *)initWithDefaultTextureAndOpacityShader;
- (TSDGLShader *)initWithDefaultRandomColorShader;
- (TSDGLShader *)initWithDefaultRandomColorTextureShader;
- (TSDGLShader *)initWithDefaultVelocityShader;
- (TSDGLShader *)initWithDefaultVelocityMeshShader;
- (TSDGLShader *)initWithDefaultVelocityCollectionShaderWithSampleCount:(unsigned int)arg0 isSingleObject:(char)arg1;
- (TSDGLShader *)initWithDefaultVelocityVisualizerShader;
- (TSDGLShader *)initWithDefaultVerticalBlurShader;
- (TSDGLShader *)initWithDefaultHorizontalBlurShader;
- (TSDGLShader *)initWithDefaultUniformMotionBlurShader;
- (void)setInteger:(int)arg0 forShaderQualifier:(TSDGLShaderQualifier *)arg1;
- (void)setInteger:(int)arg0 forUniform:(SKUniform *)arg1;
- (void)setCGFloat:(float)arg0 forUniform:(SKUniform *)arg1;
- (void)setLifeSpan:(struct ?)arg0 forUniform:(SKUniform *)arg1;
- (void)setPoint3D:(struct ?)arg0 forUniform:(SKUniform *)arg1;
- (void)setColor:(struct ?)arg0 forUniform:(SKUniform *)arg1;
- (void)setMat3WithAffineTransform:(struct CGAffineTransform)arg0 forUniform:(SKUniform *)arg1;
- (void)setMat4WithTransform3D:(struct CATransform3D)arg0 forUniform:(SKUniform *)arg1;
- (int)locationForUniform:(id)arg0;
- (char)validateUniforms;
- (void)dealloc;
- (NSString *)description;
- (char)isActive;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)deactivate;
- (void)activate;
- (int)locationForAttribute:(NSObject *)arg0;
- (void)teardown;

@end
