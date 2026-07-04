/* Runtime dump - SKScaleConstraint
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKScaleConstraint : SKConstraint
{
    SKRange * _xRange;
    SKRange * _yRange;
}

@property (copy) SKRange * xRange;
@property (copy) SKRange * yRange;

+ (NSObject *)constraintWithXRange:(SKRange *)arg0;
+ (NSObject *)constraintWithYRange:(SKRange *)arg0;
+ (NSObject *)constraintWithXRange:(SKRange *)arg0 YRange:(SKRange *)arg1;
+ (NSObject *)constraintWithScaleRange:(float)arg0;

- (SKRange *)yRange;
- (void)setYRange:(SKRange *)arg0;
- (SKScaleConstraint *)initWithXRange:(SKRange *)arg0 YRange:(SKRange *)arg1;
- (SKScaleConstraint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKScaleConstraint *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (SKRange *)xRange;
- (void)setXRange:(SKRange *)arg0;

@end
