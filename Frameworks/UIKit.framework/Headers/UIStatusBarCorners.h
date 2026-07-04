/* Runtime dump - UIStatusBarCorners
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarCorners : UIView
{
    int _cornerStyle;
    int _cornerAlignment;
    UIView * _leftCorner;
    UIView * _rightCorner;
}

+ (float)cornerRadius;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (int)cornerStyle;
- (UIStatusBarCorners *)initForAlignment:(int)arg0 style:(int)arg1;
- (NSObject *)_imageForCornerWithStyle:(int)arg0;

@end
