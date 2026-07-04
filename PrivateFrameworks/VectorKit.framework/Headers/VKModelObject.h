/* Runtime dump - VKModelObject
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKModelObject : NSObject
{
    VKWorld * _world;
    VKModelObject * _supermodel;
    NSMutableArray * _submodels;
    char _active;
    unsigned int _needsLayout;
    unsigned int _needsDisplay;
    NSObject<OS_dispatch_semaphore> * _drawReady;
    struct /* ? */ _commandBuffers;
    struct CommandBufferIdSet _supportedPassIds;
}

@property (nonatomic) VKWorld * world;
@property (readonly, nonatomic) NSArray * submodels;
@property (readonly, nonatomic) VKModelObject * supermodel;
@property (readonly, nonatomic) VKStyleManager * styleManager;
@property (nonatomic) char active;

- (void)dealloc;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (VKModelObject *)init;
- (char)isActive;
- (void)reset;
- (void)setActive:(char)arg0;
- (void).cxx_construct;
- (void)didReceiveMemoryWarning:(char)arg0;
- (void).cxx_destruct;
- (VKStyleManager *)styleManager;
- (void)runAnimation:(VKAnimation *)arg0;
- (void)addSubmodel:(id)arg0;
- (void)layoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1;
- (void)setWorld:(VKWorld *)arg0;
- (void)willMoveToSupermodel:(id)arg0;
- (void)didMoveToSupermodel;
- (VKModelObject *)supermodel;
- (void)setSupermodel:(VKModelObject *)arg0;
- (void)clearCommandBuffers;
- (void)_removeSubmodel:(id)arg0;
- (struct CommandBufferIdSet *)supportedRenderPasses;
- (void)removeSubmodel:(id)arg0;
- (void)didRemoveFromSuperModel;
- (void)lockCommandBuffers:(struct RenderQueue *)arg0;
- (char)shouldLayoutWithoutStyleManager;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)unLockCommandBuffers:(struct RenderQueue *)arg0;
- (void)gglLayoutSceneIfNeeded:(id)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2 dispatchQueue:(struct __shared_weak_count *)arg3;
- (void)removeFromSupermodel;
- (void)setSupportedPasses:(struct CommandBufferIdSet *)arg0;
- (VKWorld *)world;
- (NSArray *)submodels;

@end
