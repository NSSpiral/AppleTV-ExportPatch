/* Runtime dump - TSCH3DLabelsRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLabelsRenderer : NSObject
{
    TSCH3DResource * mLabelQuad;
    char mUseLabelBounds;
    TSCH3DLabelResource * mLabel;
    TSCH3DLabelResources * mResources;
    TSCH3DSceneRenderPipeline * mPipeline;
    TSCH3DCamera * mLabelCamera;
    struct LabelRenderInfo mInfo;
    TSCH3DDataBufferResource * mMesh;
    TSCH3DLabelsMeshRenderer * mMeshRenderer;
    TSCH3DLabelsRendererTransforms * mTransforms;
}

@property (nonatomic) char useLabelBounds;
@property (readonly, nonatomic) struct LabelRenderInfo renderInfo;
@property (retain, nonatomic) TSCH3DLabelResource * label;
@property (retain, nonatomic) TSCH3DLabelResources * resources;
@property (retain, nonatomic) TSCH3DSceneRenderPipeline * pipeline;
@property (retain, nonatomic) TSCH3DLabelsMeshRenderer * meshRenderer;
@property (retain, nonatomic) TSCH3DDataBufferResource * mesh;
@property (readonly, nonatomic) TSCH3DCamera * labelCamera;

+ (NSString *)renderCacheKey;
+ (struct OpaqueFigSubtitleRenderer *)renderer;

- (void)prepareCachedIndex:(struct tvec2<int> *)arg0 string:(struct tvec2<int>)arg1 alignmentPadding:(id)arg2 width:(struct tvec2<float> *)arg3 bitmapContextInfo:(struct tvec2<float>)arg4;
- (void)delegateDidSubmitLabel;
- (void)renderAtPosition:(struct tvec3<float> *)arg0 offset:(struct tvec3<float>)arg1 alignment:(struct tvec3<float> *)arg2 offset2D:(struct tvec3<float>)arg3 rotation:(unsigned int)arg4 externalAttribute:(struct tvec2<float> *)arg5;
- (void)postrender:(id)arg0;
- (struct LabelRenderInfo)renderInfo;
- (void)prerender:(id)arg0;
- (void)setMesh:(TSCH3DDataBufferResource *)arg0;
- (TSCH3DDataBufferResource *)mesh;
- (struct tmat4x4<float> *)unitToWorld;
- (struct tmat4x4<float> *)worldToStage;
- (TSCH3DSceneRenderPipeline *)pipeline;
- (NSString *)p_renderCacheKey;
- (TSCH3DCamera *)labelCamera;
- (NSObject *)p_renderCacheID;
- (NSObject *)p_renderCacheFromScene:(NSObject *)arg0 created:(char *)arg1 createIfAbsent:(char)arg2;
- (char)cacheEnabled;
- (char)hasCachedLabels;
- (void)setPipeline:(TSCH3DSceneRenderPipeline *)arg0;
- (void)setMeshRenderer:(TSCH3DLabelsMeshRenderer *)arg0;
- (TSCH3DLabelsMeshRenderer *)meshRenderer;
- (char)isCacheValid;
- (id)labelQuad;
- (char)beginResources:(NSArray *)arg0 expectedSize:(struct tvec2<int> *)arg1;
- (void)endResources;
- (char)useLabelBounds;
- (void)setUseLabelBounds:(char)arg0;
- (void)dealloc;
- (TSCH3DLabelsRenderer *)init;
- (TSCH3DLabelResource *)label;
- (void)setLabel:(TSCH3DLabelResource *)arg0;
- (void).cxx_construct;
- (NSArray *)effects;
- (void)setResources:(TSCH3DLabelResources *)arg0;
- (TSCH3DLabelResources *)resources;

@end
