/* Runtime dump - SKPerformSelector
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPerformSelector : SKAction
{
    SEL _selector;
    id _target;
}

+ (NSString *)perfromSelector:(SEL)arg0 onTarget:(NSObject *)arg1;

- (void)updateWithTarget:(NSObject *)arg0 forTime:(double)arg1;
- (SCNAction *)reversedAction;
- (SKPerformSelector *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKPerformSelector *)init;
- (SKPerformSelector *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
