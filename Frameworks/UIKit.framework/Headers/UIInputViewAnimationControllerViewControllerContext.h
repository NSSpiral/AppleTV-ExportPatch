/* Runtime dump - UIInputViewAnimationControllerViewControllerContext
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewAnimationControllerViewControllerContext : NSObject <UIViewControllerKeyboardContextTransitioning>
{
    _UIViewControllerTransitionContext * _context;
    <UIInputViewAnimationHost> * _host;
    UIView * _from;
    UIView * _to;
    struct CGRect _fromRect;
    struct CGRect _toRect;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) <UIViewControllerContextTransitioning> * mainContext;
@property (readonly, nonatomic) UIView * fromKeyboard;
@property (readonly, nonatomic) struct CGRect fromKeyboardFrame;
@property (readonly, nonatomic) UIView * toKeyboard;
@property (readonly, nonatomic) struct CGRect toKeyboardFrame;

+ (NSString *)contextWithHost:(<UIInputViewAnimationHost> *)arg0 startPlacement:(id)arg1 endPlacement:(UIInputViewSetPlacement *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;

- (void)dealloc;
- (UIView *)toKeyboard;
- (UIView *)fromKeyboard;
- (struct CGRect)fromKeyboardFrame;
- (struct CGRect)toKeyboardFrame;
- (UIInputViewAnimationControllerViewControllerContext *)initWithHost:(<UIInputViewAnimationHost> *)arg0 startPlacement:(id)arg1 endPlacement:(UIInputViewSetPlacement *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (<UIViewControllerContextTransitioning> *)mainContext;

@end
