/* Runtime dump - SCNPhysicsField
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding>
{
    void * _reserved;
    struct SCNVector3 _halfExtent;
    float _strength;
    float _falloffExponent;
    float _minimumDistance;
    char _active;
    int _scope;
    char _usesEllipsoidalExtent;
    char _exclusive;
    struct SCNVector3 _offset;
    struct SCNVector3 _direction;
    unsigned int _categoryBitMask;
    SCNPhysicsWorld * _world;
    SCNNode * _node;
    struct c3dPhysicsField * _field;
}

@property (nonatomic) float strength;
@property (nonatomic) float falloffExponent;
@property (nonatomic) float minimumDistance;
@property (nonatomic) char active;
@property (nonatomic) char exclusive;
@property (nonatomic) struct SCNVector3 halfExtent;
@property (nonatomic) char usesEllipsoidalExtent;
@property (nonatomic) int scope;
@property (nonatomic) struct SCNVector3 offset;
@property (nonatomic) struct SCNVector3 direction;
@property (nonatomic) unsigned int categoryBitMask;

+ (SCNPhysicsField *)dragField;
+ (SCNPhysicsField *)vortexField;
+ (SCNPhysicsField *)radialGravityField;
+ (SCNPhysicsField *)linearGravityField;
+ (SCNPhysicsField *)noiseFieldWithSmoothness:(float)arg0 animationSpeed:(float)arg1;
+ (SCNPhysicsField *)turbulenceFieldWithSmoothness:(float)arg0 animationSpeed:(float)arg1;
+ (SCNPhysicsField *)springField;
+ (SCNPhysicsField *)electricField;
+ (SCNPhysicsField *)magneticField;
+ (SCNPhysicsField *)customFieldWithEvaluationBlock:(id /* block */)arg0;
+ (NSObject *)SCNJSExportProtocol;
+ (char)supportsSecureCoding;
+ (struct c3dPhysicsField *)field;

- (void)_removeOwner;
- (float)falloffExponent;
- (void)setFalloffExponent:(float)arg0;
- (char)isExclusive;
- (void)setExclusive:(char)arg0;
- (struct SCNVector3)halfExtent;
- (void)setHalfExtent:(struct SCNVector3)arg0;
- (char)usesEllipsoidalExtent;
- (void)setUsesEllipsoidalExtent:(char)arg0;
- (struct c3dPhysicsField *)_createField;
- (void)_setupCommonProperties;
- (void)_setOwner:(NSObject *)arg0;
- (void)_setWorld:(WebScriptWorld *)arg0;
- (NSObject *)_owner;
- (struct c3dPhysicsField *)_handle;
- (void)dealloc;
- (SCNPhysicsField *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNPhysicsField *)init;
- (SCNPhysicsField *)copy;
- (char)isActive;
- (SCNPhysicsField *)copyWithZone:(struct _NSZone *)arg0;
- (void)_commonInit;
- (void)setDirection:(struct SCNVector3)arg0;
- (struct SCNVector3)direction;
- (void)setOffset:(struct SCNVector3)arg0;
- (struct SCNVector3)offset;
- (void)setActive:(char)arg0;
- (void)setScope:(int)arg0;
- (int)scope;
- (void).cxx_construct;
- (void)setMinimumDistance:(float)arg0;
- (float)minimumDistance;
- (float)strength;
- (void)setStrength:(float)arg0;
- (unsigned int)categoryBitMask;
- (void)setCategoryBitMask:(unsigned int)arg0;

@end
