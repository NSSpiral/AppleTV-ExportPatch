/* Runtime dump - VKImageCanvas
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKImageCanvas : GGLImageCanvas <VKWorldDelegate, VKAnimationRunner>
{
    VKWorld * _world;
    VKCamera * _camera;
    VKLayoutContext * _layoutContext;
    VKDispatch * _dispatch;
    VKTimer * _layoutTimer;
    char _shouldDrawWhileLoading;
    double _frameTimestamp;
    char _needsLayout;
    struct MapCamera _mapCamera;
    struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> > _renderQueue;
    struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > _renderQueueResolve;
    struct unique_ptr<<anonymous>::YFlipPass, std::__1::default_delete<<anonymous>::YFlipPass> > _yFlipPass;
    struct RenderTree * _mapScene;
}

@property (readonly, nonatomic) VKWorld * world;
@property (readonly, nonatomic) VKCamera * camera;
@property (readonly, nonatomic) VKDispatch * dispatch;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setSize:(struct CGSize)arg0;
- (void)animationDidStop:(VKAnimation *)arg0;
- (void).cxx_construct;
- (void)didReceiveMemoryWarning:(char)arg0;
- (void).cxx_destruct;
- (VKCamera *)camera;
- (void)runAnimation:(VKAnimation *)arg0;
- (void)_updateViewTransform;
- (VKWorld *)world;
- (void)animationDidResume:(VKAnimation *)arg0;
- (void)worldLayoutDidChange:(VKWorld *)arg0;
- (void)worldDisplayDidChange:(VKWorld *)arg0;
- (VKImageCanvas *)initWithSize:(struct CGSize)arg0 scale:(float)arg1 useMultisampling:(char)arg2 device:(struct shared_ptr<ggl::Device> *)arg3 homeQueue:(struct shared_ptr<ggl::Device>)arg4;
- (void)loadScene;
- (void)cancelLoad;
- (VKDispatch *)dispatch;
- (void)renderSceneWithRenderer:(struct Renderer *)arg0 completion:(unsigned int)arg1;
- (void)_spinSceneWillRender:(char)arg0;
- (void)_spinScene:(NSObject *)arg0;
- (VKImageCanvas *)initWithSize:(struct CGSize)arg0 scale:(float)arg1 useMultisampling:(char)arg2 device:(struct shared_ptr<ggl::Device> *)arg3;

@end
