/* Runtime dump - UINavigationTransitionView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINavigationTransitionView : UIView <NSCoding>
{
    id _delegate;
    UIView * _fromView;
    UIView * _toView;
    int _transition;
    UIResponder * _firstResponderToRestore;
    UIWindow * _originalWindow;
    float _fromViewAlpha;
    id _isTransitioning;
    id _popoverWillCleanUpNavigationTransition;
    id _usesRoundedCorners;
}

@property (nonatomic) id delegate;
@property (readonly) UIView * fromView;
@property (nonatomic) char usesRoundedCorners;
@property (readonly) char isTransitioning;
@property (nonatomic) char popoverWillCleanUpNavigationTransition;

+ (double)defaultDurationForTransition:(int)arg0;

- (UINavigationTransitionView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (UINavigationTransitionView *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (char)transition:(int)arg0 fromView:(UIView *)arg1 toView:(UIView *)arg2;
- (char)isTransitioning;
- (char)_isTransitioningFromView:(NSObject *)arg0;
- (char)transition:(int)arg0 toView:(UIView *)arg1;
- (UIView *)fromView;
- (void)setUsesRoundedCorners:(char)arg0;
- (char)usesRoundedCorners;
- (void)_navigationTransitionDidStop;
- (void)_cleanupTransition;
- (void)_notifyDelegateTransitionDidStopWithContext:(NSObject *)arg0;
- (void)setPopoverWillCleanUpNavigationTransition:(char)arg0;
- (char)popoverWillCleanUpNavigationTransition;
- (void)_cleanupTransitionFromPopover;

@end
