/* Runtime dump - UISnapBehavior
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISnapBehavior : UIDynamicBehavior
{
    struct CGPoint _anchorPoint;
    float _damping;
    float _distance;
    float _frequency;
    struct ? _stateFlags;
    NSMutableArray * _joints;
    PKPhysicsBody * _anchorBody;
}

@property (nonatomic) float damping;

- (void)dealloc;
- (UISnapBehavior *)init;
- (NSString *)description;
- (void)setDamping:(float)arg0;
- (float)damping;
- (void)_associate;
- (void)_dissociate;
- (float)_frequency;
- (UISnapBehavior *)initWithItem:(NSObject *)arg0 snapToPoint:(struct CGPoint)arg1;
- (float)_distance;
- (void)_setDistance:(float)arg0;
- (void)_setFrequency:(float)arg0;

@end
