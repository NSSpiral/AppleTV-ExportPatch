/* Runtime dump - SCNTextureLayerSource
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTextureLayerSource : SCNTextureOffscreenRenderingSource
{
    CALayer * _layer;
    double _lastUpdate;
    double _lastRenderedTime;
    double _nextUpdateDate;
}

@property (retain, nonatomic) CALayer * layer;

- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(long)arg2;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg0 nextFrameTime:(double *)arg1;
- (void)cleanup:(struct __C3DRendererContext *)arg0;
- (double)__renderLayer:(WebRenderLayer *)arg0 withCARenderer:(NSObject *)arg1 c3dRenderer:(struct __C3DRendererContext *)arg2 cglContext:(long)arg3 viewport:(unsigned int)arg4 atTime:(struct ?)arg5;
- (double)__updateTextureWithLayer:(CALayer *)arg0 engineContext:(struct __C3DEngineContext *)arg1 sampler:(struct __C3DTextureSampler *)arg2;
- (void)dealloc;
- (CALayer *)layer;
- (void)setLayer:(CALayer *)arg0;

@end
