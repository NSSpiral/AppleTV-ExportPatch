/* Runtime dump - VKHybridRoadMapModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKHybridRoadMapModel : VKRoadMapModel
{
    struct unique_ptr<md::OffscreenQueue, std::__1::default_delete<md::OffscreenQueue> > _offscreenQueue;
    float _roadAlpha;
}

- (void).cxx_construct;
- (void).cxx_destruct;
- (void)lockCommandBuffers:(struct RenderQueue *)arg0;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)unLockCommandBuffers:(struct RenderQueue *)arg0;
- (void)gglLayoutSceneIfNeeded:(id)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2 dispatchQueue:(struct __shared_weak_count *)arg3;

@end
