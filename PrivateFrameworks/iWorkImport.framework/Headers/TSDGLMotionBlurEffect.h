/* Runtime dump - TSDGLMotionBlurEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLMotionBlurEffect : NSObject
{
    struct CGSize _framebufferSize;
    struct CGSize _slideSize;
    TSDGLFrameBuffer * _combinedFramebuffer;
    TSDGLShader * _velocityVisualizerShader;
    TSDGLShader * _velocityCollectionShader;
    TSDGLFrameBuffer * _velocityFramebuffer;
    TSDGLShader * _defaultTextureShader;
    TSDGLFrameBuffer * _colorFramebuffer;
    TSDGLDataBuffer * _colorFBODataBuffer;
    TSDGLDataBuffer * _velocityFBODataBuffer;
    TSDGLDataBuffer * _velocitySquashedFBODataBuffer;
    TSDGLDataBuffer * _FBODataBuffer;
    TSDGLShader * _velocityTileMaxVerticalShader;
    TSDGLShader * _velocityTileMaxHorizontalShader;
    TSDGLShader * _velocityNeighborMaxHorizontalShader;
    TSDGLShader * _velocityNeighborMaxVerticalShader;
    id _originalViewport;
    char _isSingleObject;
    float _motionBlurStrength;
    int _debugDrawMode;
    float _framebufferScale;
    TSDGLState * _GLState;
}

@property (nonatomic) char isSingleObject;
@property (nonatomic) float motionBlurStrength;
@property (nonatomic) int debugDrawMode;
@property (nonatomic) float framebufferScale;
@property (retain, nonatomic) TSDGLState * GLState;

- (void)p_updateMaxVelocityInShadersWithScale:(float)arg0 isColorFBO:(char)arg1;
- (struct CGSize)velocityScaleForColorFBO:(char)arg0;
- (float)motionBlurStrength;
- (void)setupMotionBlurEffectIfNecessary;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg0;
- (int)debugDrawMode;
- (void)p_blitIntoVelocityFramebufferWithCurrentGLFramebuffer:(int)arg0;
- (void)p_blitIntoColorFramebufferWithCurrentGLFramebuffer:(int)arg0;
- (void)p_dilateVelocityBufferWithCurrentGLFramebuffer:(int)arg0;
- (char)isSingleObject;
- (struct CGSize)p_velocityFramebufferSize;
- (struct CGSize)p_squashedVelocityFramebufferSize;
- (void)p_setupShaders;
- (void)p_setupVelocityFramebufferIfNecessary;
- (struct CGSize)p_velocityFramebufferTextureScale;
- (TSDGLMotionBlurEffect *)initWithFramebufferSize:(struct CGSize)arg0 slideSize:(struct CGSize)arg1;
- (void)setMotionBlurStrength:(float)arg0;
- (void)updateVelocityScaleInShader:(NSObject *)arg0;
- (void)bindColorAndVelocityFramebuffer;
- (void)bindColorFramebuffer;
- (void)bindVelocityFramebuffer;
- (void)drawResultWithCurrentGLFramebuffer:(int)arg0;
- (void)setIsSingleObject:(char)arg0;
- (void)setDebugDrawMode:(int)arg0;
- (float)framebufferScale;
- (void)setFramebufferScale:(float)arg0;
- (TSDGLState *)GLState;
- (void)setGLState:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)teardown;

@end
