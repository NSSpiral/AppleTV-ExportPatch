/* Runtime dump - SKRotationConstraint
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKRotationConstraint : SKConstraint
{
    SKRange * _zRotationRange;
}

@property (copy) SKRange * zRotationRange;

+ (NSObject *)constraintWithZRotationRange:(SKRange *)arg0;

- (SKRange *)zRotationRange;
- (void)setZRotationRange:(SKRange *)arg0;
- (SKRotationConstraint *)initWithZRotationRange:(SKRange *)arg0;
- (SKRotationConstraint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKRotationConstraint *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
