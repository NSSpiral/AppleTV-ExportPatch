/* Runtime dump - UIInputViewAnimationStyleDirectional
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewAnimationStyleDirectional : UIInputViewAnimationStyle
{
    int _outDirection;
}

@property (nonatomic) int outDirection;

+ (UIInputViewAnimationStyleDirectional *)animationStyleAnimated:(char)arg0 duration:(double)arg1 outDirection:(int)arg2;

- (char)isEqual:(NSObject *)arg0;
- (UIInputViewAnimationStyleDirectional *)copyWithZone:(struct _NSZone *)arg0;
- (void)setOutDirection:(int)arg0;
- (id)controllerForStartPlacement:(id)arg0 endPlacement:(UIInputViewSetPlacement *)arg1;
- (char)canDismissWithScrollView;
- (NSSet *)endPlacementForInputViewSet:(NSSet *)arg0;
- (int)outDirection;
- (NSSet *)startPlacementForInputViewSet:(NSSet *)arg0 currentPlacement:(id)arg1;

@end
