/* Runtime dump - UIInputViewAnimationControllerViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewAnimationControllerViewController : NSObject <UIInputViewAnimationController>
{
    <UIViewControllerContextTransitioning> * _context;
    <UIViewControllerAnimatedTransitioning_Keyboard> * _animator;
    UIInputViewSetPlacement * _endPlacement;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)controllerWithContext:(<UIViewControllerContextTransitioning> *)arg0;

- (void)dealloc;
- (UIInputViewAnimationControllerViewController *)initWithContext:(<UIViewControllerContextTransitioning> *)arg0;
- (NSString *)prepareAnimationWithHost:(NSString *)arg0 startPlacement:(id)arg1 endPlacement:(UIInputViewSetPlacement *)arg2;
- (void)performAnimationWithHost:(NSString *)arg0 context:(<UIViewControllerContextTransitioning> *)arg1;
- (void)completeAnimationWithHost:(NSString *)arg0 context:(<UIViewControllerContextTransitioning> *)arg1;

@end
