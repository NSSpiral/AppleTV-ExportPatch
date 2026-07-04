/* Runtime dump - SCNTransformConstraint
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTransformConstraint : SCNConstraint
{
    id _reserved;
}

+ (NSObject *)SCNJSExportProtocol;
+ (NSObject *)transformConstraintInWorldSpace:(char)arg0 withBlock:(id /* block */)arg1;

- (SCNTransformConstraint *)initInWorld:(char)arg0 withBlock:(id /* block */)arg1;
- (SCNTransformConstraint *)initWithCoder:(NSCoder *)arg0;
- (SCNTransformConstraint *)copyWithZone:(struct _NSZone *)arg0;

@end
