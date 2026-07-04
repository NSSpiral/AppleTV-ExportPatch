/* Runtime dump - UIAutoRotatingWindow
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAutoRotatingWindow : UIWindow
{
    int _interfaceOrientation;
    char _unknownOrientation;
}

+ (UIAutoRotatingWindow *)sharedPopoverHostingWindow;

- (UIAutoRotatingWindow *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (NSObject *)_initWithFrame:(struct CGRect)arg0 attached:(struct CGSize)arg1;
- (void)_didRemoveSubview:(_UIVisualEffectSubview *)arg0;
- (void)updateForOrientation:(int)arg0;
- (void)commonInit;

@end
