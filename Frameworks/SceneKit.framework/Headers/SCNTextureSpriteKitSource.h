/* Runtime dump - SCNTextureSpriteKitSource
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTextureSpriteKitSource : SCNTextureOffscreenRenderingSource
{
    SKScene * _scene;
    double _lastUpdate;
}

@property (retain, nonatomic) SKScene * scene;

- (SKScene *)scene;
- (void)setScene:(SKScene *)arg0;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(long)arg2;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg0 nextFrameTime:(double *)arg1;
- (void)cleanup:(struct __C3DRendererContext *)arg0;
- (void)__renderSKScene:(NSObject *)arg0 withSKSCNRenderer:(NSObject *)arg1 c3dRenderer:(struct __C3DRendererContext *)arg2 cglContext:(long)arg3 viewport:(unsigned int)arg4 atTime:(struct ?)arg5;
- (double)__updateTextureWithSKScene:(NSObject *)arg0 engineContext:(struct __C3DEngineContext *)arg1 sampler:(struct __C3DTextureSampler *)arg2;
- (void)dealloc;

@end
