/* Runtime dump - SCNTextureDelegateSource
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTextureDelegateSource : SCNTextureOffscreenRenderingSource
{
    id _delegate;
    double _lastUpdate;
    double _nextUpdateDate;
}

@property (retain, nonatomic) id delegate;

- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(long)arg2;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg0 nextFrameTime:(double *)arg1;
- (void)cleanup:(struct __C3DRendererContext *)arg0;
- (void)__updateTextureWithDelegate:(NSObject *)arg0 engineContext:(struct __C3DEngineContext *)arg1;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;

@end
