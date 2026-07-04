/* Runtime dump - UISoftwareDimmingWindow
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISoftwareDimmingWindow : UIWindow
{
    float _overlayLevel;
}

@property (nonatomic) float overlayLevel;

- (UISoftwareDimmingWindow *)initWithFrame:(struct CGRect)arg0;
- (char)_ignoresHitTest;
- (void)updateOverlayColor;
- (void)setOverlayLevel:(float)arg0;
- (float)overlayLevel;

@end
