/* Runtime dump - SCNTextureSource
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTextureSource : NSObject

- (double)nextFrameTime;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(long)arg2;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg0 nextFrameTime:(double *)arg1;
- (void)cleanup:(struct __C3DRendererContext *)arg0;

@end
