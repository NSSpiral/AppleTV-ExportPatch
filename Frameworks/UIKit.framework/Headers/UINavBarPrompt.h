/* Runtime dump - UINavBarPrompt
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINavBarPrompt : UIView
{
    UILabel * _label;
    UINavigationBar * _navBar;
}

- (void)dealloc;
- (void)layoutSubviews;
- (NSString *)prompt;
- (void)setPrompt:(NSString *)arg0;
- (void)clearWeakReference:(NSObject *)arg0;
- (UINavBarPrompt *)initWithPrompt:(NSString *)arg0 navBar:(UINavigationBar *)arg1;
- (struct CGRect)promptBounds;
- (struct CGRect)_labelFrame;
- (struct CGSize)_updateLabelTextColorAndFontReturningShadowOffset;
- (struct CGSize)_updateLabelTextColorAndFontReturningShadowOffset_legacy;

@end
