/* Runtime dump - UIStatusBarBluetoothBatteryItemView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarBluetoothBatteryItemView : UIStatusBarItemView
{
    int _capacity;
}

- (char)updateForNewData:(NSData *)arg0 actions:(int)arg1;
- (UIImage *)contentsImage;
- (float)extraLeftPadding;

@end
