/* Runtime dump - TSCH3DPyramidBlurShadowsRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPyramidBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer>
{
    NSArray * mPyramidResources;
    TSCH3DPyramidBlurFBOResource * mFinalShadowResource;
    struct tvec2<int> mInitialSize;
    int mRequestedSize;
    float mTargetRadiusFactor;
}

- (TSCH3DPyramidBlurShadowsRenderer *)initWithSize:(int)arg0 targetRadiusFactor:(float)arg1;
- (NSArray *)p_allResources;
- (void)p_setupResourcesForSize:(struct tvec2<int>)arg0;
- (NSString *)shadowsFBOForContext:(NSObject *)arg0;
- (void)protectShadowForQuality:(float)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1 renderBlock:(id /* block */)arg2;
- (void)unprotectShadowInSession:(NSObject *)arg0;
- (float)blurSlackForQuality:(float)arg0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_construct;

@end
