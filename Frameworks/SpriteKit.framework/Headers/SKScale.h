/* Runtime dump - SKScale
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKScale : SKAction
{
    struct SKCScale * _mycaction;
}

+ (SKScale *)scaleBy:(float)arg0 duration:(double)arg1;
+ (SKScale *)scaleTo:(float)arg0 duration:(double)arg1;
+ (SKScale *)scaleXBy:(float)arg0 y:(float)arg1 duration:(double)arg2;
+ (SKScale *)scaleXTo:(float)arg0 y:(float)arg1 duration:(double)arg2;
+ (SKScale *)scaleXTo:(float)arg0 duration:(double)arg1;
+ (SKScale *)scaleYTo:(float)arg0 duration:(double)arg1;
+ (SKScale *)scaleXBy:(float)arg0 duration:(double)arg1;
+ (SKScale *)scaleYBy:(float)arg0 duration:(double)arg1;

- (SCNAction *)reversedAction;
- (SKScale *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKScale *)init;
- (SKScale *)copyWithZone:(struct _NSZone *)arg0;

@end
