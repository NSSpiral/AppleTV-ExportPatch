/* Runtime dump - TSCH3DSimpleBlurShadowsRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSimpleBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer>
{
    TSCH3DFBOResource * mShadowsFBOResource;
    TSCH3DFBOResource * mBlurFBOResource;
    struct tvec2<int> mShadowsSize;
    NSArray * mBlurParametersArray;
}

- (NSString *)shadowsFBOForContext:(NSObject *)arg0;
- (void)protectShadowForQuality:(float)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1 renderBlock:(id /* block */)arg2;
- (void)unprotectShadowInSession:(NSObject *)arg0;
- (float)blurSlackForQuality:(float)arg0;
- (TSCH3DSimpleBlurShadowsRenderer *)initWithBlurParametersArray:(NSArray *)arg0;
- (void)blurParametersFromQuality:(float)arg0 shadowSize:(int *)arg1 numPasses:(int *)arg2 kernelScale:(float *)arg3;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_construct;

@end
