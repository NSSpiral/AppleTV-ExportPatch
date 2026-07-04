/* Runtime dump - SCNSourceRendererRegistry
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNSourceRendererRegistry : NSObject
{
    struct __CFDictionary * _registry;
}

+ (SCNSourceRendererRegistry *)sharedRegistry;

- (void)removeSourceRenderersForCGLContextObj:(void *)arg0;
- (void)removeSourceRenderersForSource:(NSObject *)arg0;
- (id)sourceRendererForCGLContextObj:(void *)arg0 source:(NSObject *)arg1;
- (void)rendererDidChange:(NSDictionary *)arg0;
- (void)dealloc;
- (SCNSourceRendererRegistry *)init;
- (void)finalize;

@end
