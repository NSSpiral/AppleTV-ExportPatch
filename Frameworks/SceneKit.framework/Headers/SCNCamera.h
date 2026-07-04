/* Runtime dump - SCNCamera
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNCamera : NSObject <SCNAnimatable, SCNTechniqueSupport, NSCopying, NSSecureCoding>
{
    id _reserved;
    struct __C3DCamera * _camera;
    id _isPresentationInstance;
    id _custom;
    id _usesOrthographicProjection;
    id _automaticallyAdjustsZRange;
    SCNOrderedDictionary * _animations;
    NSString * _name;
    double _xFov;
    double _yFov;
    double _orthographicScale;
    double _zNear;
    double _zFar;
    float _focalDistance;
    float _focalBlurRadius;
    float _focalSize;
    float _aperture;
    unsigned int _categoryBitMask;
    struct SCNMatrix4 _projectionTransform;
    SCNTechnique * _technique;
}

@property (copy, nonatomic) NSString * name;
@property (nonatomic) double xFov;
@property (nonatomic) double yFov;
@property (nonatomic) double zNear;
@property (nonatomic) double zFar;
@property (nonatomic) char automaticallyAdjustsZRange;
@property (nonatomic) char usesOrthographicProjection;
@property (nonatomic) double orthographicScale;
@property (nonatomic) float focalDistance;
@property (nonatomic) float focalSize;
@property (nonatomic) float focalBlurRadius;
@property (nonatomic) float aperture;
@property (nonatomic) unsigned int categoryBitMask;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) SCNTechnique * technique;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNCamera *)cameraWithCameraRef:(struct __C3DCamera *)arg0;
+ (char)supportsSecureCoding;
+ (struct __C3DCamera *)camera;

- (SCNScene *)scene;
- (struct __C3DScene *)sceneRef;
- (void *)__CFObject;
- (void)_syncObjCAnimations;
- (struct __C3DAnimationManager *)animationManager;
- (void)_pauseAnimation:(char)arg0 forKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg0;
- (void)resumeAnimationForKey:(NSString *)arg0;
- (char)isAnimationForKeyPaused:(NSString *)arg0;
- (void)removeAnimationForKey:(NSString *)arg0 fadeOutDuration:(float)arg1;
- (void)__removeAnimation:(NSObject *)arg0 forKey:(NSString *)arg1;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0;
- (char)isPausedOrPausedByInheritance;
- (SCNNode *)presentationInstance;
- (struct __C3DCamera *)cameraRef;
- (void)_syncObjCModel;
- (void)_syncEntityObjCModel;
- (double)orthographicScale;
- (void)setOrthographicScale:(double)arg0;
- (double)zNear;
- (void)setZNear:(double)arg0;
- (double)zFar;
- (void)setZFar:(double)arg0;
- (void)setTechnique:(SCNTechnique *)arg0;
- (SCNTechnique *)technique;
- (id)presentationCamera;
- (void)_registerAsObserver;
- (float)focalBlurRadius;
- (void)setFocalBlurRadius:(float)arg0;
- (char)hasCustomProjectionTransform;
- (double)xFov;
- (double)yFov;
- (char)usesOrthographicProjection;
- (float)focalDistance;
- (float)focalSize;
- (float)aperture;
- (SCNCamera *)initWithCameraRef:(struct __C3DCamera *)arg0;
- (SCNCamera *)initPresentationCameraWithCameraRef:(struct __C3DCamera *)arg0;
- (void)setFocalDistance:(float)arg0;
- (void)setAperture:(float)arg0;
- (void)setFocalSize:(float)arg0;
- (void)setXFov:(double)arg0;
- (void)setYFov:(double)arg0;
- (char)automaticallyAdjustsZRange;
- (void)setAutomaticallyAdjustsZRange:(char)arg0;
- (void)setUsesOrthographicProjection:(char)arg0;
- (struct SCNMatrix4)projectionTransform;
- (void)setProjectionTransform:(struct SCNMatrix4)arg0;
- (void)_customEncodingOfSCNCamera:(id)arg0;
- (void)_didDecodeSCNCamera:(id)arg0;
- (double)xMag;
- (void)setXMag:(double)arg0;
- (double)yMag;
- (void)setYMag:(double)arg0;
- (void)dealloc;
- (SCNCamera *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNCamera *)init;
- (SCNCamera *)copy;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)identifier;
- (void)addAnimation:(CAAnimation *)arg0;
- (SCNCamera *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)animationKeys;
- (CAAnimation *)animationForKey:(NSString *)arg0;
- (void)removeAnimationForKey:(NSString *)arg0;
- (void)addAnimation:(CAAnimation *)arg0 forKey:(NSString *)arg1;
- (void)setIdentifier:(NSString *)arg0;
- (void)removeAllAnimations;
- (unsigned int)categoryBitMask;
- (void)setCategoryBitMask:(unsigned int)arg0;

@end
