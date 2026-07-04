/* Runtime dump - SCNIKJoint
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNIKJoint : NSObject
{
    SCNNode * joint;
    float maxAllowedRotationAngle;
}

@property (weak, nonatomic) SCNNode * joint;
@property (nonatomic) float maxAllowedRotationAngle;

- (SCNNode *)joint;
- (void)setJoint:(SCNNode *)arg0;
- (float)maxAllowedRotationAngle;
- (void)setMaxAllowedRotationAngle:(float)arg0;

@end
