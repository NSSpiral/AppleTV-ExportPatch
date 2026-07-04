/* Runtime dump - TSCH3DGLRenderProcessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLRenderProcessor : TSCH3DRetargetRenderProcessor <TSCH3DSharegroupDelegate, TSCH3DShaderDataUploader, TSCH3DShaderStateUpdater>
{
    TSCH3DSession * mSession;
    TSCH3DResource * mGeometry;
    struct StateStack<TSCH3D::RenderState, 10> mRenderStateStack;
    struct RenderHints mRenderHints;
    int mDiffuseIndex;
    TSCH3DShaderResource * mShader;
    TSCH3DShaderProgramHandle * mCurrentShaderHandle;
    TSCH3DGLStatistics * mStats;
}

+ (TSCH3DGLRenderProcessor *)processorWithOriginal:(TSCH3DRenderProcessor *)arg0;
+ (NSObject *)processorWithSession:(NSObject *)arg0;

- (struct tmat4x4<float> *)projection;
- (void)submit:(struct PrimitiveInfo *)arg0;
- (void)uniform:(SKUniform *)arg0 vec2:(struct tvec2<float> *)arg1;
- (void)uniform:(SKUniform *)arg0 mat4:(struct tmat4x4<float> *)arg1;
- (void)uniform:(SKUniform *)arg0 vec1:(struct tvec1<float> *)arg1;
- (int)attribute:(NSObject *)arg0 resource:(NSObject *)arg1 specs:(struct AttributeSpecs *)arg2;
- (struct RenderState)renderState;
- (void)setRenderState:(struct RenderState *)arg0;
- (void)popRenderState;
- (void)pushRenderState;
- (id)combinationProcessor;
- (id)objectStateProcessor;
- (struct StateStack<TSCH3D::ObjectState, 6> *)objectStateStack;
- (void)resetBuffers;
- (id)matrixProcessor;
- (struct tmat4x4<float> *)mv;
- (struct tmat4x4<float>)mvp;
- (void)uniform:(SKUniform *)arg0 mat3:(struct tmat3x3<float> *)arg1;
- (void)uploadShaderUniforms;
- (char)uploadShaderAttributes:(NSDictionary *)arg0 primitiveInfo:(struct PrimitiveInfo *)arg1;
- (char)uploadShaderTextures;
- (char)supportsClipDistances;
- (void)injectDefaults:(id)arg0;
- (void)postInject:(id)arg0;
- (unsigned int)p_modeFromPrimitiveInfo:(struct PrimitiveInfo *)arg0;
- (void)p_drawElements:(struct PrimitiveInfo *)arg0;
- (void)p_drawArrays:(struct PrimitiveInfo *)arg0;
- (void)updateVertexShaderStates;
- (char)updateShader;
- (char)uploadShaderData:(NSData *)arg0 primitiveInfo:(struct PrimitiveInfo *)arg1;
- (void)updateRenderState;
- (void)p_drawPrimitive:(struct PrimitiveInfo *)arg0;
- (int)uniformLocationOfVariable:(id)arg0;
- (void)didFlushCache;
- (void)uniform:(SKUniform *)arg0 mat2:(struct tmat2x2<float> *)arg1;
- (void)uniform:(SKUniform *)arg0 vec3:(struct tvec3<float> *)arg1;
- (void)uniform:(SKUniform *)arg0 vec4:(struct tvec4<float> *)arg1;
- (void)uniform:(SKUniform *)arg0 ivec1:(struct tvec1<int> *)arg1;
- (void)uniform:(SKUniform *)arg0 ivec2:(struct tvec2<int> *)arg1;
- (void)uniform:(SKUniform *)arg0 ivec3:(struct tvec3<int> *)arg1;
- (void)uniform:(SKUniform *)arg0 ivec4:(struct tvec4<int> *)arg1;
- (void)uniform:(SKUniform *)arg0 vec1s:(struct vector<glm::detail::tvec1<float>, std::__1::allocator<glm::detail::tvec1<float> > > *)arg1;
- (void)uniform:(SKUniform *)arg0 vec2s:(struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > *)arg1;
- (void)uniform:(SKUniform *)arg0 vec3s:(struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > *)arg1;
- (void)uniform:(SKUniform *)arg0 vec4s:(struct vector<glm::detail::tvec4<float>, std::__1::allocator<glm::detail::tvec4<float> > > *)arg1;
- (void)uniform:(SKUniform *)arg0 ivec1s:(struct vector<glm::detail::tvec1<int>, std::__1::allocator<glm::detail::tvec1<int> > > *)arg1;
- (void)uniform:(SKUniform *)arg0 ivec2s:(struct vector<glm::detail::tvec2<int>, std::__1::allocator<glm::detail::tvec2<int> > > *)arg1;
- (void)uniform:(SKUniform *)arg0 ivec3s:(struct vector<glm::detail::tvec3<int>, std::__1::allocator<glm::detail::tvec3<int> > > *)arg1;
- (void)uniform:(SKUniform *)arg0 ivec4s:(struct vector<glm::detail::tvec4<int>, std::__1::allocator<glm::detail::tvec4<int> > > *)arg1;
- (int)texture:(NSObject *)arg0 attributes:(struct TextureAttributes *)arg1;
- (struct RenderHints)renderHints;
- (void)setRenderHints:(struct RenderHints *)arg0;
- (char)canRenderPrefilteredLines;
- (SCNProgram *)program;
- (void)dealloc;
- (void)endFrame;
- (void).cxx_construct;
- (void)beginFrame;
- (TSCH3DGLRenderProcessor *)initWithSession:(NSObject *)arg0;
- (void)popState;

@end
