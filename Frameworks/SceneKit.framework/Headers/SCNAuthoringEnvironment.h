/* Runtime dump - SCNAuthoringEnvironment
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNAuthoringEnvironment : NSObject
{
    struct __C3DEngineContext * _engineContext;
    <SCNSceneRenderer> * _sceneRenderer;
    struct __C3DFXGLSLProgram * _noColorProgram;
    struct __C3DFXGLSLProgram * _colorOnlyProgram;
    struct __C3DFXGLSLProgram * _colorAndTextureProgram;
    struct ? _logsInfo;
    struct ? _boldLogsInfo;
    struct ? _manipulatorsInfo;
    struct ? _dynamicLinesInfo;
    struct ? _dynamicTrianglesInfo;
    struct ? _overlayDynamicLinesInfo;
    struct ? _textInfo;
    struct ? _normalTextInfo;
    struct ? _boldTextInfo;
    void * _arrowIndicesOffset;
    unsigned short _arrowIndicesCount;
    void * _quadrantIndicesOffset;
    unsigned short _quadrantIndicesCount;
    void * _quadrantRingIndicesOffset;
    unsigned short _quadrantRingIndicesCount;
    char _showsAllBoundingBoxes;
    char _showsAllBoundingSpheres;
    char _showsAttributesOfAllCameras;
    char _showsAttributesOfAllLights;
    char _showsPhysics;
    char _showsLighting;
    char _hasLighting;
    NSMutableArray * _individualNodesWantingBoundingBox;
    NSMutableArray * _individualNodesWantingCameraAttributes;
    NSMutableArray * _individualNodesWantingLightAttributes;
    struct ? _statisticsInfo;
    float _drawScale;
    SCNManipulator * _manipulator;
}

@property (readonly) <SCNSceneRenderer> * sceneRenderer;
@property (nonatomic) char showsPhysics;
@property (nonatomic) char showsLighting;
@property (nonatomic) char showsAllBoundingSpheres;
@property (nonatomic) char showsAllBoundingBoxes;
@property (nonatomic) char showsAttributesOfAllCameras;
@property (nonatomic) char showsAttributesOfAllLights;

+ (NSObject *)authoringEnvironmentForSceneRenderer:(NSObject *)arg0;

- (char)didTapAtPoint:(struct CGPoint)arg0;
- (NSString *)_initWithEngineContext:(struct __C3DEngineContext *)arg0;
- (<SCNSceneRenderer> *)sceneRenderer;
- (void)setShowsAllBoundingBoxes:(char)arg0;
- (char)showsAllBoundingBoxes;
- (void)setShowsAllBoundingSpheres:(char)arg0;
- (char)showsAllBoundingSpheres;
- (void)setShowsPhysics:(char)arg0;
- (char)showsPhysics;
- (void)setShowsLighting:(char)arg0;
- (char)showsLighting;
- (void)showBoundingBoxForNode:(NSObject *)arg0;
- (void)hideBoundingBoxForNode:(NSObject *)arg0;
- (void)hideAllIndividualBoundingBoxes;
- (char)showsAttributesOfAllCameras;
- (void)setShowsAttributesOfAllCameras:(char)arg0;
- (char)showsAttributesOfAllLights;
- (void)setShowsAttributesOfAllLights:(char)arg0;
- (void)showCameraAttributesForNode:(NSObject *)arg0;
- (void)hideCameraAttributesForNode:(NSObject *)arg0;
- (void)hideAttributesOfAllIndividualCameras;
- (void)showLightAttributesForNode:(NSObject *)arg0;
- (void)hideLightAttributesForNode:(NSObject *)arg0;
- (void)hideAttributesOfAllIndividualLights;
- (void)cancelEdition;
- (void)beginEditingNode:(NSObject *)arg0;
- (void)drawLineFromPoint:(struct SCNVector3)arg0 toPoint:(struct SCNVector3)arg1 color:(UIColor *)arg2;
- (void)drawString:(NSString *)arg0 atPoint:(struct CGPoint)arg1 color:(UIColor *)arg2;
- (void)dealloc;
- (SCNAuthoringEnvironment *)init;

@end
