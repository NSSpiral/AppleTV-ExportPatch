/* Runtime dump - SKOrientationConstraint
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKOrientationConstraint : SKConstraint
{
    SKNode * _node;
    SKRange * _offset;
    struct CGPoint _point;
}

@property (weak) SKNode * node;
@property struct CGPoint point;
@property (copy) SKRange * offset;

+ (NSObject *)constraintOrientingToPoint:(struct CGPoint)arg0 inNode:(NSObject *)arg1 offset:(SKRange *)arg2;
+ (NSObject *)constraintOrientingToNode:(NSObject *)arg0 offset:(SKRange *)arg1;
+ (NSObject *)constraintOrientingToPoint:(struct CGPoint)arg0 offset:(SKRange *)arg1;

- (SKOrientationConstraint *)initWithNode:(SKNode *)arg0 point:(struct CGPoint)arg1 offset:(SKRange *)arg2;
- (SKOrientationConstraint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKOrientationConstraint *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGPoint)point;
- (void)setOffset:(SKRange *)arg0;
- (SKRange *)offset;
- (void)setPoint:(struct CGPoint)arg0;
- (void).cxx_construct;
- (SKNode *)node;
- (void).cxx_destruct;
- (void)setNode:(SKNode *)arg0;

@end
