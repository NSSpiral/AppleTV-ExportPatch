/* Runtime dump - UIToolbarTextButton
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIToolbarTextButton : UIToolbarButton
{
    NSString * _title;
    NSString * _pressedTitle;
    NSSet * _possibleTitles;
}

- (void)dealloc;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (NSDictionary *)_scriptingInfo;
- (void)_UIAppearance_setTitleTextAttributes:(NSDictionary *)arg0 forState:(unsigned int)arg1;
- (void)_setTitleTextAttributes:(NSDictionary *)arg0 forState:(unsigned int)arg1;
- (void)_setPressed:(char)arg0;
- (UIToolbarTextButton *)initWithTitle:(NSString *)arg0 pressedTitle:(NSString *)arg1 withFont:(UIFont *)arg2 withBarStyle:(int)arg3 withStyle:(int)arg4 withTitleWidth:(float)arg5 possibleTitles:(NSSet *)arg6 withToolbarTintColor:(UIColor *)arg7;

@end
