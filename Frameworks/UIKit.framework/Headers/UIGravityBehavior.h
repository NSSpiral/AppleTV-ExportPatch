/* Runtime dump - UIGravityBehavior
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGravityBehavior : UIDynamicBehavior
{
    struct CGPoint _gravity;
}

@property (readonly, copy, nonatomic) NSArray * items;
@property (nonatomic) struct CGVector gravityDirection;
@property (nonatomic) float angle;
@property (nonatomic) float magnitude;

- (UIGravityBehavior *)init;
- (NSString *)description;
- (void)_commonInit;
- (NSArray *)items;
- (UIGravityBehavior *)initWithItems:(NSArray *)arg0;
- (void)_associate;
- (void)_dissociate;
- (void)setGravityDirection:(struct CGVector)arg0;
- (void)addItem:(NSObject *)arg0;
- (void)removeItem:(void *)arg0;
- (void)setAngle:(float)arg0;
- (float)angle;
- (void)_addItem:(NSObject *)arg0;
- (void)setXComponent:(float)arg0 yComponent:(float)arg1;
- (struct CGPoint)gravity;
- (float)magnitude;
- (void)setAngle:(float)arg0 magnitude:(float)arg1;
- (float)yComponent;
- (void)setGravity:(struct CGPoint)arg0;
- (float)xComponent;
- (struct CGVector)gravityDirection;
- (struct CGPoint)denormalizedGravity;
- (void)setMagnitude:(float)arg0;
- (void)setXComponent:(float)arg0;
- (void)setYComponent:(float)arg0;
- (void)_setAngle:(float)arg0 magnitude:(float)arg1;

@end
