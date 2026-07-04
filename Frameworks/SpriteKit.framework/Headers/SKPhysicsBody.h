/* Runtime dump - SKPhysicsBody
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsBody : NSObject <NSCopying, NSCoding>
{
    char _dynamic;
    char _usesPreciseCollisionDetection;
    char _allowsRotation;
    char _pinned;
    char _resting;
    char _affectedByGravity;
    float _friction;
    float _charge;
    float _restitution;
    float _linearDamping;
    float _angularDamping;
    float _density;
    float _mass;
    float _area;
    unsigned int _fieldBitMask;
    unsigned int _categoryBitMask;
    unsigned int _collisionBitMask;
    unsigned int _contactTestBitMask;
    NSArray * _joints;
    SKNode * _node;
    float _angularVelocity;
    struct CGVector _velocity;
}

@property (nonatomic) char dynamic;
@property (nonatomic) char usesPreciseCollisionDetection;
@property (nonatomic) char allowsRotation;
@property (nonatomic) char pinned;
@property (nonatomic) char resting;
@property (nonatomic) float friction;
@property (nonatomic) float charge;
@property (nonatomic) float restitution;
@property (nonatomic) float linearDamping;
@property (nonatomic) float angularDamping;
@property (nonatomic) float density;
@property (nonatomic) float mass;
@property (readonly, nonatomic) float area;
@property (nonatomic) char affectedByGravity;
@property (nonatomic) unsigned int fieldBitMask;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) unsigned int collisionBitMask;
@property (nonatomic) unsigned int contactTestBitMask;
@property (readonly, nonatomic) NSArray * joints;
@property (readonly, weak, nonatomic) SKNode * node;
@property (nonatomic) struct CGVector velocity;
@property (nonatomic) float angularVelocity;

+ (SKPhysicsBody *)bodyWithCircleOfRadius:(float)arg0 center:(struct CGPoint)arg1;
+ (NSObject *)bodyWithTexture:(NSObject *)arg0 alphaThreshold:(float)arg1 size:(struct CGSize)arg2;
+ (SKPhysicsBody *)bodyWithBodies:(id)arg0;
+ (NSObject *)bodyWithRectangleOfSize:(struct CGSize)arg0 center:(struct CGPoint)arg1;
+ (NSObject *)bodyWithEdgeLoopFromRect:(struct CGRect)arg0;
+ (NSObject *)bodyWithTexture:(NSObject *)arg0 size:(struct CGSize)arg1;
+ (SKPhysicsBody *)allocWithZone:(struct _NSZone *)arg0;
+ (SKPhysicsBody *)copyWithZone:(struct _NSZone *)arg0;
+ (NSObject *)bodyWithRectangleOfSize:(struct CGSize)arg0;
+ (SKPhysicsBody *)bodyWithCircleOfRadius:(float)arg0;
+ (NSString *)bodyWithEdgeLoopFromPath:(struct CGPath *)arg0;
+ (NSObject *)bodyWithEdgeFromPoint:(struct CGPoint)arg0 toPoint:(struct CGPoint)arg1;
+ (NSString *)bodyWithPolygonFromPath:(struct CGPath *)arg0;
+ (NSString *)bodyWithEdgeChainFromPath:(struct CGPath *)arg0;

- (NSArray *)joints;
- (char)pinned;
- (void)setFieldBitMask:(unsigned int)arg0;
- (unsigned int)fieldBitMask;
- (void)applyForce:(struct CGVector)arg0;
- (void)applyForce:(struct CGVector)arg0 atPoint:(struct CGPoint)arg1;
- (void)applyTorque:(float)arg0;
- (void)applyImpulse:(struct CGVector)arg0 atPoint:(struct CGPoint)arg1;
- (void)applyAngularImpulse:(float)arg0;
- (id)allContactedBodies;
- (unsigned int)contactTestBitMask;
- (SKPhysicsBody *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setVelocity:(struct CGVector)arg0;
- (void)setMass:(float)arg0;
- (float)charge;
- (SKPhysicsBody *)copyWithZone:(struct _NSZone *)arg0;
- (void)setCharge:(float)arg0;
- (void)setPinned:(char)arg0;
- (void)setResting:(char)arg0;
- (void)setDynamic:(char)arg0;
- (void)setFriction:(float)arg0;
- (void)setDensity:(float)arg0;
- (void)setAllowsRotation:(char)arg0;
- (void)setRestitution:(float)arg0;
- (float)friction;
- (float)density;
- (void)setLinearDamping:(float)arg0;
- (void)setAngularDamping:(float)arg0;
- (char)allowsRotation;
- (struct CGVector)velocity;
- (float)angularVelocity;
- (void)setAngularVelocity:(float)arg0;
- (float)restitution;
- (float)linearDamping;
- (float)angularDamping;
- (float)mass;
- (void)applyImpulse:(struct CGVector)arg0;
- (void).cxx_construct;
- (SKNode *)node;
- (void).cxx_destruct;
- (void)setAffectedByGravity:(char)arg0;
- (void)setUsesPreciseCollisionDetection:(char)arg0;
- (unsigned int)collisionBitMask;
- (void)setCollisionBitMask:(unsigned int)arg0;
- (unsigned int)categoryBitMask;
- (void)setCategoryBitMask:(unsigned int)arg0;
- (void)setContactTestBitMask:(unsigned int)arg0;
- (char)isDynamic;
- (char)usesPreciseCollisionDetection;
- (char)isResting;
- (char)affectedByGravity;
- (float)area;

@end
