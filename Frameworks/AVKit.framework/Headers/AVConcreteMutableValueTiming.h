/* Runtime dump - AVConcreteMutableValueTiming
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVConcreteMutableValueTiming : AVMutableValueTiming
{
    double _value;
    double _timeStamp;
    double _rate;
}

- (struct ?)_timing;
- (AVConcreteMutableValueTiming *)initWithAnchorValue:(double)arg0 anchorTimeStamp:(double)arg1 rate:(double)arg2;
- (double)anchorValue;
- (double)anchorTimeStamp;
- (void)setAnchorValue:(double)arg0;
- (void)setAnchorTimeStamp:(double)arg0;
- (double)rate;
- (void)setRate:(double)arg0;

@end
