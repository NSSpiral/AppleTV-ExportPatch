/* Runtime dump - SKRunBlock
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKRunBlock : SKAction
{
    id _block;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (SKRunBlock *)runBlock:(id /* block */)arg0 queue:(/* block */ id)arg1;

- (void)updateWithTarget:(NSObject *)arg0 forTime:(double)arg1;
- (SCNAction *)reversedAction;
- (SKRunBlock *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKRunBlock *)init;
- (SKRunBlock *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
