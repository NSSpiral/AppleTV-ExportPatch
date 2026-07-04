/* Runtime dump - UIStatusBarTimeItemView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarTimeItemView : UIStatusBarItemView
{
    NSString * _timeString;
}

- (void)dealloc;
- (char)updateForNewData:(NSData *)arg0 actions:(int)arg1;
- (UIImage *)contentsImage;
- (int)textStyle;
- (float)extraRightPadding;

@end
