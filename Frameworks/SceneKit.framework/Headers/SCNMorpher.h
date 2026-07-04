/* Runtime dump - SCNMorpher
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMorpher : NSObject <SCNAnimatable, NSSecureCoding>
{
    id _reserved;
    struct __C3DMorph * _morpher;
    id _isPresentationInstance;
    int _calculationMode;
    SCNOrderedDictionary * _animations;
    NSArray * _targets;
    NSMutableArray * _weights;
    NSString * _name;
    char _shouldMorphNormals;
}

@property (copy, nonatomic) NSArray * targets;
@property (nonatomic) int calculationMode;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)SCNJSExportProtocol;
+ (struct __C3DMorph *)morpher;
+ (SCNMorpher *)morpherWithMorphRef:(struct __C3DMorph *)arg0;
+ (char)supportsSecureCoding;

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
- (void)_syncObjCModel;
- (void)_syncEntityObjCModel;
- (struct __C3DMorph *)morphRef;
- (int)calculationMode;
- (SCNMorpher *)initWithMorphRef:(struct __C3DMorph *)arg0;
- (SCNMorpher *)initPresentationMorpherWithMorphRef:(struct __C3DMorph *)arg0;
- (SCNMorpher *)presentationMorpher;
- (void)setWeight:(float)arg0 forTargetAtIndex:(unsigned int)arg1;
- (float)weightForTargetAtIndex:(unsigned int)arg0;
- (NSArray *)targets;
- (void)setTargets:(NSArray *)arg0;
- (void)_customEncodingOfSCNMorpher:(id)arg0;
- (void)_customDecodingOfSCNMorpher:(id)arg0;
- (void)setWeights:(NSMutableArray *)arg0;
- (void)setShouldMorphNormals:(char)arg0;
- (void)_didDecodeSCNMorpher:(id)arg0;
- (char)shouldMorphNormals;
- (void)dealloc;
- (SCNMorpher *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNMorpher *)init;
- (SCNMorpher *)copy;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)identifier;
- (void)addAnimation:(CAAnimation *)arg0;
- (SCNMorpher *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)animationKeys;
- (CAAnimation *)animationForKey:(NSString *)arg0;
- (void)removeAnimationForKey:(NSString *)arg0;
- (void)addAnimation:(CAAnimation *)arg0 forKey:(NSString *)arg1;
- (void)setCalculationMode:(int)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (void)removeAllAnimations;

@end
