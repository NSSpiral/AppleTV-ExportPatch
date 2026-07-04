/* Runtime dump - SCNPhysicsVortexField
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsVortexField : SCNPhysicsField

+ (NSObject *)SCNJSExportProtocol;

- (struct c3dPhysicsField *)_createField;
- (SCNPhysicsVortexField *)init;
- (void)setDirection:(struct SCNVector3)arg0;
- (struct SCNVector3)axis;

@end
