/* Runtime dump - UIButtonLabel
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIButtonLabel : UILabel
{
    char _reverseShadow;
    UIButton * _button;
}

+ (NSDictionary *)_defaultAttributes;

- (void)setTextAlignment:(int)arg0;
- (void)setFont:(UIFont *)arg0;
- (void)setLineBreakMode:(int)arg0;
- (void)setShadowOffset:(struct CGSize)arg0;
- (char)_shouldAnimatePropertyWithKey:(NSString *)arg0;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (void)_setWantsAutolayout;
- (struct CGSize)shadowOffset;
- (void)setAdjustsFontSizeToFitWidth:(char)arg0;
- (void)setMinimumScaleFactor:(float)arg0;
- (void)_setMinimumFontSize:(float)arg0;
- (NSDictionary *)_defaultAttributes;
- (NSObject *)_initWithFrame:(struct CGRect)arg0 button:(struct CGSize)arg1;
- (void)setReverseShadow:(char)arg0;

@end
