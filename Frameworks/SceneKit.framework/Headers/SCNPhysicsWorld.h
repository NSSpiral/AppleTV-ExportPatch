/* Runtime dump - SCNPhysicsWorld
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsWorld : NSObject <NSSecureCoding>
{
    id _reserved;
    struct btDiscreteDynamicsWorld * _world;
    struct btOverlappingPairCallback * _ghostPairCallback;
    struct btVehicleRaycaster * _vehicleRayCaster;
    struct btC3DDebugDraw * _debugDrawer;
    struct c3dAether _aether;
    char _hasActiveFields;
    <SCNPhysicsContactDelegate> * _contactDelegate;
    SCNPhysicsContact * _contact;
    SCNScene * _scene;
    struct SCNVector3 _gravity;
    float _speed;
    float _scale;
    double _timeStep;
    NSMutableArray * _fields;
    double _elapsedTime;
    NSMutableArray * _behaviors;
}

@property (nonatomic) struct SCNVector3 gravity;
@property (nonatomic) float speed;
@property (nonatomic) double timeStep;
@property <SCNPhysicsContactDelegate> * contactDelegate;

+ (NSObject *)SCNJSExportProtocol;
+ (char)supportsSecureCoding;

- (SCNScene *)scene;
- (void)_postCommandWithBlock:(id /* block */)arg0;
- (void)_removeFieldFromWorld:(id)arg0;
- (void)_addFieldToWorld:(id)arg0;
- (struct btDynamicsWorld *)_handle;
- (void)_allowGhostObjects;
- (void)setScene:(SCNScene *)arg0;
- (void)_preTick:(double)arg0;
- (void)_createDynamicWorld;
- (NSObject *)_rayTestWithSegmentFromPoint:(struct btVector3)arg0 toPoint:(struct btVector3)arg1 options:(NSDictionary *)arg2;
- (NSArray *)allBehaviors;
- (NSArray *)rayTestWithSegmentFromPoint:(struct SCNVector3)arg0 toPoint:(struct SCNVector3)arg1 options:(NSDictionary *)arg2;
- (NSArray *)contactTestBetweenBody:(SCNPhysicsBody *)arg0 andBody:(SCNPhysicsBody *)arg1 options:(NSDictionary *)arg2;
- (NSArray *)contactTestWithBody:(SCNPhysicsBody *)arg0 options:(NSDictionary *)arg1;
- (NSArray *)convexSweepTestWithShape:(SCNPhysicsShape *)arg0 fromTransform:(struct SCNMatrix4)arg1 toTransform:(struct SCNMatrix4)arg2 options:(NSDictionary *)arg3;
- (void)updateCollisionPairs;
- (double)timeStep;
- (void)setTimeStep:(double)arg0;
- (void)_customEncodingOfSCNPhysicsWorld:(id)arg0;
- (void)_customDecodingOfSCNPhysicsWorld:(id)arg0;
- (void)_didDecodeSCNPhysicsWorld:(id)arg0;
- (id)_physicsContact;
- (SCNPhysicsWorld *)initWithScene:(SCNScene *)arg0;
- (void)sceneWillDie;
- (char)_needsRedraw;
- (struct c3dAether *)_aetherHandle;
- (void)_step:(double)arg0;
- (struct btVehicleRaycaster *)_defaultVehicleRayCaster;
- (void)_drawDebugInAuthoringEnvironment:(void *)arg0;
- (void)dealloc;
- (SCNPhysicsWorld *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setSpeed:(float)arg0;
- (float)scale;
- (float)speed;
- (void)setScale:(float)arg0;
- (void)removeAllBehaviors;
- (void)addBehavior:(SCNPhysicsBehavior *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (<SCNPhysicsContactDelegate> *)contactDelegate;
- (void)setContactDelegate:(<SCNPhysicsContactDelegate> *)arg0;
- (void)removeBehavior:(SCNPhysicsBehavior *)arg0;
- (struct SCNVector3)gravity;
- (void)setGravity:(struct SCNVector3)arg0;
- (struct btDynamicsWorld *)handle;

@end
