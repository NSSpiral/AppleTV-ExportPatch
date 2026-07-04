/* Runtime dump - UIKeyboardRotationState
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardRotationState : NSObject
{
    int _state;
    char _requiresNewState;
    int _postRotationState;
    UIInputViewAnimationStyle * _animationStyle;
    int _targetOrientation;
}

@property (nonatomic) int state;
@property (nonatomic) char requiresNewState;
@property (nonatomic) int postRotationState;
@property (retain, nonatomic) UIInputViewAnimationStyle * animationStyle;
@property (nonatomic) int targetOrientation;

+ (NSObject *)stateWithState:(int)arg0 targetOrientation:(int)arg1;

- (void)dealloc;
- (int)state;
- (void)setState:(int)arg0;
- (UIInputViewAnimationStyle *)animationStyle;
- (int)targetOrientation;
- (void)setPostRotationState:(int)arg0 animationStyle:(UIInputViewAnimationStyle *)arg1;
- (void)setAnimationStyle:(UIInputViewAnimationStyle *)arg0;
- (void)setRequiresNewState:(char)arg0;
- (void)setPostRotationState:(int)arg0;
- (void)setTargetOrientation:(int)arg0;
- (char)requiresNewState;
- (int)postRotationState;

@end
