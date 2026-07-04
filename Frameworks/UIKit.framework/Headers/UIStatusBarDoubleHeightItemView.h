/* Runtime dump - UIStatusBarDoubleHeightItemView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarDoubleHeightItemView : UIStatusBarItemView
{
    NSString * _contentsString;
    float _letterSpacing;
    char _ellipsize;
}

- (void)dealloc;
- (char)updateForNewData:(NSData *)arg0 actions:(int)arg1;
- (UIImage *)contentsImage;
- (float)extraRightPadding;

@end
