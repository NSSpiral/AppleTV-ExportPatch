/* Runtime dump - SCNTextureOffscreenRenderingSource
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTextureOffscreenRenderingSource : SCNTextureSource
{
    struct CGSize _fboSize;
    struct __C3DFramebuffer * _fbo;
}

- (void)cleanup:(struct __C3DRendererContext *)arg0;
- (struct __C3DTexture *)__makeFBOReadyForSize:(struct CGSize)arg0 withRendererContext:(struct __C3DRendererContext *)arg1 textureSampler:(long)arg2 needsStencil:(unsigned int)arg3;

@end
