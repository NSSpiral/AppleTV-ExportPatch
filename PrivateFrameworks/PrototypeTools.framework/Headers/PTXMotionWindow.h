/* Runtime dump - PTXMotionWindow
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXMotionWindow : NSObject
{
    float _radius;
    float _maxIncrease;
    int _direction;
    float _effectiveRadius;
    float _center;
    float _upperLimit;
    float _lowerLimit;
}

- (void)reset;
- (float)mappedOffset:(float)arg0;
- (void)setIncreaseFactor:(float)arg0 fixingOffset:(float)arg1;
- (PTXMotionWindow *)initWithRadius:(float)arg0 maxIncrease:(float)arg1 direction:(int)arg2;

@end
