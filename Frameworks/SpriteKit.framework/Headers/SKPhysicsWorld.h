/* Runtime dump - SKPhysicsWorld
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsWorld : NSObject <NSCoding>
{
    float speed;
    <SKPhysicsContactDelegate> * _contactDelegate;
    struct CGVector _gravity;
}

@property (nonatomic) struct CGVector gravity;
@property (nonatomic) float speed;
@property (nonatomic) <SKPhysicsContactDelegate> * contactDelegate;

+ (SKPhysicsWorld *)allocWithZone:(struct _NSZone *)arg0;
+ (SKPhysicsWorld *)copyWithZone:(struct _NSZone *)arg0;

- (char)hasBodies;
- (char)hasFields;
- (void)removeAllBodies;
- (void)removeAllJoints;
- (void)enumerateBodiesAtPoint:(struct CGPoint)arg0 usingBlock:(id /* block */)arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint)arg0 end:(struct CGPoint)arg1 usingBlock:(id /* block */)arg2;
- (NSObject *)bodyAtPoint:(struct CGPoint)arg0;
- (NSObject *)bodyInRect:(struct CGRect)arg0;
- (id)bodyAlongRayStart:(struct CGPoint)arg0 end:(struct CGPoint)arg1;
- (NSArray *)sampleFields:(NSArray *)arg0;
- (id)sampleFieldsAt:(id)arg0;
- (SKPhysicsWorld *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setSpeed:(float)arg0;
- (float)speed;
- (void)removeJoint:(SCNIKJoint *)arg0;
- (void)addJoint:(SCNIKJoint *)arg0;
- (void)addBody:(NSObject *)arg0;
- (void)removeBody:(NSObject *)arg0;
- (void).cxx_construct;
- (<SKPhysicsContactDelegate> *)contactDelegate;
- (void)setContactDelegate:(<SKPhysicsContactDelegate> *)arg0;
- (void)enumerateBodiesInRect:(struct CGRect)arg0 usingBlock:(struct CGSize)arg1;
- (char)stepWithTime:(double)arg0 velocityIterations:(unsigned int)arg1 positionIterations:(unsigned int)arg2;
- (struct CGVector)gravity;
- (void)setGravity:(struct CGVector)arg0;
- (id)bodies;
- (NSMutableArray *)fields;

@end
