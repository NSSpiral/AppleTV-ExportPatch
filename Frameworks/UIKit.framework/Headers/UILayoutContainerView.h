/* Runtime dump - UILayoutContainerView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UILayoutContainerView : UIView <NSCoding>
{
    id _delegate;
    char _usesRoundedCorners;
    float _cornerRadius;
    char _usesInnerShadow;
    char _shadowViewsInstalled;
    UIView * _shadowView;
    char _forwardMoveToWindowCallbacks;
}

@property (nonatomic) id delegate;
@property (nonatomic) char usesInnerShadow;
@property (nonatomic) char usesRoundedCorners;
@property (nonatomic) char forwardMoveToWindowCallbacks;

- (void)dealloc;
- (UILayoutContainerView *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg0;
- (void)addSubview:(_UIVisualEffectSubview *)arg0;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg0;
- (NSObject *)delegate;
- (void)willMoveToWindow:(NSObject *)arg0;
- (void)setUsesRoundedCorners:(char)arg0;
- (void)setUsesInnerShadow:(char)arg0;
- (char)forwardMoveToWindowCallbacks;
- (void)_installShadowViews;
- (void)_tearDownShadowViews;
- (char)usesRoundedCorners;
- (char)usesInnerShadow;
- (void)setForwardMoveToWindowCallbacks:(char)arg0;

@end
