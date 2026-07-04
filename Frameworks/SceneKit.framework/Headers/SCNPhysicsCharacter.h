/* Runtime dump - SCNPhysicsCharacter
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsCharacter : SCNPhysicsBehavior
{
    struct ? _definition;
    struct btCharacterControllerInterface * _characterController;
    struct btPairCachingGhostObject * _ghostObject;
    struct btOverlapFilterCallback * _filterCallback;
    struct btCapsuleShape * _capsuleShape;
    SCNPhysicsWorld * _world;
}

@property (nonatomic) float velocity;
@property (nonatomic) float jumpSpeed;

- (void)_addToPhysicsWorld:(SKPhysicsWorld *)arg0;
- (void)_willRemoveFromPhysicsWorld:(SKPhysicsWorld *)arg0;
- (void)_handleCreateIfNeeded:(char)arg0;
- (SCNPhysicsCharacter *)initWithCharacter:(unsigned int)arg0;
- (void)setWalkingDirection:(struct SCNVector3)arg0;
- (char)canJump;
- (void)jump;
- (void)setJumpSpeed:(float)arg0;
- (float)jumpSpeed;
- (void)dealloc;
- (void)setVelocity:(float)arg0;
- (void)_update;
- (float)velocity;
- (void).cxx_construct;

@end
