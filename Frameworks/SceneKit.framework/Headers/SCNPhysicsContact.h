/* Runtime dump - SCNPhysicsContact
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsContact : NSObject
{
    id _reserved;
    SCNNode * _nodeA;
    SCNNode * _nodeB;
    struct SCNVector3 _contactPoint;
    struct SCNVector3 _contactNormal;
    float _collisionImpulse;
    float _distance;
    int _updateCount;
}

@property (readonly, nonatomic) SCNNode * nodeA;
@property (readonly, nonatomic) SCNNode * nodeB;
@property (readonly, nonatomic) struct SCNVector3 contactPoint;
@property (readonly, nonatomic) struct SCNVector3 contactNormal;
@property (readonly, nonatomic) float collisionImpulse;
@property (readonly, nonatomic) float penetrationDistance;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNPhysicsContact *)_contactWithManifold:(struct btPersistentManifold *)arg0 index:(struct btPersistentManifold)arg1;

- (void)_setupWithManifold:(struct btPersistentManifold *)arg0 index:(struct btPersistentManifold)arg1 point:(struct btVector3)arg2;
- (SCNNode *)nodeA;
- (SCNNode *)nodeB;
- (struct SCNVector3)contactNormal;
- (float)collisionImpulse;
- (float)penetrationDistance;
- (void)_fillNodeA:(id)arg0 nodeB:(SCNNode *)arg1 contactPoint:(struct SCNVector3)arg2 collisionImpulse:(struct SCNVector3)arg3 distance:(float)arg4;
- (void)_prepareUpdate;
- (char)_shouldPostUpdate;
- (void)dealloc;
- (SCNPhysicsContact *)init;
- (NSString *)description;
- (void).cxx_construct;
- (struct SCNVector3)contactPoint;

@end
