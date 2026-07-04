/* Runtime dump - TSDGLParticleSystem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLParticleSystem : NSObject
{
    char * _visibilities;
    char _isInitialized;
    char _isDataBufferInitialized;
    unsigned int _textureCount;
    char _hasParticleTexture;
    char _shouldDraw;
    unsigned int _particleCount;
    unsigned int _visibleParticleCount;
    unsigned int _particlesWide;
    unsigned int _particlesHigh;
    float _duration;
    unsigned int _direction;
    TSDGLDataBufferAttribute * _positionAttribute;
    TSDGLDataBufferAttribute * _centerAttribute;
    TSDGLDataBufferAttribute * _texCoordAttribute;
    TSDGLDataBufferAttribute * _particleTexCoordAttribute;
    TSDGLDataBufferAttribute * _colorAttribute;
    TSDGLDataBufferAttribute * _lifeSpanAttribute;
    TSDGLDataBufferAttribute * _speedAttribute;
    TSDGLDataBufferAttribute * _rotationAttribute;
    TSDGLDataBufferAttribute * _scaleAttribute;
    TSDGLDataBuffer * _dataBuffer;
    TSDGLShader * _shader;
    struct CGSize _particleSize;
    struct CGSize _objectSize;
    struct CGSize _slideSize;
}

@property (readonly, nonatomic) unsigned int particleCount;
@property (readonly, nonatomic) unsigned int visibleParticleCount;
@property (readonly, nonatomic) unsigned int particlesWide;
@property (readonly, nonatomic) unsigned int particlesHigh;
@property (readonly, nonatomic) struct CGSize particleSize;
@property (readonly, nonatomic) struct CGSize objectSize;
@property (readonly, nonatomic) struct CGSize slideSize;
@property (readonly, nonatomic) float duration;
@property (readonly, nonatomic) unsigned int direction;
@property (readonly, nonatomic) NSArray * dataBufferAttributes;
@property (readonly, nonatomic) TSDGLDataBufferAttribute * positionAttribute;
@property (readonly, nonatomic) TSDGLDataBufferAttribute * centerAttribute;
@property (readonly, nonatomic) TSDGLDataBufferAttribute * texCoordAttribute;
@property (readonly, nonatomic) TSDGLDataBufferAttribute * particleTexCoordAttribute;
@property (readonly, nonatomic) TSDGLDataBufferAttribute * colorAttribute;
@property (readonly, nonatomic) TSDGLDataBufferAttribute * lifeSpanAttribute;
@property (readonly, nonatomic) TSDGLDataBufferAttribute * speedAttribute;
@property (readonly, nonatomic) TSDGLDataBufferAttribute * rotationAttribute;
@property (readonly, nonatomic) TSDGLDataBufferAttribute * scaleAttribute;
@property (readonly, nonatomic) TSDGLDataBuffer * dataBuffer;
@property (readonly, nonatomic) TSDGLShader * shader;
@property (readonly, nonatomic) char shouldDraw;

+ (unsigned int)numberOfVerticesPerParticle;
+ (char)useGLSL;
+ (char)shouldDrawInvisibleParticles;
+ (char)willOverrideColors;
+ (NSString *)newDataBufferAttributeWithName:(NSString *)arg0;
+ (char)willOverrideGeometry;
+ (char)willOverrideStartingPoints;
+ (char)willOverrideVisibilities;

- (TSDGLDataBuffer *)dataBuffer;
- (unsigned int)particleCount;
- (void)setupGLSL;
- (unsigned int)visibleParticleCount;
- (void)p_setupDataBufferWithParticleCount:(unsigned int)arg0 visibleParticleCount:(unsigned int)arg1;
- (struct CGSize)p_particleSystemSizeWithRequestedNumber:(unsigned int)arg0 objectSize:(struct CGSize)arg1;
- (TSDGLParticleSystem *)initWithParticleSize:(struct CGSize)arg0 particleSystemSize:(struct CGSize)arg1 objectSize:(struct CGSize)arg2 slideSize:(struct CGSize)arg3 duration:(float)arg4 direction:(unsigned int)arg5 shader:(TSDGLShader *)arg6;
- (NSArray *)dataBufferAttributes;
- (void)p_setupParticleDataWithTexture:(NSObject *)arg0;
- (void)p_reverseParticleDataDrawOrder;
- (void)p_setupVertexData;
- (char)shouldDraw;
- (unsigned int)particlesWide;
- (unsigned int)particlesHigh;
- (float)speedMax;
- (float)rotationMax;
- (void)setupWithTexture:(NSObject *)arg0 particleTextureSize:(struct CGSize)arg1 reverseDrawOrder:(char)arg2;
- (TSDGLParticleSystem *)initWithNumberOfParticles:(unsigned int)arg0 objectSize:(struct CGSize)arg1 slideSize:(struct CGSize)arg2 duration:(float)arg3 direction:(unsigned int)arg4 shader:(TSDGLShader *)arg5;
- (unsigned int)indexFromPoint:(struct CGPoint)arg0;
- (struct CGPoint)indexPointFromIndex:(unsigned int)arg0;
- (struct CGContext *)newContextFromTexture:(NSObject *)arg0;
- (struct ?)vertexPositionAtVertexIndex:(unsigned int)arg0 particleIndexPoint:(struct CGPoint)arg1;
- (struct ?)centerAtIndexPoint:(struct CGPoint)arg0;
- (struct CGPoint)startingPointAtIndexPoint:(struct CGPoint)arg0;
- (struct ?)speedAtIndexPoint:(struct CGPoint)arg0;
- (struct ?)rotationAtIndexPoint:(struct CGPoint)arg0;
- (float)scaleAtIndexPoint:(struct CGPoint)arg0;
- (struct ?)lifeSpanAtIndexPoint:(struct CGPoint)arg0;
- (struct ?)colorAtIndexPoint:(struct CGPoint)arg0;
- (char)visibilityAtIndexPoint:(struct CGPoint)arg0;
- (void)drawGLSLWithPercent:(float)arg0 opacity:(float)arg1;
- (struct CGSize)objectSize;
- (TSDGLDataBufferAttribute *)positionAttribute;
- (TSDGLDataBufferAttribute *)centerAttribute;
- (TSDGLDataBufferAttribute *)texCoordAttribute;
- (TSDGLDataBufferAttribute *)particleTexCoordAttribute;
- (TSDGLDataBufferAttribute *)colorAttribute;
- (TSDGLDataBufferAttribute *)lifeSpanAttribute;
- (TSDGLDataBufferAttribute *)speedAttribute;
- (TSDGLDataBufferAttribute *)rotationAttribute;
- (TSDGLDataBufferAttribute *)scaleAttribute;
- (void)p_setDataBufferAttribute:(id *)arg0 withName:(NSString *)arg1 defaultDataType:(int)arg2 normalized:(char)arg3 componentCount:(unsigned long)arg4;
- (void)p_logParticleInformation;
- (struct CGSize)particleSize;
- (void)dealloc;
- (NSString *)description;
- (float)duration;
- (unsigned int)direction;
- (TSDGLShader *)shader;
- (struct CGSize)slideSize;

@end
