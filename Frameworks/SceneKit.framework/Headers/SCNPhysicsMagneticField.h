/* Runtime dump - SCNPhysicsMagneticField
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsMagneticField : SCNPhysicsField

+ (NSObject *)SCNJSExportProtocol;

- (struct c3dPhysicsField *)_createField;
- (void)setDirection:(struct SCNVector3)arg0;

@end
