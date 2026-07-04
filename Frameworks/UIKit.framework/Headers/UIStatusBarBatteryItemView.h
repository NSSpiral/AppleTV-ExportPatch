/* Runtime dump - UIStatusBarBatteryItemView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarBatteryItemView : UIStatusBarItemView
{
    int _capacity;
    int _state;
    UIView * _accessoryView;
}

- (void)dealloc;
- (char)updateForNewData:(NSData *)arg0 actions:(int)arg1;
- (UIImage *)contentsImage;
- (float)legibilityStrength;
- (float)extraRightPadding;
- (void)_updateAccessoryImage;
- (char)_needsAccessoryImage;
- (UIImage *)_accessoryImage;
- (struct CGSize)_batteryOffsetWithBackground:(NSNotification *)arg0;

@end
