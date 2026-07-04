/* Runtime dump - UIKeyboardLayoutDictation
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardLayoutDictation : UIKeyboardLayout
{
    UIKBBackgroundView * _backgroundView;
    UIKBTree * _keyplane;
}

+ (UIKeyboardLayoutDictation *)activeInstance;
+ (float)landscapeHeight;
+ (float)portraitHeight;

- (UIKeyboardLayoutDictation *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setRenderConfig:(UIKBRenderConfig *)arg0;
- (int)_clipCornersOfView:(NSObject *)arg0;
- (struct CGSize)dragGestureSize;
- (id)currentKeyplane;
- (void)showKeyboardWithInputTraits:(UITextInputTraits *)arg0 screenTraits:(UIKBScreenTraits *)arg1 splitTraits:(NSArray *)arg2;
- (char)shouldFadeFromLayout;
- (char)shouldFadeToLayout;
- (char)usesAutoShift;
- (char)visible;
- (void)setupBackgroundViewForNewSplitTraits:(NSArray *)arg0;
- (struct CGSize)splitLeftSize;

@end
