/* Runtime dump - UIStatusBarDataNetworkItemView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView
{
    int _dataNetworkType;
    int _wifiStrengthRaw;
    int _wifiStrengthBars;
    char _enableRSSI;
    char _showRSSI;
}

- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (char)updateForNewData:(NSData *)arg0 actions:(int)arg1;
- (UIImage *)contentsImage;
- (float)extraLeftPadding;
- (float)maximumOverlap;
- (NSString *)_stringForRSSI;
- (UIImage *)_dataNetworkImage;

@end
