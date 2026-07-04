/* Runtime dump - SKAction
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKAction : NSObject <NSCopying, NSCoding>
{
    struct SKCAction * _caction;
}

@property (nonatomic) char finished;
@property (nonatomic) double duration;
@property (nonatomic) int timingMode;
@property (nonatomic) id timingFunction;
@property (nonatomic) float speed;

+ (SKAction *)runBlock:(id /* block */)arg0 queue:(/* block */ id)arg1;
+ (NSNumber *)waitForDuration:(double)arg0 withRange:(double)arg1;
+ (NSNumber *)waitForDuration:(double)arg0;
+ (SKAction *)scaleBy:(float)arg0 duration:(double)arg1;
+ (SKAction *)scaleTo:(float)arg0 duration:(double)arg1;
+ (NSObject *)repeatAction:(NSObject *)arg0 count:(unsigned int)arg1;
+ (SKAction *)repeatActionForever:(SCNAction *)arg0;
+ (NSNumber *)javaScriptActionWithDuration:(double)arg0 script:(NSString *)arg1;
+ (NSNumber *)customActionWithDuration:(double)arg0 actionBlock:(id /* block */)arg1;
+ (SKAction *)moveBy:(struct CGVector)arg0 duration:(double)arg1;
+ (SKAction *)moveTo:(struct CGPoint)arg0 duration:(double)arg1;
+ (SKAction *)sequence:(CPCharSequence *)arg0;
+ (NSObject *)group:(NSObject *)arg0;
+ (SKAction *)runBlock:(id /* block */)arg0;
+ (NSString *)performSelector:(SEL)arg0 onTarget:(NSObject *)arg1;
+ (SKAction *)moveByX:(float)arg0 y:(float)arg1 duration:(double)arg2;
+ (SKAction *)moveToX:(float)arg0 duration:(double)arg1;
+ (SKAction *)moveToY:(float)arg0 duration:(double)arg1;
+ (SKAction *)rotateByAngle:(float)arg0 duration:(double)arg1;
+ (SKAction *)rotateToAngle:(float)arg0 duration:(double)arg1;
+ (SKAction *)rotateToAngle:(float)arg0 duration:(double)arg1 shortestUnitArc:(char)arg2;
+ (SKAction *)scaleXBy:(float)arg0 y:(float)arg1 duration:(double)arg2;
+ (SKAction *)scaleXTo:(float)arg0 y:(float)arg1 duration:(double)arg2;
+ (SKAction *)scaleXTo:(float)arg0 duration:(double)arg1;
+ (SKAction *)scaleYTo:(float)arg0 duration:(double)arg1;
+ (SKAction *)resizeByWidth:(float)arg0 height:(float)arg1 duration:(double)arg2;
+ (SKAction *)resizeToWidth:(float)arg0 height:(float)arg1 duration:(double)arg2;
+ (SKAction *)resizeToWidth:(float)arg0 duration:(double)arg1;
+ (SKAction *)resizeToHeight:(float)arg0 duration:(double)arg1;
+ (SKAction *)fadeAlphaBy:(float)arg0 duration:(double)arg1;
+ (SKAction *)fadeAlphaTo:(float)arg0 duration:(double)arg1;
+ (SKAction *)falloffTo:(float)arg0 duration:(double)arg1;
+ (SKAction *)falloffBy:(float)arg0 duration:(double)arg1;
+ (SKAction *)unhide;
+ (SKAction *)animateWithTextures:(id)arg0 timePerFrame:(double)arg1 resize:(char)arg2 restore:(char)arg3;
+ (SKAction *)playSoundFileNamed:(id)arg0 atPosition:(struct CGPoint)arg1 waitForCompletion:(char)arg2;
+ (UIColor *)colorizeWithColor:(UIColor *)arg0 colorBlendFactor:(float)arg1 duration:(double)arg2;
+ (SKAction *)colorizeWithColorBlendFactor:(float)arg0 duration:(double)arg1;
+ (NSString *)followPath:(struct CGPath *)arg0 duration:(double)arg1;
+ (NSString *)followPath:(struct CGPath *)arg0 asOffset:(char)arg1 orientToPath:(char)arg2 duration:(double)arg3;
+ (NSString *)followPath:(struct CGPath *)arg0 speed:(float)arg1;
+ (NSString *)followPath:(struct CGPath *)arg0 asOffset:(char)arg1 orientToPath:(char)arg2 speed:(float)arg3;
+ (SKAction *)speedBy:(float)arg0 duration:(double)arg1;
+ (SKAction *)speedTo:(float)arg0 duration:(double)arg1;
+ (SKAction *)strengthTo:(float)arg0 duration:(double)arg1;
+ (SKAction *)strengthBy:(float)arg0 duration:(double)arg1;
+ (SKAction *)reachTo:(struct CGPoint)arg0 rootNode:(NSObject *)arg1 duration:(double)arg2;
+ (SKAction *)reachTo:(struct CGPoint)arg0 rootNode:(NSObject *)arg1 velocity:(float)arg2;
+ (SKAction *)moveBY:(struct CGVector)arg0 duration:(double)arg1;
+ (NSObject *)setTexture:(NSObject *)arg0 resize:(char)arg1;
+ (SKAction *)animateWithTextures:(id)arg0 timePerFrame:(double)arg1;
+ (SKAction *)playSoundFileNamed:(id)arg0;
+ (SKAction *)playSoundFileNamed:(id)arg0 waitForCompletion:(char)arg1;
+ (NSObject *)reachToNode:(NSObject *)arg0 rootNode:(NSObject *)arg1 duration:(double)arg2;
+ (NSObject *)reachToNode:(NSObject *)arg0 rootNode:(NSObject *)arg1 velocity:(float)arg2;
+ (NSObject *)runAction:(SCNAction *)arg0 onChildWithName:(NSString *)arg1;
+ (SKAction *)hide;
+ (NSNumber *)fadeOutWithDuration:(double)arg0;
+ (NSNumber *)fadeInWithDuration:(double)arg0;
+ (NSObject *)removeFromParent;
+ (NSObject *)setTexture:(NSObject *)arg0;

- (struct SKCAction *)caction;
- (void)updateWithTarget:(NSObject *)arg0 forTime:(double)arg1;
- (SCNAction *)reversedAction;
- (void)setCppAction:(void *)arg0;
- (int)timingMode;
- (void)setTimingMode:(int)arg0;
- (void)wasPausedWithTarget:(NSObject *)arg0 atTime:(double)arg1;
- (void)willResumeWithTarget:(NSObject *)arg0 atTime:(double)arg1;
- (float)ratioForTime:(double)arg0;
- (void)wasAddedToTarget:(NSObject *)arg0 atTime:(double)arg1;
- (void)wasRemovedFromTarget:(NSObject *)arg0 atTime:(double)arg1;
- (void)willStartWithTarget:(NSObject *)arg0 atTime:(double)arg1;
- (void)dealloc;
- (SKAction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKAction *)init;
- (SKAction *)copy;
- (void)setSpeed:(float)arg0;
- (double)duration;
- (void)setDuration:(double)arg0;
- (SKAction *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTimingFunction:(CAMediaTimingFunction *)arg0;
- (float)speed;
- (CAMediaTimingFunction *)timingFunction;
- (void)setFinished:(char)arg0;
- (char)finished;

@end
