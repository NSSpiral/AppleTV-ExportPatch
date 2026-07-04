/* Runtime dump - MPTransitionController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTransitionController : NSObject
{
    struct __CFDictionary * _observers;
    float _duration;
    UIView * _rootView;
    NSMutableSet * _persistentViewsToFadeOut;
    NSMutableSet * _viewsToFadeOut;
    NSMutableSet * _persistentViewsToFadeIn;
    NSMutableSet * _viewsToFadeIn;
    MPViewController * _fromViewController;
    int _fromInterfaceOrientation;
    MPViewController * _toViewController;
    int _toInterfaceOrientation;
    UIViewController * _toContainerViewController;
}

@property (nonatomic) float duration;
@property (nonatomic) int fromInterfaceOrientation;
@property (retain, nonatomic) MPViewController * fromViewController;
@property (retain, nonatomic) UIView * rootView;
@property (nonatomic) int toInterfaceOrientation;
@property (retain, nonatomic) MPViewController * toViewController;
@property (retain, nonatomic) UIViewController * toContainerViewController;

- (void)addObserver:(NSObject *)arg0 didEndSelector:(SEL)arg1;
- (void)transition:(unsigned int)arg0;
- (void)performTransition:(unsigned int)arg0;
- (UIView *)rootView;
- (void)setToContainerViewController:(UIViewController *)arg0;
- (void)fadeViewsForRestore:(char)arg0;
- (void)didFinishTransition:(char)arg0;
- (void)setToInterfaceOrientation:(int)arg0;
- (void)setFromInterfaceOrientation:(int)arg0;
- (UIViewController *)toContainerViewController;
- (void)messageObserversWithSuccess:(char)arg0;
- (void)willBeginTransition:(unsigned int)arg0;
- (void)addViewToFadeIn:(id)arg0 restoreOnPop:(char)arg1;
- (void)addViewToFadeOut:(id)arg0 restoreOnPop:(char)arg1;
- (int)fromInterfaceOrientation;
- (void)setFromViewController:(MPViewController *)arg0;
- (void)setRootView:(UIView *)arg0;
- (int)toInterfaceOrientation;
- (void)setToViewController:(MPViewController *)arg0;
- (void)dealloc;
- (MPTransitionController *)init;
- (float)duration;
- (void)setDuration:(float)arg0;
- (void)removeObserver:(NSObject *)arg0;
- (MPViewController *)fromViewController;
- (MPViewController *)toViewController;
- (void).cxx_destruct;

@end
