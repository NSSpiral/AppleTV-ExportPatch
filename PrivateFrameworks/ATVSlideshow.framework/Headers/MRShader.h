/* Runtime dump - MRShader
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRShader : NSObject
{
    NSString * mShaderID;
    NSString * mShaderKey;
    NSDictionary * mDescription;
    MRContext * mContext;
    unsigned int mProgram;
    unsigned int mVertexShader;
    unsigned int mFragmentShader;
    MRContext * mUseContext;
    id mModelViewProjectionMatrix;
    id mNormal;
    id mTextureMatrix;
    id mForeColor;
    int mModelViewProjectionMatrixLocation;
    int mNormalLocation;
    id mTextureMatrixLocation;
    int mForeColorLocation;
    NSMutableDictionary * mUniformLocations;
    NSMutableDictionary * mUniforms;
    NSMutableDictionary * mAttributeLocations;
    char mTextureUnitsAreBound;
}

@property (readonly) NSString * shaderID;
@property (readonly) NSString * shaderKey;
@property (readonly, nonatomic) unsigned int program;
@property (retain) MRContext * useContext;
@property char textureUnitsAreBound;

- (unsigned int)program;
- (void)dealloc;
- (NSString *)shaderID;
- (void)setTextureMatrix:(id)arg0 onTextureUnit:(float)arg1;
- (char)textureUnitsAreBound;
- (void)setTextureUnitsAreBound:(char)arg0;
- (MRContext *)useContext;
- (void)setUseContext:(MRContext *)arg0;
- (void)setModelViewProjectionMatrix:(id)arg0;
- (char)caresAboutForeColor;
- (char)caresAboutNormal;
- (void)setNormal:(float)arg0 :(float)arg1 :(float)arg2;
- (void)setUniformVec2:(float)arg0 :(float)arg1 forKey:(NSString *)arg2;
- (void)setUniform:(SKUniform *)arg0 forKey:(NSString *)arg1;
- (int)locationForAttribute:(NSObject *)arg0;
- (MRShader *)initWithShaderID:(NSString *)arg0 shaderKey:(NSString *)arg1 description:(NSString *)arg2 vertexShader:(unsigned int)arg3 andFragmentShader:(unsigned int)arg4 inContext:(NSObject *)arg5;
- (int)_locationForUniform:(id)arg0;
- (void)setUniformInt:(int)arg0 forKey:(NSString *)arg1;
- (void)setUniformFloat:(float)arg0 forKey:(NSString *)arg1;
- (void)setUniformVec3:(float)arg0 :(float)arg1 :(float)arg2 forKey:(NSString *)arg3;
- (void)setUniformVec4:(float)arg0 :(float)arg1 :(float)arg2 :(float)arg3 forKey:(NSString *)arg4;
- (void)setUniformMat3:(id)arg0 forKey:(float)arg1;
- (void)setUniformMat4:(id)arg0 forKey:(float)arg1;
- (NSString *)shaderKey;
- (void)setForeColor:(float *)arg0;

@end
