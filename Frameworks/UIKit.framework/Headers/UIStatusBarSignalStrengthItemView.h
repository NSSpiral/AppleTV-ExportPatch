/* Runtime dump - UIStatusBarSignalStrengthItemView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView
{
    int _signalStrengthRaw;
    int _signalStrengthBars;
    char _enableRSSI;
    char _showRSSI;
}

- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (char)updateForNewData:(NSData *)arg0 actions:(int)arg1;
- (UIImage *)contentsImage;
- (float)extraRightPadding;
- (NSString *)_stringForRSSI;

@end
