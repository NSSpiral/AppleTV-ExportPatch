/* Runtime dump - UIAnimation
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAnimation : NSObject
{
    id _target;
    SEL _action;
    id _delegate;
    id _completion;
    struct ? _animationFlags;
    double _startTime;
    double _duration;
    int _state;
}

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (int)state;
- (void)setDuration:(double)arg0;
- (int)type;
- (SEL)action;
- (NSObject *)target;
- (void)setAnimationCurve:(int)arg0;
- (void)setProgress:(float)arg0;
- (UIAnimation *)initWithTarget:(NSObject *)arg0;
- (void)setUsesNSTimer:(char)arg0;
- (void)setAction:(SEL)arg0;
- (float)fractionForTime:(double)arg0;
- (void)markStop;
- (NSString *)completion;
- (void)setCompletion:(id /* block */)arg0;
- (void)markStart:(double)arg0;
- (float)progressForFraction:(float)arg0;
- (void)stopAnimation;
- (char)usesNSTimer;

@end
