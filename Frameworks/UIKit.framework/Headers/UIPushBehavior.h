/* Runtime dump - UIPushBehavior
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPushBehavior : UIDynamicBehavior
{
    float _angle;
    float _magnitude;
    char _active;
    int _mode;
    struct CGVector _forceVector;
    double _timeInterval;
    NSMutableDictionary * _targetPoints;
    int _i;
}

@property (readonly, copy, nonatomic) NSArray * items;
@property (readonly, nonatomic) int mode;
@property (nonatomic) char active;
@property (nonatomic) float angle;
@property (nonatomic) float magnitude;
@property (nonatomic) struct CGVector pushDirection;

- (void)dealloc;
- (UIPushBehavior *)init;
- (NSString *)description;
- (void)_commonInit;
- (NSArray *)items;
- (char)active;
- (UIPushBehavior *)initWithItems:(NSArray *)arg0;
- (int)mode;
- (void)_associate;
- (void)_dissociate;
- (UIPushBehavior *)initWithItems:(NSArray *)arg0 mode:(int)arg1;
- (void)setPushDirection:(struct CGVector)arg0;
- (void)setActive:(char)arg0;
- (void)addItem:(NSObject *)arg0;
- (void)removeItem:(void *)arg0;
- (void)setAngle:(float)arg0;
- (float)angle;
- (void)_step;
- (void)setXComponent:(float)arg0 yComponent:(float)arg1;
- (float)magnitude;
- (void)setAngle:(float)arg0 magnitude:(float)arg1;
- (float)yComponent;
- (float)xComponent;
- (void)setMagnitude:(float)arg0;
- (void)setXComponent:(float)arg0;
- (void)setYComponent:(float)arg0;
- (struct CGPoint)targetPointForItem:(NSObject *)arg0;
- (void)setTargetPoint:(struct CGPoint)arg0 forItem:(NSObject *)arg1;
- (struct UIOffset)targetOffsetFromCenterForItem:(NSObject *)arg0;
- (void)setTargetOffsetFromCenter:(struct UIOffset)arg0 forItem:(NSObject *)arg1;
- (struct CGVector)pushDirection;

@end
