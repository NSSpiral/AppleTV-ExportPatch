/* Runtime dump - UIViewControllerAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewControllerAction : NSObject
{
    UIViewController * _viewController;
    NSString * _name;
    int _transition;
    id _completion;
    float _curlUpRevealedHeight;
}

@property (nonatomic) UIViewController * viewController;
@property (retain, nonatomic) NSString * name;
@property (readonly, nonatomic) char animated;
@property (nonatomic) int transition;
@property (copy, nonatomic) id completion;
@property (nonatomic) float _curlUpRevealedHeight;

- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (float)_curlUpRevealedHeight;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg0;
- (void)setViewController:(UIViewController *)arg0;
- (void)setTransition:(int)arg0;
- (int)transition;
- (UIViewControllerAction *)initWithViewController:(UIViewController *)arg0 name:(NSString *)arg1 transition:(int)arg2;
- (char)animated;
- (void)_setCurlUpRevealedHeight:(float)arg0;
- (UIViewController *)viewController;

@end
