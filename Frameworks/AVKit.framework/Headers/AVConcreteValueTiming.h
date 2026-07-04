/* Runtime dump - AVConcreteValueTiming
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVConcreteValueTiming : AVValueTiming
{
    double _value;
    double _timeStamp;
    double _rate;
}

- (struct ?)_timing;
- (AVConcreteValueTiming *)initWithAnchorValue:(double)arg0 anchorTimeStamp:(double)arg1 rate:(double)arg2;
- (double)anchorValue;
- (double)anchorTimeStamp;
- (AVConcreteValueTiming *)copyWithZone:(struct _NSZone *)arg0;
- (double)rate;

@end
