/* Runtime dump - UIStatusBarBluetoothItemView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarBluetoothItemView : UIStatusBarItemView
{
    char _connected;
    char _shouldAnimateConnection;
}

- (void)setVisible:(char)arg0;
- (char)updateForNewData:(NSData *)arg0 actions:(int)arg1;
- (UIImage *)contentsImage;
- (void)performPendedActions;
- (float)alphaForConnected:(char)arg0;
- (void)_blinkAnimationDidStop:(id)arg0 finished:(id /* block */)arg1 context:(NSObject *)arg2;

@end
