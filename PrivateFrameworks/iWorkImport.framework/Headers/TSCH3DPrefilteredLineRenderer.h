/* Runtime dump - TSCH3DPrefilteredLineRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPrefilteredLineRenderer : NSObject
{
    struct tmat4x4<float> mModelMatrix;
    struct tmat3x3<float> mNormalMatrix;
    struct tmat4x4<float> mProjection;
    struct tmat4x4<float> mNormalizedProjection;
    struct box<glm::detail::tvec2<int> > mViewport;
    TSCH3DOrderedDictionary * mCacheObjects;
    TSCH3DSceneRenderPipeline * mPipeline;
}

@property (readonly, nonatomic) struct tmat4x4<float> modelMatrix;
@property (readonly, nonatomic) struct tmat3x3<float> normalMatrix;
@property (readonly, nonatomic) struct tmat4x4<float> projection;
@property (readonly, nonatomic) struct tmat4x4<float> normalizedProjection;
@property (readonly, nonatomic) struct box<glm::detail::tvec2<int> > viewport;
@property (readonly, nonatomic) TSCH3DSceneRenderPipeline * pipeline;

+ (NSString *)renderCacheKey;
+ (struct OpaqueFigSubtitleRenderer *)renderer;

- (struct tmat4x4<float>)projection;
- (struct tmat4x4<float>)normalizedProjection;
- (char)beginWithPipeline:(TSCH3DSceneRenderPipeline *)arg0;
- (void)renderLineBufferWithSetting:(SASettingEntity *)arg0 vertices:(struct CAMeshVertex *)arg1 normals:(id)arg2 diffuseTexcoords:(id)arg3;
- (void)endWithDidGenerateShaderEffectsBlock:(id /* block */)arg0;
- (TSCH3DSceneRenderPipeline *)pipeline;
- (struct tmat4x4<float>)modelMatrix;
- (void)p_setupShaderEffectsForSetting:(id)arg0;
- (NSString *)p_renderCacheKey;
- (id)p_renderCacheIDFromSetting:(id)arg0;
- (char)p_shouldRenderWithSetting:(SASettingEntity *)arg0 returningCacheObject:(id *)arg1;
- (void)renderWithSetting:(SASettingEntity *)arg0 fromVertex:(struct PrefilteredLineVertexProperties *)arg1 toVertex:(struct PrefilteredLineVertexProperties)arg2;
- (struct tmat3x3<float>)normalMatrix;
- (struct box<glm::detail::tvec2<int> >)viewport;
- (void)dealloc;
- (TSCH3DPrefilteredLineRenderer *)init;
- (void).cxx_construct;

@end
