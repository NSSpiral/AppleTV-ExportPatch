/* Runtime dump - SKSizeConstraint
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSizeConstraint : SKConstraint
{
    SKRange * _widthRange;
    SKRange * _heightRange;
}

@property (copy) SKRange * widthRange;
@property (copy) SKRange * heightRange;

+ (NSObject *)constraintWithWidthRange:(SKRange *)arg0;
+ (NSObject *)constraintWithHeightRange:(SKRange *)arg0;
+ (NSObject *)constraintWithWidthRange:(SKRange *)arg0 heightRange:(SKRange *)arg1;

- (SKRange *)widthRange;
- (SKRange *)heightRange;
- (void)setWidthRange:(SKRange *)arg0;
- (void)setHeightRange:(SKRange *)arg0;
- (SKSizeConstraint *)initWithWidthRange:(SKRange *)arg0 heightRange:(SKRange *)arg1;
- (SKSizeConstraint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKSizeConstraint *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
