/* Runtime dump - SKAnimate
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKAnimate : SKAction
{
    struct SKCAnimate * _mycaction;
    NSArray * _textures;
}

@property (nonatomic) double timePerFrame;

+ (SKAnimate *)animateWithTextures:(NSArray *)arg0 timePerFrame:(double)arg1 resize:(char)arg2 restore:(char)arg3;

- (SCNAction *)reversedAction;
- (double)timePerFrame;
- (void)setTimePerFrame:(double)arg0;
- (SKAnimate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKAnimate *)init;
- (SKAnimate *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
