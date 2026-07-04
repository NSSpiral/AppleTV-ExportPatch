/* Runtime dump - UIInputViewAnimationStyleExtraView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewAnimationStyleExtraView : NSObject
{
    int _clipContainerType;
    UIView * _view;
    int _alignment;
    id _animation;
}

@property (nonatomic) int clipContainerType;
@property (retain, nonatomic) UIView * view;
@property (nonatomic) int alignment;
@property (copy, nonatomic) id animation;

+ (NSObject *)extraView:(NSObject *)arg0 withAlignment:(int)arg1 animation:(CAAnimation *)arg2 onSnapshot:(/* block */ id)arg3;

- (void)setAlignment:(int)arg0;
- (void)dealloc;
- (UIView *)view;
- (void)setView:(UIView *)arg0;
- (CAAnimation *)animation;
- (int)alignment;
- (void)setAnimation:(CAAnimation *)arg0;
- (void)setClipContainerType:(int)arg0;
- (int)clipContainerType;

@end
