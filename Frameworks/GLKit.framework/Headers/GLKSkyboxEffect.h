/* Runtime dump - GLKSkyboxEffect
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKSkyboxEffect : NSObject <GLKNamedEffect>
{
    id _center;
    float _xSize;
    float _ySize;
    float _zSize;
    GLKEffectPropertyTexture * _textureCubeMap;
    GLKEffectPropertyTransform * _transform;
    NSString * _label;
    unsigned char _effectStale;
    unsigned char _centerChanged;
    unsigned int _vao;
    unsigned int _positionVBO;
    unsigned int _texCoordVBO;
    NSMutableArray * _propertyArray;
    GLKEffect * _effect;
    unsigned int _programName;
}

@property (nonatomic) id center;
@property (nonatomic) float xSize;
@property (nonatomic) float ySize;
@property (nonatomic) float zSize;
@property (readonly, nonatomic) GLKEffectPropertyTexture * textureCubeMap;
@property (readonly, nonatomic) GLKEffectPropertyTransform * transform;
@property (copy, nonatomic) NSString * label;
@property (readonly, nonatomic) NSMutableArray * propertyArray;
@property (nonatomic) unsigned char effectStale;
@property (nonatomic) unsigned char centerChanged;
@property (nonatomic) GLKEffect * effect;
@property (nonatomic) unsigned int programName;
@property (nonatomic) unsigned int vao;
@property (nonatomic) unsigned int positionVBO;
@property (nonatomic) unsigned int texCoordVBO;

- (void)prepareToDraw;
- (NSMutableArray *)propertyArray;
- (unsigned char)effectStale;
- (void)setEffectStale:(unsigned char)arg0;
- (unsigned int)programName;
- (void)setProgramName:(unsigned int)arg0;
- (void)createAndBindVAOWithPositions:(float *)arg0 texCoords:(float *)arg1;
- (void)updateSkyboxEffect;
- (GLKEffectPropertyTexture *)textureCubeMap;
- (void)setXSize:(float)arg0;
- (void)setYSize:(float)arg0;
- (void)setZSize:(float)arg0;
- (float)xSize;
- (float)ySize;
- (float)zSize;
- (unsigned int)vao;
- (void)setVao:(unsigned int)arg0;
- (unsigned int)positionVBO;
- (void)setPositionVBO:(unsigned int)arg0;
- (unsigned int)texCoordVBO;
- (void)setTexCoordVBO:(unsigned int)arg0;
- (unsigned char)centerChanged;
- (void)setCenterChanged:(unsigned char)arg0;
- (void)dealloc;
- (GLKSkyboxEffect *)init;
- (NSString *)description;
- (struct SCNVector3)center;
- (GLKEffectPropertyTransform *)transform;
- (void)setCenter:(struct CGPoint)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void)draw;
- (GLKEffect *)effect;
- (void)setEffect:(GLKEffect *)arg0;

@end
