/* Runtime dump - UIRemoteKeyboardWindow
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoteKeyboardWindow : UITextEffectsWindow
{
    char _isViewServiceKeyboard;
    UIView * _viewServiceHostView;
}

@property (nonatomic) UIView * viewServiceHostView;

+ (UIRemoteKeyboardWindow *)remoteKeyboardWindowForScreen:(NSObject *)arg0 create:(char)arg1 forViewService:(char)arg2;

- (void)invalidate;
- (char)_isWindowServerHostingManaged;
- (char)_isHostedInAnotherProcess;
- (char)_usesWindowServerHitTesting;
- (char)_alwaysGetsContexts;
- (void)_didRemoveSubview:(_UIVisualEffectSubview *)arg0;
- (NSObject *)_basicInitWithScreen:(NSObject *)arg0 options:(NSDictionary *)arg1;
- (char)_matchingOptions:(NSDictionary *)arg0;
- (UIView *)viewServiceHostView;
- (void)setViewServiceHostView:(UIView *)arg0;

@end
