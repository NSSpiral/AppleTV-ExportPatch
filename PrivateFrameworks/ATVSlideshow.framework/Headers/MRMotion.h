/* Runtime dump - MRMotion
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRMotion : NSObject
{
    NSString * _key;
    float _startValue;
    float _value;
    double _startTime;
    double _duration;
    float _easeIn;
    float _easeOut;
}

@property (readonly) NSString * key;
@property (nonatomic) float startValue;
@property (readonly) float value;
@property (nonatomic) double startTime;
@property (readonly) double duration;
@property (readonly) float easeIn;
@property (readonly) float easeOut;

- (void)dealloc;
- (double)duration;
- (NSString *)key;
- (void)setStartTime:(double)arg0;
- (float)value;
- (void)setStartValue:(float)arg0;
- (double)startTime;
- (float)valueAtTime:(double)arg0;
- (float)easeIn;
- (float)easeOut;
- (MRMotion *)initWithKey:(NSString *)arg0 value:(float)arg1 duration:(double)arg2 easeIn:(float)arg3 easeOut:(float)arg4;
- (float)startValue;

@end
