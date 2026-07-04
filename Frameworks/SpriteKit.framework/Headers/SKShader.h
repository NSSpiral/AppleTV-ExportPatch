/* Runtime dump - SKShader
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKShader : NSObject <NSCopying, NSCoding>
{
    BOOL _builtInUniformsDirty;
    BOOL _programIsDirty;
    double _prevUniformUpdateTime;
    NSMutableArray * _uniforms;
    NSMutableDictionary * _uniformData;
    NSString * _source;
    struct xglProgram * _xglProgram;
}

@property (copy) NSString * source;
@property (copy) NSArray * uniforms;
@property struct xglProgram * _xglProgram;
@property (readonly) NSArray * _textureUniforms;

+ (SKShader *)shaderWithSource:(NSString *)arg0 uniforms:(NSArray *)arg1;
+ (SKShader *)shaderWithSource:(NSString *)arg0;
+ (SKShader *)shaderWithFileNamed:(id)arg0;
+ (SKShader *)shader;

- (SKShader *)initWithSource:(NSString *)arg0 uniforms:(NSArray *)arg1;
- (void)setUniforms:(NSArray *)arg0;
- (void)_createProgram;
- (struct xglProgram *)_updateUniforms;
- (struct xglProgram *)_xglProgram;
- (NSArray *)uniforms;
- (void)addUniform:(SKUniform *)arg0;
- (id)uniformNamed:(id)arg0;
- (void)removeUniformNamed:(id)arg0;
- (struct xglProgram *)_syncUniformsForTime:(id)arg0;
- (NSArray *)_textureUniforms;
- (void)set_xglProgram:(struct xglProgram *)arg0;
- (id)_getShaderCompilationLog;
- (SKShader *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKShader *)init;
- (char)isValid;
- (SKShader *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)source;
- (void)setSource:(NSString *)arg0;
- (void).cxx_destruct;
- (SKShader *)initWithSource:(NSString *)arg0;

@end
