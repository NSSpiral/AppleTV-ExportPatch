/* Runtime dump - UIPhraseBoundaryGestureRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer
{
    UIResponder<UITextInput> * _textInput;
    UIDelayedAction * _secondDelayTimer;
    double _secondDelay;
    char _secondDelayElapsed;
    id _userData;
}

@property (nonatomic) UIResponder<UITextInput> * textInput;
@property (nonatomic) double secondDelay;
@property (readonly, nonatomic) char secondDelayElapsed;
@property (nonatomic) id userData;

- (void)setState:(int)arg0;
- (void)_resetGestureRecognizer;
- (void)clearTimer;
- (void)startTimer;
- (void)secondDelayElapsed:(char)arg0;
- (double)secondDelay;
- (UIResponder<UITextInput> *)textInput;
- (void)setTextInput:(UIResponder<UITextInput> *)arg0;
- (void)setSecondDelay:(double)arg0;
- (char)secondDelayElapsed;
- (NSData *)userData;
- (void)setUserData:(NSData *)arg0;

@end
