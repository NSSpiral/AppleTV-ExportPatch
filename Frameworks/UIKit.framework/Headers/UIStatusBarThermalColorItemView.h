/* Runtime dump - UIStatusBarThermalColorItemView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarThermalColorItemView : UIStatusBarItemView
{
    int _thermalColor;
    char _sunlightMode;
}

- (char)updateForNewData:(NSData *)arg0 actions:(int)arg1;
- (UIImage *)contentsImage;
- (UIColor *)_color;

@end
