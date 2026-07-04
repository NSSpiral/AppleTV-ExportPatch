/* Runtime dump - SCNIKConstraint
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNIKConstraint : SCNConstraint
{
    id _reserved;
    SCNNode * _chainRootNode;
    struct SCNVector3 _ikTarget;
    NSMutableDictionary * _jointsPerNode;
}

@property (readonly, nonatomic) SCNNode * chainRootNode;
@property (nonatomic) struct SCNVector3 targetPosition;

+ (NSObject *)SCNJSExportProtocol;
+ (NSObject *)inverseKinematicsConstraintWithChainRootNode:(SCNNode *)arg0;
+ (char)supportsSecureCoding;

- (void)setChainRootNode:(SCNNode *)arg0;
- (struct SCNVector3)targetPosition;
- (void)setTargetPosition:(struct SCNVector3)arg0;
- (SCNNode *)chainRootNode;
- (NSObject *)jointForNode:(NSObject *)arg0;
- (void)setMaxAllowedRotationAngle:(float)arg0 forJoint:(SCNNode *)arg1;
- (float)maxAllowedRotationAngleForJoint:(SCNNode *)arg0;
- (void)_customEncodingOfSCNIKConstraint:(NSObject *)arg0;
- (void)_customDecodingOfSCNIKConstraint:(NSObject *)arg0;
- (void)_didDecodeSCNIKConstraint:(NSObject *)arg0;
- (void)dealloc;
- (SCNIKConstraint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNIKConstraint *)init;
- (SCNIKConstraint *)copyWithZone:(struct _NSZone *)arg0;

@end
