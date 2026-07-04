/* Runtime dump - SKRotate
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKRotate : SKAction
{
    struct SKCRotate * _mycaction;
}

+ (SKRotate *)rotateByX:(float)arg0 y:(float)arg1 z:(float)arg2 duration:(double)arg3;
+ (SKRotate *)rotateToX:(float)arg0 y:(float)arg1 z:(float)arg2 duration:(double)arg3;
+ (SKRotate *)rotateByAngle:(float)arg0 duration:(double)arg1;
+ (SKRotate *)rotateToAngle:(float)arg0 duration:(double)arg1;
+ (SKRotate *)rotateToAngle:(float)arg0 duration:(double)arg1 shortestUnitArc:(char)arg2;
+ (SKRotate *)rotateByX:(float)arg0 duration:(double)arg1;
+ (SKRotate *)rotateToX:(float)arg0 duration:(double)arg1;
+ (SKRotate *)rotateByY:(float)arg0 duration:(double)arg1;
+ (SKRotate *)rotateToY:(float)arg0 duration:(double)arg1;

- (SCNAction *)reversedAction;
- (SKRotate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKRotate *)init;
- (SKRotate *)copyWithZone:(struct _NSZone *)arg0;

@end
