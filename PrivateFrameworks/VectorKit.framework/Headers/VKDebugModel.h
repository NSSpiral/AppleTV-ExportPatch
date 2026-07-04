/* Runtime dump - VKDebugModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKDebugModel : VKModelObject <VKMapLayer>
{
    char _geocentric;
    float _fontSize;
    struct unique_ptr<ggl::FragmentedPool<ggl::Debug::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::Shader::Setup> > > _debugShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::DebugPoints::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::DebugPoints::Shader::Setup> > > _debugPointsShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _debugRenderItemPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _debugLinesRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _debugPointsRenderState;
    struct shared_ptr<ggl::Debug::BaseMesh> _unitRectMesh;
    char _needsReset;
}

@property (nonatomic) char geocentric;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (VKDebugModel *)init;
- (void)reset;
- (void).cxx_construct;
- (void)didReceiveMemoryWarning:(char)arg0;
- (void).cxx_destruct;
- (char)shouldLayoutWithoutStyleManager;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (unsigned long long)mapLayerPosition;
- (void)flushPools;
- (void)resetPools:(id)arg0;
- (struct shared_ptr<ggl::Debug::BaseMesh>)unitRectMesh;
- (void)appendDebugTileCommandsToBuffer:(struct CommandBuffer *)arg0 forMapTile:(struct ClearItem *)arg1 fromLayer:(struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >)arg2 withContext:(struct RenderItem * *)arg3 withConsole:(struct RenderItem)arg4;
- (char)geocentric;
- (void)setGeocentric:(char)arg0;

@end
