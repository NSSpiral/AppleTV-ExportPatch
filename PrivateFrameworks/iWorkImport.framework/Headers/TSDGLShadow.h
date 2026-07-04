/* Runtime dump - TSDGLShadow
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLShadow : NSObject

+ (TSDGLShadow *)sharedContext;
+ (NSOperationQueue *)renderQueue;

- (void)setupGLTextureParameters;
- (struct CGImage *)newCGImageFromGLBuffer:(char * *)arg0;
- (void)createOffscreenRenderBuffer:(struct CGSize)arg0 framebuffer:(TSCH3DGLFramebuffer *)arg1 requiresDepth:(char)arg2 colorRenderBuffer:(unsigned int *)arg3 depthRenderBuffer:(unsigned int *)arg4;

@end
