/* Runtime dump - VKGridModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGridModel : VKModelObject <VKMapLayer, VKStyleManagerObserver>
{
    VKMapModel * _mapModel;
    char _simpleGridEnabled;
    unsigned char _renderPass;
    double _gridMix;
    struct Matrix<float, 4, 1> _fillColor;
    struct Matrix<float, 4, 1> _lineColor;
    struct shared_ptr<ggl::Tile::ViewUniformData> _viewUniformData;
    struct shared_ptr<ggl::GridBase::GridBaseUniformData> _baseUniformData;
    struct shared_ptr<ggl::SimpleGrid::SimpleGridUniformData> _simpleUniformData;
    struct shared_ptr<ggl::Grid::GridUniformData> _uniformData;
    struct unique_ptr<ggl::Grid::Shader::Setup, std::__1::default_delete<ggl::Grid::Shader::Setup> > _shaderSetup;
    struct unique_ptr<ggl::SimpleGrid::Shader::Setup, std::__1::default_delete<ggl::SimpleGrid::Shader::Setup> > _simpleShaderSetup;
    struct shared_ptr<ggl::GridBase::GridMesh> _gridMesh;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _gridRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _simpleGridRenderState;
    struct RenderItem * _gridRenderItem;
    struct RenderItem * _simpleGridRenderItem;
    char _needsUpdatedColor;
}

@property (readonly, nonatomic) struct Matrix<float, 4, 1> fillColor;
@property (nonatomic) VKMapModel * mapModel;
@property (nonatomic) char simpleGridEnabled;
@property (nonatomic) unsigned char renderPass;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) VKStyleManager * styleManager;

+ (char)reloadOnStylesheetChange;

- (void)dealloc;
- (VKGridModel *)init;
- (struct Matrix<float, 4, 1>)fillColor;
- (void).cxx_construct;
- (void).cxx_destruct;
- (VKStyleManager *)styleManager;
- (void)setMapModel:(VKMapModel *)arg0;
- (char)shouldLayoutWithoutStyleManager;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)setRenderPass:(unsigned char)arg0;
- (void)setNeedsUpdatedGridColor;
- (void)stylesheetDidChange;
- (void)stylesheetDoneChanging;
- (void)setSimpleGridEnabled:(char)arg0;
- (unsigned long long)mapLayerPosition;
- (VKMapModel *)mapModel;
- (void)updateGridColor;
- (char)simpleGridEnabled;
- (unsigned char)renderPass;

@end
