/* Runtime dump - SCNLookAtConstraint
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNLookAtConstraint : SCNConstraint
{
    id _reserved;
    SCNNode * _target;
    char _gimbalLockEnabled;
}

@property (readonly, nonatomic) SCNNode * target;
@property (nonatomic) char gimbalLockEnabled;

+ (NSObject *)SCNJSExportProtocol;
+ (NSObject *)lookAtConstraintWithTarget:(SCNNode *)arg0;
+ (char)supportsSecureCoding;

- (char)gimbalLockEnabled;
- (void)setGimbalLockEnabled:(char)arg0;
- (void)_customEncodingOfSCNLookAtConstraint:(NSObject *)arg0;
- (void)_customDecodingOfSCNLookAtConstraint:(NSObject *)arg0;
- (void)dealloc;
- (SCNLookAtConstraint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNLookAtConstraint *)copyWithZone:(struct _NSZone *)arg0;
- (SCNNode *)target;
- (SCNLookAtConstraint *)initWithTarget:(SCNNode *)arg0;

@end
