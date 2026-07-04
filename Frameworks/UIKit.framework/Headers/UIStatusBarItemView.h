/* Runtime dump - UIStatusBarItemView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarItemView : UIView
{
    float _currentOverlap;
    struct CGContext * _imageContext;
    float _imageContextScale;
    _UILegibilityView * _legibilityView;
    char _visible;
    char _allowsUpdates;
    UIStatusBarItem * _item;
    UIStatusBarLayoutManager * _layoutManager;
    UIStatusBarForegroundStyleAttributes * _foregroundStyle;
}

@property (readonly, nonatomic) UIStatusBarItem * item;
@property (nonatomic) UIStatusBarLayoutManager * layoutManager;
@property (readonly, nonatomic) UIStatusBarForegroundStyleAttributes * foregroundStyle;
@property (nonatomic) char visible;
@property (nonatomic) char allowsUpdates;

+ (NSObject *)createViewForItem:(NSObject *)arg0 withData:(NSData *)arg1 actions:(int)arg2 foregroundStyle:(UIStatusBarForegroundStyleAttributes *)arg3;

- (void)dealloc;
- (NSString *)description;
- (void)setContentMode:(int)arg0;
- (UIStatusBarItem *)item;
- (char)_shouldAnimatePropertyWithKey:(NSString *)arg0;
- (void)willMoveToWindow:(NSObject *)arg0;
- (UIStatusBarLayoutManager *)layoutManager;
- (void)setVisible:(char)arg0;
- (int)textAlignment;
- (UIImage *)imageWithShadowNamed:(id)arg0;
- (UIStatusBarForegroundStyleAttributes *)foregroundStyle;
- (void)beginImageContextWithMinimumWidth:(float)arg0;
- (id)imageFromImageContextClippedToWidth:(float)arg0;
- (void)endImageContext;
- (char)updateForNewData:(NSData *)arg0 actions:(int)arg1;
- (UIImage *)contentsImage;
- (void)setLayoutManager:(UIStatusBarLayoutManager *)arg0;
- (char)isVisible;
- (int)legibilityStyle;
- (void)setPersistentAnimationsEnabled:(char)arg0;
- (UIStatusBarItemView *)initWithItem:(UIStatusBarItem *)arg0 data:(NSData *)arg1 actions:(int)arg2 style:(NSObject *)arg3;
- (void)setAllowsUpdates:(char)arg0;
- (float)updateContentsAndWidth;
- (char)allowsUpdates;
- (float)legibilityStrength;
- (float)adjustFrameToNewSize:(float)arg0;
- (void)setLayerContentsImage:(UIImage *)arg0;
- (int)textStyle;
- (float)standardPadding;
- (float)shadowPadding;
- (void)endDisablingRasterization;
- (void)setVisible:(char)arg0 frame:(struct CGRect)arg1 duration:(struct CGSize)arg2;
- (void)setCurrentOverlap:(float)arg0;
- (float)currentOverlap;
- (float)currentLeftOverlap;
- (float)currentRightOverlap;
- (float)setStatusBarData:(struct ?)arg0 actions:(int)arg1;
- (UIFont *)textFont;
- (float)extraLeftPadding;
- (float)extraRightPadding;
- (float)resetContentOverlap;
- (float)addContentOverlap:(float)arg0;
- (float)maximumOverlap;
- (char)animatesDataChange;
- (void)performPendedActions;
- (NSString *)imageWithText:(NSString *)arg0;
- (void)beginDisablingRasterization;

@end
