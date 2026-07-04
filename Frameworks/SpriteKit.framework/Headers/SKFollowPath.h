/* Runtime dump - SKFollowPath
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKFollowPath : SKAction
{
    struct SKCFollowPath * _mycaction;
    struct CGPath * _cgPath;
}

+ (SKFollowPath *)followPath:(struct CGPath *)arg0 duration:(double)arg1;
+ (SKFollowPath *)followPath:(struct CGPath *)arg0 asOffset:(char)arg1 orientToPath:(char)arg2 duration:(double)arg3;
+ (SKFollowPath *)followPath:(struct CGPath *)arg0 speed:(float)arg1;
+ (SKFollowPath *)followPath:(struct CGPath *)arg0 asOffset:(char)arg1 orientToPath:(char)arg2 speed:(float)arg3;

- (SCNAction *)reversedAction;
- (void)dealloc;
- (SKFollowPath *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKFollowPath *)init;
- (SKFollowPath *)copyWithZone:(struct _NSZone *)arg0;

@end
