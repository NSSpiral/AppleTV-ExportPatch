/* Runtime dump - TSDGLCurvedShadow
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLCurvedShadow : TSDGLShadow
{
    TSDGLFrameBuffer * mAlphaFrameBuffer;
    TSDGLDataBuffer * mAlphaDataBuffer;
    TSDGLShader * mAlphaShader;
    TSDGLShader * mCurvedShader;
    TSDGLFrameBuffer * mCurveInterpolationFrameBuffer;
    TSDGLDataBuffer * mCurveInterpolationDataBuffer;
    TSDGLShader * mCurveInterpolationShader;
    char * mBuffer;
    CIContext * mCIContext;
}

+ (void)applicationDidBecomeActive;
+ (void)applicationWillResignActive;

- (void)drawShadow:(id)arg0 forImage:(struct CGImage *)arg1 inContext:(struct CGContext *)arg2 forSize:(struct CGSize)arg3;
- (char)p_shrinkImageIfNecessary:(struct CGImage *)arg0 originalSize:(struct CGSize)arg1 newImage:(struct CGImage * *)arg2 newSize:(struct CGImage)arg3;
- (void)p_bindAlphaShaderForShadow:(id)arg0 framebufferSize:(struct CGSize)arg1;
- (void)p_bindCurvedShaderForShadow:(id)arg0 framebufferSize:(struct CGSize)arg1;
- (struct CGImage *)newCurvedAlphaCGImageForImage:(struct CGImage *)arg0 size:(struct CGSize)arg1;
- (float)baseBlurRadiusForCurvedShadow:(id)arg0 framebufferSize:(struct CGSize)arg1;
- (void)p_newBlurredImageFromCIImage:(UIImage *)arg0 blurRadius:(float)arg1 halfBlurredImage:(struct CGImage * *)arg2 blurredImage:(struct CGImage)arg3 framebufferSize:(struct CGImage * *)arg4;
- (void)p_bindCurvedInterpolationShaderForShadow:(id)arg0 framebufferSize:(struct CGSize)arg1;
- (struct CGImage *)newCGImageWithTexture:(NSObject *)arg0 size:(struct CGSize)arg1 shader:(NSObject *)arg2 framebuffer:(TSCH3DGLFramebuffer *)arg3 databuffer:(TSCH3DDataBuffer *)arg4;
- (UIImage *)p_blurredCIImage:(UIImage *)arg0 blurRadius:(float)arg1;
- (UIImage *)p_newTintedCIImageFromImage:(UIImage *)arg0 withColor:(struct ?)arg1 framebufferSize:(struct CGSize)arg2;
- (void)p_deleteFramebuffersWithCurrentGLFramebuffer:(int)arg0;
- (void)p_setupCIContextForFramebufferSize:(struct CGSize)arg0;
- (void)p_unbindFramebuffersWithCurrentGLFramebuffer:(int)arg0;
- (void)releaseShaders;
- (void)dealloc;

@end
