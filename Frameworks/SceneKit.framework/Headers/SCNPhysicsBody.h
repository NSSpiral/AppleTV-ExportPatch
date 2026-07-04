/* Runtime dump - SCNPhysicsBody
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsBody : NSObject <NSCopying, NSSecureCoding>
{
    id _reserved;
    SCNNode * _node;
    float _mass;
    float _charge;
    float _friction;
    float _restitution;
    float _rollingFriction;
    SCNPhysicsShape * _physicsShape;
    int _type;
    float _damping;
    struct SCNVector4 _angularVelocity;
    float _angularDamping;
    struct SCNVector3 _velocityFactor;
    struct SCNVector3 _angularVelocityFactor;
    struct SCNVector3 _velocity;
    unsigned int _categoryBitMask;
    unsigned int _collisionBitMask;
    char _resting;
    char _allowsResting;
    char _isDefaultShape;
    struct btRigidBody * _body;
}

@property (nonatomic) int type;
@property (nonatomic) float mass;
@property (nonatomic) float charge;
@property (nonatomic) float friction;
@property (nonatomic) float restitution;
@property (nonatomic) float rollingFriction;
@property (retain, nonatomic) SCNPhysicsShape * physicsShape;
@property (readonly, nonatomic) char isResting;
@property (nonatomic) char allowsResting;
@property (nonatomic) struct SCNVector3 velocity;
@property (nonatomic) struct SCNVector4 angularVelocity;
@property (nonatomic) float damping;
@property (nonatomic) float angularDamping;
@property (nonatomic) struct SCNVector3 velocityFactor;
@property (nonatomic) struct SCNVector3 angularVelocityFactor;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) unsigned int collisionBitMask;

+ (NSObject *)SCNJSExportProtocol;
+ (NSObject *)bodyWithType:(int)arg0 shape:(SCNPhysicsShape *)arg1;
+ (NSObject *)staticBody;
+ (NSObject *)dynamicBody;
+ (NSObject *)kinematicBody;
+ (char)supportsSecureCoding;

- (void)_removeOwner;
- (void)_setOwner:(NSObject *)arg0;
- (NSObject *)_owner;
- (struct btRigidBody *)_handle;
- (struct __C3DScene *)sceneRef;
- (struct btRigidBody *)_createBody;
- (SCNPhysicsBody *)initWithType:(int)arg0 shape:(NSString *)arg1;
- (void)moveToTransform:(struct SCNMatrix4)arg0;
- (void)applyForce:(struct SCNVector3)arg0 impulse:(char)arg1;
- (void)applyForce:(struct SCNVector3)arg0 atPosition:(struct SCNVector3)arg1 impulse:(char)arg2;
- (void)applyTorque:(struct SCNVector4)arg0 impulse:(char)arg1;
- (void)clearAllForces;
- (float)rollingFriction;
- (void)setRollingFriction:(float)arg0;
- (SCNPhysicsShape *)physicsShape;
- (void)setPhysicsShape:(SCNPhysicsShape *)arg0;
- (char)allowsResting;
- (void)setAllowsResting:(char)arg0;
- (struct SCNVector3)velocityFactor;
- (void)setVelocityFactor:(struct SCNVector3)arg0;
- (struct SCNVector3)angularVelocityFactor;
- (void)setAngularVelocityFactor:(struct SCNVector3)arg0;
- (void)_didDecodeSCNPhysicsBody:(NSObject *)arg0;
- (void)_activate;
- (void)resetToTransform:(struct SCNMatrix4)arg0;
- (void)moveToPosition:(struct SCNVector3)arg0;
- (void)rotateToAxisAngle:(struct SCNVector4)arg0;
- (void)dealloc;
- (SCNPhysicsBody *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNPhysicsBody *)copy;
- (void)setVelocity:(struct SCNVector3)arg0;
- (void)setDamping:(float)arg0;
- (void)setMass:(float)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (float)charge;
- (SCNPhysicsBody *)copyWithZone:(struct _NSZone *)arg0;
- (void)setCharge:(float)arg0;
- (float)damping;
- (void)setFriction:(float)arg0;
- (void)setRestitution:(float)arg0;
- (float)friction;
- (void)setAngularDamping:(float)arg0;
- (struct SCNVector3)velocity;
- (struct SCNVector4)angularVelocity;
- (void)setAngularVelocity:(struct SCNVector4)arg0;
- (float)restitution;
- (float)angularDamping;
- (float)mass;
- (void).cxx_construct;
- (void)resetTransform;
- (unsigned int)collisionBitMask;
- (void)setCollisionBitMask:(unsigned int)arg0;
- (unsigned int)categoryBitMask;
- (void)setCategoryBitMask:(unsigned int)arg0;
- (char)isResting;

@end
