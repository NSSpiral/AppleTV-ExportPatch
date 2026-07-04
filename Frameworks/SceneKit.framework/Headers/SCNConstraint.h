/* Runtime dump - SCNConstraint
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNConstraint : NSObject <NSCopying, NSSecureCoding, SCNAnimatable>
{
    id _constraintReserved;
    struct __C3DConstraint * _constraintRef;
    SCNOrderedDictionary * _animations;
    char _enabled;
    float _influenceFactor;
}

@property (nonatomic) float influenceFactor;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)SCNJSExportProtocol;
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
- (void)setConstraintRef:(struct __C3DConstraint *)arg0;
- (struct __C3DConstraint *)constraintRef;
- (float)influenceFactor;
- (void)setInfluenceFactor:(float)arg0;
- (void)finalizeDecodeConstraint:(NSObject *)arg0;
- (void)dealloc;
- (SCNConstraint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNConstraint *)init;
- (SCNConstraint *)copy;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setEnabled:(char)arg0;
- (void)addAnimation:(CAAnimation *)arg0;
- (char)isEnabled;
- (SCNConstraint *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)animationKeys;
- (CAAnimation *)animationForKey:(NSString *)arg0;
- (void)removeAnimationForKey:(NSString *)arg0;
- (void)addAnimation:(CAAnimation *)arg0 forKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)copyTo:(NSObject *)arg0;

@end
