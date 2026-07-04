/* Runtime dump - PKPhysicsWorld
 * Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsWorld : NSObject <NSCoding>
{
    struct b2World * _world;
    struct b2Vec2 _gravity;
    BOOL _doSleep;
    double _accumulatedDt;
    struct PKContactListener _contactListener;
    float _speed;
    NSMutableArray * _bodies;
    NSMutableArray * _joints;
    NSMutableArray * _postStepBlocks;
    struct PKDebugDrawPacket drawPacket;
}

@property (nonatomic) BOOL _doSleep;
@property (retain, nonatomic) NSMutableArray * _bodies;
@property (readonly, nonatomic) struct PKCAether * aether;
@property (readonly, nonatomic) struct b2World * _world;
@property (nonatomic) struct b2Vec2 _gravity;
@property (nonatomic) struct CGVector gravity;
@property (nonatomic) float speed;
@property (nonatomic) float velocityThreshold;
@property (nonatomic) <PKPhysicsContactDelegate> * contactDelegate;

+ (struct b2World *)world;

- (NSMutableArray *)joints;
- (void)setVelocityThreshold:(float)arg0;
- (void)addField:(UISearchBarTextField *)arg0;
- (struct PKCAether *)aether;
- (void)removeField:(UISearchBarTextField *)arg0;
- (char)hasBodies;
- (char)hasFields;
- (void)removeAllBodies;
- (void)removeAllJoints;
- (void)enumerateBodiesAtPoint:(struct CGPoint)arg0 usingBlock:(id /* block */)arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint)arg0 end:(struct CGPoint)arg1 usingBlock:(id /* block */)arg2;
- (NSObject *)bodyAtPoint:(struct CGPoint)arg0;
- (NSObject *)bodyInRect:(struct CGRect)arg0;
- (id)bodyAlongRayStart:(struct CGPoint)arg0 end:(struct CGPoint)arg1;
- (struct CGVector)sampleFields:(struct CGPoint)arg0;
- (id)sampleFieldsAt:(id)arg0;
- (struct PKDebugDrawPacket *)debugDrawPacket;
- (void)debugDraw:(float)arg0 matrix:(OADStyleMatrix *)arg1 showsPhysics:(char)arg2 showsOutlineInterior:(id)arg3 showsFields:(unsigned long)arg4;
- (void)dealloc;
- (PKPhysicsWorld *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (PKPhysicsWorld *)init;
- (PKPhysicsWorld *)copy;
- (void)setSpeed:(float)arg0;
- (PKPhysicsWorld *)copyWithZone:(struct _NSZone *)arg0;
- (float)speed;
- (struct b2World *)_world;
- (void)removeJoint:(SCNIKJoint *)arg0;
- (void)addJoint:(SCNIKJoint *)arg0;
- (void)addBody:(NSObject *)arg0;
- (void)removeBody:(NSObject *)arg0;
- (void)setCollisionDelegate:(<UICollisionBehaviorDelegate> *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (<PKPhysicsContactDelegate> *)contactDelegate;
- (void)setContactDelegate:(<PKPhysicsContactDelegate> *)arg0;
- (<UICollisionBehaviorDelegate> *)collisionDelegate;
- (void)enumerateBodiesInRect:(struct CGRect)arg0 usingBlock:(struct CGSize)arg1;
- (char)stepWithTime:(double)arg0 velocityIterations:(unsigned int)arg1 positionIterations:(unsigned int)arg2;
- (struct CGVector)gravity;
- (void)setGravity:(struct CGVector)arg0;
- (NSMutableArray *)bodies;
- (void)_runBlockOutsideOfTimeStep:(NSObject *)arg0;
- (void)__init__;
- (void)removeAllFields;
- (float)velocityThreshold;
- (NSArray *)sampleFields:(struct CGRect)arg0 categories:(struct CGSize)arg1 dataSize:(unsigned int)arg2;
- (struct CGVector)evalForce:(unsigned int)arg0 point:(struct CGPoint)arg1;
- (struct b2Vec2)_gravity;
- (BOOL)_doSleep;
- (NSMutableArray *)_bodies;
- (void)set_bodies:(NSMutableArray *)arg0;
- (void)set_doSleep:(BOOL)arg0;
- (void)set_gravity:(struct b2Vec2)arg0;

@end
