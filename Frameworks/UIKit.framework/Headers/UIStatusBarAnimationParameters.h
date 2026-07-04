/* Runtime dump - UIStatusBarAnimationParameters
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarAnimationParameters : NSObject
{
    double _duration;
    double _delay;
    int _curve;
    <_UIBasicAnimationFactory> * _animationFactory;
    double _startTime;
}

@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) int curve;
@property (retain, nonatomic) <_UIBasicAnimationFactory> * animationFactory;
@property (nonatomic) double startTime;

+ (void)animateWithParameters:(NSDictionary *)arg0 fromCurrentState:(char)arg1 animations:(NSArray *)arg2 completion:(/* block */ id)arg3;
+ (void)animateWithParameters:(NSDictionary *)arg0 animations:(NSArray *)arg1 completion:(/* block */ id)arg2;
+ (void)animateWithParameters:(NSDictionary *)arg0 fromCurrentState:(char)arg1 frameInterval:(float)arg2 animations:(NSArray *)arg3 completion:(/* block */ id)arg4;

- (void)dealloc;
- (UIStatusBarAnimationParameters *)init;
- (double)duration;
- (UIStatusBarAnimationParameters *)initWithDefaultParameters;
- (void)setDuration:(double)arg0;
- (void)setDelay:(double)arg0;
- (void)setCurve:(int)arg0;
- (void)setStartTime:(double)arg0;
- (double)delay;
- (int)curve;
- (char)shouldAnimate;
- (UIStatusBarAnimationParameters *)initWithEmptyParameters;
- (<_UIBasicAnimationFactory> *)animationFactory;
- (void)setAnimationFactory:(<_UIBasicAnimationFactory> *)arg0;
- (double)startTime;

@end
