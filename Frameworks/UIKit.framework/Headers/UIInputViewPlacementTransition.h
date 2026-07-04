/* Runtime dump - UIInputViewPlacementTransition
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewPlacementTransition : NSObject
{
    char cancelled;
    UIInputViewSetPlacement * fromPlacement;
    UIInputViewSetPlacement * toPlacement;
    UIInputViewAnimationStyle * animationStyle;
    UIInputViewSetNotificationInfo * notificationInfo;
    unsigned int notifications;
    int animationState;
    <NSObject> * animationContext;
    <UIInputViewAnimationController> * animationController;
}

@property (retain, nonatomic) UIInputViewSetPlacement * fromPlacement;
@property (retain, nonatomic) UIInputViewSetPlacement * toPlacement;
@property (retain, nonatomic) UIInputViewAnimationStyle * animationStyle;
@property (retain, nonatomic) UIInputViewSetNotificationInfo * notificationInfo;
@property (nonatomic) unsigned int notifications;
@property (nonatomic) int animationState;
@property (retain, nonatomic) <UIInputViewAnimationController> * animationController;
@property (retain, nonatomic) <NSObject> * animationContext;
@property (nonatomic) char cancelled;

+ (UIInputViewPlacementTransition *)transitionFromPlacement:(id)arg0 toPlacement:(UIInputViewSetPlacement *)arg1 withAnimationStyle:(UIInputViewAnimationStyle *)arg2;

- (void)dealloc;
- (void)setAnimationController:(<UIInputViewAnimationController> *)arg0;
- (<UIInputViewAnimationController> *)animationController;
- (char)cancelled;
- (void)setCancelled:(char)arg0;
- (UIInputViewAnimationStyle *)animationStyle;
- (int)animationState;
- (void)setAnimationState:(int)arg0;
- (void)setAnimationStyle:(UIInputViewAnimationStyle *)arg0;
- (void)setFromPlacement:(UIInputViewSetPlacement *)arg0;
- (void)setToPlacement:(UIInputViewSetPlacement *)arg0;
- (UIInputViewSetPlacement *)fromPlacement;
- (UIInputViewSetPlacement *)toPlacement;
- (char)didAdvanceAnimationToState:(int)arg0;
- (UIInputViewSetNotificationInfo *)notificationInfo;
- (void)setNotificationInfo:(UIInputViewSetNotificationInfo *)arg0;
- (unsigned int)notifications;
- (void)setNotifications:(unsigned int)arg0;
- (<NSObject> *)animationContext;
- (void)setAnimationContext:(<NSObject> *)arg0;

@end
