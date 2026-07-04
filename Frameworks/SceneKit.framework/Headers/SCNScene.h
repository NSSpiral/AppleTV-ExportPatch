/* Runtime dump - SCNScene
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNScene : NSObject <NSSecureCoding>
{
    id _reserved;
    struct __C3DScene * _scene;
    struct __C3DLibrary * _library;
    SCNSceneSource * _sceneSource;
    double _lastEvalTime;
    SCNPhysicsWorld * _physicsWorld;
    SCNNode * _rootNode;
    SCNMaterialProperty * _background;
    NSMutableDictionary * _userAttributes;
    float _fogStartDistance;
    float _fogEndDistance;
    float _fogDensityExponent;
    id _fogColor;
    char _paused;
    SCNAuthoringEnvironment * _authoringEnvironment;
}

@property (readonly, nonatomic) SCNNode * rootNode;
@property (readonly, nonatomic) SCNPhysicsWorld * physicsWorld;
@property (readonly, nonatomic) SCNMaterialProperty * background;
@property (nonatomic) float fogStartDistance;
@property (nonatomic) float fogEndDistance;
@property (nonatomic) float fogDensityExponent;
@property (retain, nonatomic) id fogColor;
@property (nonatomic) char paused;

+ (struct __C3DScene *)scene;
+ (NSObject *)SCNJSExportProtocol;
+ (SCNScene *)sceneNamed:(NSString *)arg0 inDirectory:(NSString *)arg1 options:(NSDictionary *)arg2;
+ (NSURL *)sceneWithURL:(NSURL *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
+ (NSData *)sceneWithData:(NSData *)arg0 options:(NSDictionary *)arg1;
+ (SCNScene *)sceneNamed:(NSString *)arg0;
+ (SCNScene *)sceneNamed:(NSString *)arg0 options:(NSDictionary *)arg1;
+ (NSURL *)sceneWithURL:(NSString *)arg0 options:(NSDictionary *)arg1;
+ (NSURL *)sceneWithURL:(NSString *)arg0 atIndex:(int)arg1 options:(NSDictionary *)arg2;
+ (NSData *)sceneWithData:(NSData *)arg0 atIndex:(int)arg1 options:(NSDictionary *)arg2;
+ (SCNScene *)sceneWithSceneRef:(struct __C3DScene *)arg0;
+ (SEL)jsConstructor;
+ (char)supportsSecureCoding;

- (struct __C3DScene *)scene;
- (SCNPhysicsWorld *)physicsWorld;
- (struct __C3DScene *)sceneRef;
- (void *)__CFObject;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0;
- (char)isPausedOrPausedByInheritance;
- (id)_physicsWorldCreateIfNeeded:(char)arg0;
- (void)_syncObjCModel;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0 property:(struct __C3DModelTarget *)arg1;
- (NSArray *)particleSystems;
- (SCNNode *)rootNode;
- (void)removeAllParticleSystems;
- (void)removeParticleSystem:(SCNParticleSystem *)arg0;
- (void)_setRootNode:(NSObject *)arg0;
- (SCNScene *)initWithSceneRef:(struct __C3DScene *)arg0;
- (void)setEndTime:(double)arg0;
- (double)frameRate;
- (void)setFrameRate:(double)arg0;
- (float)playbackSpeed;
- (void)setPlaybackSpeed:(float)arg0;
- (void)setUpAxis:(struct SCNVector3)arg0;
- (struct SCNVector3)upAxis;
- (SCNScene *)initForJavascript:(SCNActionJavaScript *)arg0;
- (void)addParticleSystem:(SCNParticleSystem *)arg0 withTransform:(struct SCNMatrix4)arg1;
- (char)writeToURL:(NSURL *)arg0 options:(NSDictionary *)arg1 delegate:(NSObject *)arg2 progressHandler:(id /* block */)arg3;
- (float)fogStartDistance;
- (void)setFogStartDistance:(float)arg0;
- (float)fogEndDistance;
- (void)setFogEndDistance:(float)arg0;
- (float)fogDensityExponent;
- (void)setFogDensityExponent:(float)arg0;
- (UIColor *)fogColor;
- (void)setFogColor:(UIColor *)arg0;
- (void)_customEncodingOfSCNScene:(NSObject *)arg0;
- (void)_customDecodingOfSCNScene:(NSObject *)arg0;
- (void)setRootNode:(SCNNode *)arg0;
- (double)lastEvalTime;
- (void)setLastEvalTime:(double)arg0;
- (NSArray *)_scenes;
- (void)setSceneSource:(SCNSceneSource *)arg0;
- (SCNSceneSource *)sceneSource;
- (void)_scaleSceneBy:(float)arg0;
- (void)addSceneAnimation:(NSObject *)arg0 forKey:(NSString *)arg1 target:(NSObject *)arg2;
- (char)writeToURL:(NSURL *)arg0 options:(NSDictionary *)arg1;
- (void)dealloc;
- (SCNScene *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNScene *)init;
- (void)setStartTime:(double)arg0;
- (void)lock;
- (void)unlock;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (void)setPaused:(char)arg0;
- (SCNMaterialProperty *)background;
- (double)startTime;
- (<TSKModel> *)root;
- (void)setAttribute:(char *)arg0 forKey:(NSString *)arg1;
- (struct __C3DLibrary *)library;
- (void)setLibrary:(struct __C3DLibrary *)arg0;
- (NSString *)attributeForKey:(NSString *)arg0;
- (char)isPaused;
- (double)endTime;

@end
