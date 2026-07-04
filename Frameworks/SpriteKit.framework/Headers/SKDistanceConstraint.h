/* Runtime dump - SKDistanceConstraint
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKDistanceConstraint : SKConstraint
{
    SKRange * _distanceRange;
    SKNode * _node;
    struct CGPoint _point;
}

@property (copy) SKRange * distanceRange;
@property (weak) SKNode * node;
@property struct CGPoint point;

+ (NSObject *)constraintWithNode:(SKNode *)arg0 distanceRange:(SKRange *)arg1;
+ (NSObject *)constraintWithPoint:(struct CGPoint)arg0 distanceRange:(SKRange *)arg1;
+ (NSObject *)constraintWithPoint:(struct CGPoint)arg0 inNode:(NSObject *)arg1 distanceRange:(SKRange *)arg2;

- (SKRange *)distanceRange;
- (void)setDistanceRange:(SKRange *)arg0;
- (SKDistanceConstraint *)initWithPoint:(struct CGPoint)arg0 inNode:(NSObject *)arg1 distanceRange:(SKRange *)arg2;
- (SKDistanceConstraint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKDistanceConstraint *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGPoint)point;
- (void)setPoint:(struct CGPoint)arg0;
- (void).cxx_construct;
- (SKNode *)node;
- (void).cxx_destruct;
- (void)setNode:(SKNode *)arg0;

@end
