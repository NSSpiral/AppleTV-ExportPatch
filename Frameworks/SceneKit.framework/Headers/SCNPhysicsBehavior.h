/* Runtime dump - SCNPhysicsBehavior
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsBehavior : NSObject <NSSecureCoding>
{
    id _reserved;
}

+ (NSObject *)SCNJSExportProtocol;
+ (char)supportsSecureCoding;

- (void)dealloc;
- (SCNPhysicsBehavior *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNPhysicsBehavior *)init;
- (SCNPhysicsBody *)bodyA;
- (SCNPhysicsBody *)bodyB;

@end
