/* Runtime dump - SCNOffscreenRenderer
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNOffscreenRenderer : SCNRenderer

@property (readonly, nonatomic) unsigned int textureID;
@property (nonatomic) unsigned int antialiasingMode;

+ (NSString *)offscreenRendererWithContext:(NSObject *)arg0 size:(struct CGSize)arg1;

- (void)_deleteFramebuffer;
- (void)_createFramebufferIfNeeded;
- (unsigned int)_sampleCount;
- (void)_bindFramebuffer;
- (void)render;
- (void)_resolveAndDiscard;
- (void)_unbindFramebuffer;
- (NSDictionary *)_initWithOptions:(NSDictionary *)arg0 isPrivateRenderer:(char)arg1 privateRendererOwner:(<SCNSceneRenderer> *)arg2 clearsOnDraw:(char)arg3 context:(void *)arg4 size:(struct CGSize)arg5;
- (struct CGImage *)createCGImageSnapshot:(double)arg0;
- (struct UIImage *)snapshotAtTime:(SEL)arg0;
- (unsigned int)antialiasingMode;
- (void)setAntialiasingMode:(unsigned int)arg0;
- (struct CGImage *)copySnapshotWithSize:(struct CGSize)arg0;
- (unsigned int)textureID;
- (void)dealloc;
- (struct UIImage *)snapshot;

@end
