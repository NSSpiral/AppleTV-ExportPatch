/* Runtime dump - MKVariableDelayTapRecognizer
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKVariableDelayTapRecognizer : UITapGestureRecognizer
{
    double originalMaximumIntervalBetweenSuccessiveTaps;
    <MKVariableDelayTapRecognizerDelegate> * tapDelayDelegate;
}

@property (weak, nonatomic) <MKVariableDelayTapRecognizerDelegate> * tapDelayDelegate;

- (void)setTapDelayDelegate:(<MKVariableDelayTapRecognizerDelegate> *)arg0;
- (<MKVariableDelayTapRecognizerDelegate> *)tapDelayDelegate;
- (MKVariableDelayTapRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)reset;
- (void).cxx_destruct;

@end
