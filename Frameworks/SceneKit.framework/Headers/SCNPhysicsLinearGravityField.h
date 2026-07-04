/* Runtime dump - SCNPhysicsLinearGravityField
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsLinearGravityField : SCNPhysicsField

+ (NSObject *)SCNJSExportProtocol;

- (struct c3dPhysicsField *)_createField;
- (void)setDirection:(struct SCNVector3)arg0;
- (struct SCNVector3)gravity;

@end
