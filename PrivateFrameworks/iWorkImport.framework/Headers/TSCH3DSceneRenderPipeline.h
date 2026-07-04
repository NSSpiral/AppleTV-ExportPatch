/* Runtime dump - TSCH3DSceneRenderPipeline
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSceneRenderPipeline : TSCH3DRenderPipeline
{
    TSCH3DSceneRenderPipeline * mOriginal;
    TSCH3DScene * mScene;
    TSCH3DGLFramebuffer * mFramebuffer;
    TSCH3DSceneRenderSetup * mSetup;
    TSCH3DCamera * mCamera;
    NSNumber * mScale;
    NSNumber * mSamples;
    NSNumber * mSuperSamples;
    NSNumber * mPreserveFramebufferContent;
}

@property (readonly, nonatomic) TSCH3DCamera * camera;
@property (retain, nonatomic) TSCH3DScene * scene;
@property (retain, nonatomic) TSCH3DGLFramebuffer * framebuffer;
@property (retain, nonatomic) TSCH3DSceneRenderSetup * setup;
@property (nonatomic) float scale;
@property (readonly, nonatomic) float renderScale;
@property (nonatomic) float samples;
@property (nonatomic) float superSamples;
@property (nonatomic) char preserveFramebufferContent;
@property (retain, nonatomic) TSCH3DSceneRenderPipeline * original;

+ (TSCH3DSceneRenderPipeline *)pipelineWithProcessor:(TSCH3DRenderProcessor *)arg0 session:(NSObject *)arg1 scene:(TSCH3DScene *)arg2;

- (TSCH3DRenderProcessor *)processor;
- (TSCH3DSceneRenderPipeline *)original;
- (void)setSetup:(TSCH3DSceneRenderSetup *)arg0;
- (TSCH3DSceneRenderPipeline *)initWithProcessor:(TSCH3DRenderProcessor *)arg0 session:(NSObject *)arg1 scene:(TSCH3DScene *)arg2;
- (void)setupRendering;
- (void)setObjectRenderMode:(int)arg0;
- (id)baseRecloneWithProcessor:(TSCH3DRenderProcessor *)arg0 scene:(TSCH3DScene *)arg1;
- (void)setupCamera:(id)arg0;
- (void)setOriginal:(TSCH3DSceneRenderPipeline *)arg0;
- (NSObject *)recloneWithPipelineClass:(Class)arg0 processor:(TSCH3DRenderProcessor *)arg1 scene:(TSCH3DScene *)arg2;
- (NSObject *)recloneWithPipelineClass:(Class)arg0 retargetProcessor:(id)arg1 scene:(TSCH3DScene *)arg2;
- (TSCH3DGLFramebuffer *)framebuffer;
- (float)superSamples;
- (char)preserveFramebufferContent;
- (id)concreteSetup;
- (struct tvec4<float>)backgroundClearColor;
- (void)renderSelector:(SEL)arg0;
- (char)activateFramebuffer:(id)arg0;
- (char)renderWithFramebuffer:(TSCH3DGLFramebuffer *)arg0;
- (id)cloneWithProcessor:(TSCH3DRenderProcessor *)arg0 scene:(TSCH3DScene *)arg1;
- (id)baseRecloneWithRetargetProcessor:(id)arg0 scene:(TSCH3DScene *)arg1;
- (id)cloneWithRetargetProcessor:(id)arg0 scene:(TSCH3DScene *)arg1;
- (void)setFramebuffer:(TSCH3DGLFramebuffer *)arg0;
- (void)setSuperSamples:(float)arg0;
- (void)setPreserveFramebufferContent:(char)arg0;
- (void)clearCamera;
- (void)clearFramebuffer;
- (char)shouldSkipLabelsIfHidden;
- (Class)labelsMeshRendererClassForLabelsRenderer:(NSObject *)arg0;
- (NSObject *)labelsMeshRendererForLabelsRenderer:(NSObject *)arg0;
- (float)renderScale;
- (TSCH3DScene *)scene;
- (void)setScene:(TSCH3DScene *)arg0;
- (char)render;
- (void)dealloc;
- (float)scale;
- (void)setScale:(float)arg0;
- (char)run;
- (NSURLSession *)session;
- (float)samples;
- (void)setSamples:(float)arg0;
- (TSCH3DSceneRenderSetup *)setup;
- (TSCH3DCamera *)camera;

@end
