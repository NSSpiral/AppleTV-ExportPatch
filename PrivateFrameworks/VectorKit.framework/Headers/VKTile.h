/* Runtime dump - VKTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTile : NSObject
{
    struct VKTileKey _key;
    struct ? _matrix;
    struct ? _inverseMatrix;
    VKTilePool * _pool;
    double _birthdate;
    struct VKCameraState _cameraState;
    id _shaderMatrix;
    struct ? bounds;
    struct Matrix<double, 4, 4> _gmMatrix;
    struct Matrix<double, 4, 4> _gmInverseMatrix;
    struct Matrix<float, 4, 4> _gmShaderMatrix;
    struct shared_ptr<ggl::Tile::ViewUniformData> _viewUniformData;
}

@property (readonly) struct shared_ptr<ggl::Tile::ViewUniformData> viewUniformData;
@property (readonly, nonatomic) struct VKTileKey key;
@property (readonly, nonatomic) double birthdate;
@property (readonly, nonatomic) struct ? * matrix;
@property (readonly, nonatomic) struct ? * inverseMatrix;
@property (readonly, nonatomic) id shaderMatrix;
@property (readonly, nonatomic) double tileWidth;

- (void)dealloc;
- (NSString *)description;
- (struct VKTileKey)key;
- (void).cxx_construct;
- (void)setKey:(struct VKTileKey *)arg0;
- (void).cxx_destruct;
- (struct ? *)inverseMatrix;
- (void)setPool:(VKTilePool *)arg0;
- (void)updateViewDependentStateWithContext:(NSObject *)arg0;
- (struct shared_ptr<ggl::Tile::ViewUniformData>)viewUniformData;
- (double)tileWidth;
- (struct Matrix<double, 4, 4> *)gmMatrix;
- (struct Matrix<double, 4, 4> *)gmInverseMatrix;
- (struct Matrix<float, 4, 4> *)gmShaderMatrix;
- (struct VKTileKey *)keyPointer;
- (VKTile *)initWithKey:(struct VKTileKey *)arg0;
- (struct ? *)matrix;
- (unsigned int)geometryCount;
- (void)updateViewDependentStateIfNecessaryWithContext:(NSObject *)arg0;
- (id)shaderMatrix;
- (double)birthdate;

@end
