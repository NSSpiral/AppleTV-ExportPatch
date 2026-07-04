/* Runtime dump - SCNActionRunBlock
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionRunBlock : SCNAction
{
    id _block;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (SCNAction *)runBlock:(id /* block */)arg0 queue:(/* block */ id)arg1;
+ (char)supportsSecureCoding;

- (char)isCustom;
- (void)updateWithTarget:(NSObject *)arg0 forTime:(double)arg1;
- (SCNAction *)reversedAction;
- (void)dealloc;
- (SCNActionRunBlock *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNActionRunBlock *)init;
- (SCNActionRunBlock *)copyWithZone:(struct _NSZone *)arg0;

@end
