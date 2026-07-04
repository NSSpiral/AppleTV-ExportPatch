/* Runtime dump - VKSkyModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKSkyModel : VKModelObject <VKMapLayer, VKStyleManagerObserver>
{
    VKMapModel * _mapModel;
    float _skyStartOffset;
    struct Matrix<float, 4, 1> _fillColor;
    struct Matrix<float, 4, 1> _horizonColor;
    struct shared_ptr<ggl::Sky::SkyUniformData> _uniformData;
    struct shared_ptr<ggl::Sky::Shader::Setup> _shaderSetup;
    struct shared_ptr<ggl::Sky::SkyMesh> _mesh;
    struct shared_ptr<ggl::IndexDataTyped<unsigned short> > _indexData;
    struct shared_ptr<ggl::RenderState> _gglRenderState;
    struct RenderItem * _renderItem;
    char _needsNewStyle;
}

@property (nonatomic) VKMapModel * mapModel;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) VKStyleManager * styleManager;

+ (char)reloadOnStylesheetChange;

- (void)dealloc;
- (VKSkyModel *)init;
- (void)setFillColor:(struct Matrix<float, 4, 1>)arg0;
- (struct Matrix<float, 4, 1>)fillColor;
- (void).cxx_construct;
- (void).cxx_destruct;
- (VKStyleManager *)styleManager;
- (void)setMapModel:(VKMapModel *)arg0;
- (char)shouldLayoutWithoutStyleManager;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)stylesheetDidChange;
- (unsigned long long)mapLayerPosition;
- (VKMapModel *)mapModel;
- (void)setHorizonColor:(struct Matrix<float, 4, 1>)arg0;
- (struct Matrix<float, 4, 1>)horizonColor;
- (void)updateStyle;

@end
